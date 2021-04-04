#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"commande.h"
#include<QString>
#include <QMessageBox>
#include <QTextStream>
#include <QSqlQuery>
#include<QtDebug>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tableView_boutique->setModel(b.afficher());
    ui->tableView_Commandes->setModel(c.afficher());
     ui->spinBox->setValidator(new QIntValidator(100, 999, this));
     ui->spinBox_3->setValidator(new QIntValidator(100, 999, this));
     ui->spinBox_2->setValidator(new QIntValidator(100, 999, this));
     ui->spinBox_4->setValidator(new QIntValidator(100, 999, this));
     ui->lineEdit_6->setValidator(new QIntValidator(100, 999, this));
     ui->lineEdit_2->setValidator(new QIntValidator(100, 999, this));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}





void MainWindow::on_ajouter_commande_clicked()
{
    QString nom_produit=ui->lineEdit->text();
       int nbr_produit=ui->lineEdit_2->text().toInt();
        QString ref_commande=ui->lineEdit_3->text();
        QString ID=ui->lineEdit_7->text();
      commande c (nom_produit,ref_commande,nbr_produit,ID);
        bool test=c.ajouter();
        if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tableView_Commandes->setModel(c.afficher());


        }
            else
                QMessageBox::critical(nullptr, QObject::tr("not ok"),
                            QObject::tr("ajout non effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_supprimer_commande_clicked()
{
    commande c1;
    c1.set_ref(ui->lineEdit_8->text());
      bool test=c1.supprimer(c1.get_ref());
      if(test)
         {
             QMessageBox::information(nullptr, QObject::tr("ok"),
                         QObject::tr("suppression effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
             ui->tableView_Commandes->setModel(c.afficher());


     }
         else
             QMessageBox::critical(nullptr, QObject::tr("not ok"),
                         QObject::tr("suppression non effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_ajouter_boutique_clicked()
{
   QString ID_boutique=ui->lineEdit_16->text();
   QString nom_boutique=ui->lineEdit_9->text();
  QString adresse=ui->lineEdit_10->text();
  int nbr_employees=ui->spinBox->text().toInt()  ;
   int nbr_heure=ui->spinBox_3->text().toInt() ;

boutique b( ID_boutique,nom_boutique,adresse,nbr_employees,nbr_heure);

bool test=b.ajouter();
   if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tableView_boutique->setModel(b.afficher());


        }
            else
               {
       QMessageBox::critical(nullptr, QObject::tr("not ok"),
                             QObject::tr("ajout non effectuer.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


   }




}
void MainWindow::on_supprimer_boutique_clicked()
{
    boutique b1;
    b1.set_ID_boutique(ui->lineEdit_14->text());

    bool test=b1.supprimer(ui->lineEdit_14->text());
    if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                       QObject::tr("suppression effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
           ui->tableView_boutique->setModel(b.afficher());


   }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                       QObject::tr("suppression non effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_bar_ajoutC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_bar_modifC_clicked()
{
  ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_bar_afficheC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::on_bar_suppC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_bar_ajoutB_clicked()
{
      ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_bar_modifB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}

void MainWindow::on_bar_affichB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(3);
}

void MainWindow::on_bar_suppB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(2);
}

void MainWindow::on_home1_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_home2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_modifier_boutique_clicked()
{



    QString  ID_boutique=ui->lineEdit_11->text();
    QString nom_boutique=ui->lineEdit_12->text();
    QString adresse=ui->lineEdit_13->text();
    int nbr_employees=ui->spinBox_2->text().toInt();
    int nbr_heure=ui->spinBox_4->text().toInt();
 boutique b(ID_boutique,nom_boutique, adresse,nbr_employees,nbr_heure);
   bool test=b.modifier(ID_boutique,nom_boutique, adresse,nbr_employees,nbr_heure);
   if(test)
       {ui->tableView_boutique->setModel(b.afficher());
           QMessageBox::information(nullptr, QObject::tr("modifier une boutique"),
                                    QObject::tr("boutique  modifié.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);}
       else
           QMessageBox::critical(nullptr, QObject::tr("Modifier une boutique"),
                                 QObject::tr("erreur !.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);





   }





void MainWindow::on_tableView_boutique_clicked(const QModelIndex &index)
{
    ui->lineEdit_11->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),0)).toString());
    ui->lineEdit_12->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),1)).toString());
    ui->lineEdit_13->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),2)).toString());
    ui->spinBox_2->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),3)).toString());
    ui->spinBox_4->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),4)).toString());
}

void MainWindow::on_modifier_commande_clicked()
{

   QString ref_commande=ui->lineEdit_4->text();
    QString nom_produit=ui->lineEdit_5->text();
   int nbr_produit=ui->lineEdit_6->text().toInt();
   QString ID=ui->lineEdit_15->text();
   commande c(nom_produit,ref_commande,nbr_produit,ID);

   bool test=c.modifier(nom_produit,ref_commande,nbr_produit,ID);

   if(test)
       { ui->tableView_Commandes->setModel(c.afficher());
           QMessageBox::information(nullptr, QObject::tr("modifier une commande"),
                                    QObject::tr("commande  modifié.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);
   }
       else
   {
           QMessageBox::critical(nullptr, QObject::tr("Modifier une commande"),
                                 QObject::tr("erreur !.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);}

}

void MainWindow::on_tableView_Commandes_clicked(const QModelIndex &index)
{
    ui->lineEdit_4->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),1)).toString());
     ui->lineEdit_5->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),0)).toString());
     ui->lineEdit_6->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),2)).toString());
     ui->lineEdit_15->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),3)).toString());
}

void MainWindow::on_tri_boutique_clicked()
{
    QString critere=ui->comboBox->currentText();
    QString mode;
    if (ui->checkBox->checkState()==false)
{
         mode="DESC";
}
     else if(ui->checkBox_2->checkState()==false)
     {
         mode="ASC";
     }

     ui->tableView_boutique->setModel(b.trie(critere,mode));
}

void MainWindow::on_pushButton_22_clicked()
{
    QTableView tableView_boutique;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry ;
     qry.prepare("SELECT * FROM boutique");
     qry.exec();
     Modal->setQuery(qry);
    tableView_boutique.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount =tableView_boutique.model()->rowCount();
     const int columnCount =tableView_boutique.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les boutique")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (! tableView_boutique.isColumnHidden(column))
             out << QString("<th>%1</th>").arg( tableView_boutique.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (! tableView_boutique.isColumnHidden(column)) {
                     QString data =  tableView_boutique.model()->data( tableView_boutique.model()->index(row, column)).toString().simplified();
                     out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                 }
             }
             out << "</tr>\n";
         }
         out <<  "</table>\n"
                 "<br><br>"


         "</body>\n"
         "</html>\n";

     QTextDocument *document = new QTextDocument();
     document->setHtml(strStream);

     QPrinter printer;

     QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
     if (dialog->exec() == QDialog::Accepted) {
         document->print(&printer);
     }

     delete document;
}

void MainWindow::on_lineEdit_17_textChanged(const QString &arg1)
{

    if(ui->lineEdit_17->text() == "")
        {
            ui->tableView_Commandes->setModel(c.afficher());
        }
        else
        {
             ui->tableView_Commandes->setModel(c.rechercher(ui->lineEdit_17->text()));
        }

}
