#include "dialog.h"
#include "ui_dialog.h"
#include "personnel.h"
#include "departement.h"
#include<QMessageBox>
#include<QComboBox>
#include <QString>
#include"connexion.h"
#include<QDebug>
#include"mainwindow.h"
#include<QDateTime>
#include<QDate>
#include <QtCore>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include<QTextDocument>
#include <QtWidgets/QMainWindow>
#include <QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tableView_11->setModel(tmppersonnel.afficher());
    ui->tableView_12->setModel(tmpdepartement.afficher());
    ui->comboBox_29->setModel(tmppersonnel.afficher_id());
    ui->try_5->setModel(tmppersonnel.afficher_cin());
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::controleEmail(QString test)
{
    for(int i=0;i<test.length();i++)
    {
        if (test.at(i)=='@')
        {
            return true;
        }
    }
    return false;
}
bool Dialog::controlenum(int test)
{
    QString tel= QString::number(test);
    for(int i=0;i<tel.length();i++)
    {
        if (tel.length()==8)
        {
            return true;
        }
    }
    return false;
}
bool Dialog::controlenumm(int test)
{
    QString tel= QString::number(test);
    if(tel!="")
        return  true;
    return false;
}
bool Dialog::controleVide(QString test)
{
    if(test!="")
        return  true;
    return false;

}

void Dialog::on_pushButton_91_clicked()
{
    //ajouter personnel
    int cin = ui->lineEdit_31->text().toInt();
    QString nom= ui->lineEdit_32->text();
    QString prenom= ui->lineEdit_33->text();
    int telephone=ui->lineEdit_138->text().toInt();
    QString email=ui->lineEdit_140->text();
    QDateTime date_embauche=ui->dateEdit_10->dateTime();
    QDateTime date_naissance=ui->dateEdit_9->dateTime();
    QString id_departement=ui->comboBox_29->currentText();

    bool test1=(controleEmail(email)&&controlenum(cin)&&controleVide(nom)
                &&controleVide(prenom)&&controlenumm(telephone));


   personnel p(cin ,nom ,prenom,telephone,email,date_embauche,
             date_naissance,id_departement);


   if (test1)
   {
       bool test =p.ajouter();
       if(test)
       {
       ui->tableView_11->setModel(tmppersonnel.afficher());
       QMessageBox::information(nullptr, QObject::tr("Ajouter un personnel "),
                                  QObject::tr("personnel  ajouté.\n"

                                              "Click Cancel to exit."), QMessageBox::Cancel);}

   }
   else

   {


       QMessageBox::information(nullptr, QObject::tr("Ajouter un personnel "),
                                  QObject::tr("personnel non ajouté, vérifier les champs.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);


   }

}
void Dialog::on_pushButton_92_clicked()
{     ui->tableView_11->setModel(tmppersonnel.afficher());
     ui->stackedWidget->setCurrentIndex(2);

}

void Dialog::on_pushButton_5_clicked()
{   ui->comboBox_29->setModel(tmppersonnel.afficher_id());
    ui->stackedWidget->setCurrentIndex(1);
}

void Dialog::on_pushButton_93_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_pushButton_98_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Dialog::on_pushButton_99_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_pushButton_94_clicked()
{
    //modifier personnel
    int cin = ui->lineEdit_31->text().toInt();
    QString nom= ui->lineEdit_32->text();
    QString prenom= ui->lineEdit_33->text();
    int telephone=ui->lineEdit_138->text().toInt();
    QString email=ui->lineEdit_140->text();
    QDateTime date_embauche=ui->dateEdit_10->dateTime();
    QDateTime date_naissance=ui->dateEdit_9->dateTime();
    QString id_departement=ui->comboBox_29->currentText();

    bool test1=(controleEmail(email)&&controlenum(cin)&&controleVide(nom)
                &&controleVide(prenom)&&controlenumm(telephone));
    personnel p(cin ,nom ,prenom,telephone,email,date_embauche,
              date_naissance,id_departement);


    if (test1)
    {
        bool test = p.modifier();
        if(test)
        {

        QMessageBox::information(nullptr, QObject::tr("modifier un personnel"),
                                   QObject::tr("personnel modifié.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);}
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("modifier un personnel"),
                                   QObject::tr("personnel non modifié, vérifier les champs.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void Dialog::on_tableView_11_activated(const QModelIndex &index)
{
    QString val=ui->tableView_11->model()->data(index).toString();
    connexion conn;


    QSqlQuery qry;
    qry.prepare("select * from employes where cin='"+val+"'");
    if (qry.exec())
    {
        while(qry.next())
        {

            ui->stackedWidget->setCurrentIndex(1);
            ui->lineEdit_31->setText(qry.value(0).toString());//cin
            ui->lineEdit_32->setText(qry.value(1).toString());//nom
            ui->lineEdit_33->setText(qry.value(2).toString());//prenom
            ui->lineEdit_138->setText(qry.value(3).toString());//telephone
            ui->lineEdit_140->setText(qry.value(4).toString());//email
            ui->dateEdit_10->setDate(qry.value(5).toDate());//date_emb
            ui->dateEdit_9->setDate(qry.value(6).toDate());//date_naiss
            ui->comboBox_29->setCurrentText(qry.value(7).toString());//id_dep


        }
 }
}

void Dialog::on_pushButton_95_clicked()
{
    //supprimer personnel
    int cin = ui->lineEdit_31->text().toInt();
    bool test = tmppersonnel.supprimer(cin);
    if (test)
    {

        QMessageBox::information(nullptr, QObject::tr("supprimer un personnel "),
                                   QObject::tr("personnel supprimé.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Dialog::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Dialog::on_pushButton_107_clicked()
{
    //ajouter departement
    QString id_departement= ui->lineEdit_195->text();
    int salaire = ui->lineEdit_196->text().toInt();



    bool test1=(controleVide(id_departement)
                );


   departement d(id_departement,salaire);


   if (test1)
   {
       bool test =d.ajouter();
       if(test)
       {
       ui->tableView_12->setModel(tmpdepartement.afficher());
       QMessageBox::information(nullptr, QObject::tr("Ajouter un departement "),
                                  QObject::tr("departement ajouté.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);}
   }
   else
   {
       QMessageBox::information(nullptr, QObject::tr("Ajouter un departement "),
                                  QObject::tr("departement non ajouté, vérifier les champs.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
   }
}

void Dialog::on_tableView_12_activated(const QModelIndex &index)
{
    QString val=ui->tableView_12->model()->data(index).toString();
    connexion conn;


    QSqlQuery qry;
    qry.prepare("select * from departements where id_departement='"+val+"'");
    if (qry.exec())
    {
        while(qry.next())
        {

            ui->stackedWidget->setCurrentIndex(5);
            ui->lineEdit_195->setText(qry.value(0).toString());//id
            ui->lineEdit_196->setText(qry.value(1).toString());//sal

        }
 }
}

void Dialog::on_pushButton_146_clicked()
{
    //modifier departement
     QString id_departement= ui->lineEdit_195->text();
    int salaire = ui->lineEdit_196->text().toInt();



    bool test1=(controleVide(id_departement)
               );
    departement d(id_departement,salaire);


    if (test1)
    {
        bool test = d.modifier();
        if(test)
        {

        ui->tableView_12->setModel(tmpdepartement.afficher());
        QMessageBox::information(nullptr, QObject::tr("modifier un departement"),
                                   QObject::tr("departement modifié.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);}
    }
    else
    {
        ui->tableView_12->setModel(tmpdepartement.afficher());
        QMessageBox::information(nullptr, QObject::tr("modifier un departement"),
                                   QObject::tr("departement non modifié, vérifier les champs.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Dialog::on_pushButton_145_clicked()
{
    //supprimer departement
    QString id = ui->lineEdit_195->text();
    bool test = tmpdepartement.supprimer(id);
    if (test)
    {
        ui->tableView_12->setModel(tmpdepartement.afficher());
        QMessageBox::information(nullptr, QObject::tr("supprimer un departement "),
                                   QObject::tr("departement supprimé.\n"
                                               "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void Dialog::on_pushButton_97_clicked()
{
    QString val=ui->lineEdit_143->text();
    if(val!="")
    ui->tableView_11->setModel(tmppersonnel.afficher_rech(val));
    else
    {
        ui->tableView_11->setModel(tmppersonnel.afficher());
    }


}

void Dialog::on_comboBox_31_activated(const QString &arg1)
{
    QString choix=ui->comboBox_31->currentText();

    ui->tableView_11->setModel(tmppersonnel.afficher_choix(choix));
}

void Dialog::on_pushButton_106_clicked()
{
    QString val=ui->lineEdit_150->text();
    if(val!="")
    ui->tableView_12->setModel(tmpdepartement.afficher_rech(val));
    else
    {
        ui->tableView_12->setModel(tmpdepartement.afficher());
    }
}

void Dialog::on_comboBox_33_activated(const QString &arg1)
{
    QString choix=ui->comboBox_33->currentText();

    ui->tableView_12->setModel(tmpdepartement.afficher_choix(choix));
}

void Dialog::on_pushButton_147_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

int Dialog::on_pushButton_96_clicked()
{

ui->stackedWidget->setCurrentIndex(6);


}

void Dialog::on_pushButton_100_clicked()
{
    ui->try_4->setModel(tmppersonnel.afficher_email_rep());
    ui->stackedWidget->setCurrentIndex(4);
}

void Dialog::on_pushButton_105_clicked()
{
    smtp* Smtp = new smtp (ui->try_4->currentText(), ui->paswd_3->text(), ui->server_3->text(), ui->port_3->text().toUShort());
        connect(Smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


        Smtp->sendMail(ui->try_4->currentText(), ui->lineEdit_151->text() , ui->lineEdit_148->text(),ui->lineEdit_149->text());
    QString status;
}
void Dialog::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

void Dialog::on_pushButton_102_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_pushButton_148_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

int Dialog::on_pushButton_103_clicked()
{
                  QString cin = ui->try_5->currentText();
                  QString nom= ui->lineEdit_35->text();
                  QString prenom= ui->lineEdit_36->text();
                  QString telephone= ui->lineEdit_37->text();
                  QString email = ui->lineEdit_141->text();
                  QString departement = ui->lineEdit_142->text();
                  QString  date =ui->lineEdit_39->text();
                  QString   datef =ui->lineEdit_41->text();
                  QString   dated =ui->lineEdit_40->text();
                  QString   objet =ui->lineEdit_144->text();

                  bool test1=(controleVide(date)&& controleVide(dated) && controleVide(datef) && controleVide(objet)
                  &&controleVide(nom)&& controleVide(prenom) &&controleVide(telephone)&&controleEmail(email) &&controleVide(departement)     );


            if (test1)
                {
                QPrinter printer;
                QString ch="test";
                      printer.setOutputFormat(QPrinter::PdfFormat);
                      printer.setOutputFileName("C:/Users/ASUS/Desktop/demande.pdf");
                      QPainter painter;
                      QImage carte(":/imagen/Demande de congé cookies.png");
                      if (! painter.begin(&printer)) { // failed to open file
                          qWarning("failed to open file, is it writable?");
                          return 1;
                      }
                      painter.setPen(Qt::darkBlue);
                      painter.setFont(QFont("Corbel", 20, QFont::Bold));

                      painter.drawImage(70,-20,carte);
                      painter.drawText(50, 400, "Objet          : ");
                      painter.drawText(50, 500, "CIN          : ");
                      painter.drawText(50, 600, "Nom          : ");
                      painter.drawText(50, 700, "Prénom       : ");
                      painter.drawText(50, 800, "Téléphone    : ");
                      painter.drawText(50, 900, "Email        : ");
                      painter.drawText(50, 1000, "Département  : ");
                      painter.drawText(50, 1100, "Date Debut   : ");
                      painter.drawText(50, 1200, "Date Fin    : ");

                      painter.setPen(Qt::black);
                      painter.drawText(350, 400, objet);
                      painter.drawText(350, 500, cin);
                      painter.drawText(350, 600,nom );
                      painter.drawText(350, 700, prenom);
                      painter.drawText(350, 800, telephone);
                      painter.drawText(350, 900, email);
                      painter.drawText(350, 1000, departement);
                      painter.drawText(350, 1100, dated);
                      painter.drawText(350, 1200, datef);

                      painter.setPen(Qt::darkRed);
                      painter.drawText(40,10, "le "+date);
                      if (! printer.newPage()) {
                          qWarning("failed in flushing page to disk, disk full?");
                          return 1;
                      }

                      painter.end();


                QMessageBox::information(nullptr, QObject::tr("Impression du PDF "),
                                           QObject::tr("demande imprimé sur demande.pdf .\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                QMessageBox::information(nullptr, QObject::tr("Impression du PDF "),
                                           QObject::tr("demande non imprimé , verifier les champs .\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);
            }












}

void Dialog::on_try_5_activated(const QString &arg1)
{
    QString cin=ui->try_5->currentText();
    connexion conn;


    QSqlQuery qry;
    qry.prepare("select * from employes where cin='"+cin+"'");
    if (qry.exec())
    {
        while(qry.next())
        {


            ui->stackedWidget->setCurrentIndex(6);
            ui->try_5->setCurrentText(qry.value(0).toString());//cin
            ui->lineEdit_35->setText(qry.value(1).toString());//nom
            ui->lineEdit_36->setText(qry.value(2).toString());//prenom
            ui->lineEdit_37->setText(qry.value(3).toString());//telephone
            ui->lineEdit_141->setText(qry.value(4).toString());//email
            ui->lineEdit_142->setText(qry.value(7).toString());//id_dep
        }
 }

}

void Dialog::on_pushButton_108_clicked()
{
    ui->try_4->setModel(tmppersonnel.afficher_email_rep());
    ui->stackedWidget->setCurrentIndex(4);
}

void Dialog::on_pushButton_101_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}
