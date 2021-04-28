#include "gestion_des_clients.h"
#include "ui_gestion_des_clients.h"


#include"carte.h"
#include"client.h"
#include"notif.h"
#include<QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>
#include<QtDebug>
#include <QTextDocument>


gestion_des_clients::gestion_des_clients(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gestion_des_clients)
{
    ui->setupUi(this);
    ui->cin->setValidator(new QIntValidator(100, 9999999, this));
     ui->tel->setValidator(new QIntValidator(100, 9999999, this));
      ui->ref->setValidator(new QIntValidator(100, 9999999, this));
       ui->cin_2->setValidator(new QIntValidator(100, 9999999, this));
        ui->nbr->setValidator(new QIntValidator(100, 9999999, this));
    ui->table_client->setModel(c.afficher());
    ui->table_carte->setModel(f.afficher());

}

gestion_des_clients::~gestion_des_clients()
{
    delete ui;
}


void gestion_des_clients::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void gestion_des_clients::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void gestion_des_clients::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void gestion_des_clients::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}







//crud client

void gestion_des_clients::on_PB_supp_clicked()
{
client c1;
 c1.setcin(ui->c_supp->text().toInt());
 bool test=c1.supprimer(c1.getcin());
 QMessageBox msgbox;

 if(test)
    { msgbox.setText("succes de supprssion.");
     ui->table_client->setModel(c.afficher());
 }
 else
     msgbox.setText("echec de suppression");
 msgbox.exec();

 }




void gestion_des_clients::on_pb_ajouter_clicked()
{

        int cin=ui->cin->text().toInt();
        QString nom=ui->nom->text();
        QString prenom=ui->prenom->text();
        QString adresse=ui->adresse->text();
        int telephone=ui->tel->text().toInt();



   client c (cin,nom,prenom,adresse,telephone);
         bool test=c.ajouter();
         if(test)
         {
             QMessageBox::information(nullptr, QObject::tr("ok"),
                         QObject::tr("ajout effectuer.\n"


                                     "Click Cancel to exit."), QMessageBox::Cancel);


         ui->table_client->setModel(c.afficher());}
             else{
             notif n("Erreur","Ce materiel existe déja ");
                  n.afficher();}


                      /*QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                  QObject::tr("ajout non effectuer.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);*/
}


void gestion_des_clients::on_modifclient_clicked()
{
    int cin=ui->cin_m->text().toInt();
    QString nom=ui->nom_m->text();
    QString prenom=ui->prenom_m->text();
    QString adresse=ui->adresse_m->text();
    int telephone=ui->telephone_m->text().toInt();

                  client Cl(cin,nom,prenom,adresse,telephone);

         bool test = Cl.modifclient(cin,nom,prenom,adresse,telephone);


         if(test)

         {
              ui->table_client->setModel(Cl.afficher());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("client modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("client non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_des_clients::on_table_client_clicked(const QModelIndex &index)
{
    ui->cin_m->setText( ui->table_client->model()->data(ui->table_client->model()->index(ui->table_client->selectionModel()->currentIndex().row(),0)).toString() );
     ui->nom_m->setText( ui->table_client->model()->data(ui->table_client->model()->index(ui->table_client->selectionModel()->currentIndex().row(),1)).toString() );
      ui->prenom_m->setText( ui->table_client->model()->data(ui->table_client->model()->index(ui->table_client->selectionModel()->currentIndex().row(),2)).toString() );
       ui->adresse_m->setText( ui->table_client->model()->data(ui->table_client->model()->index(ui->table_client->selectionModel()->currentIndex().row(),3)).toString() );
        ui->telephone_m->setText( ui->table_client->model()->data(ui->table_client->model()->index(ui->table_client->selectionModel()->currentIndex().row(),4)).toString() );

}


//crud carte_fidelite

void gestion_des_clients::on_pb_ajouter_c_clicked()
{
    int reference=ui->ref->text().toInt();
 int cin_client=ui->cin_2->text().toInt();
 int nbr_point=ui->nbr->text().toInt();
QDate date_emission=ui->date_e->date();



carte f (reference,cin_client,nbr_point,date_emission);
     bool test=f.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"


                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->table_carte->setModel(f.afficher());
     }
         else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("ajout non effectuer.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_des_clients::on_pb_supp_c_clicked()
{
    carte f1;
     f1.setreference(ui->r_supp->text().toInt());
     bool test=f1.supprimer(f1.getreference());
     QMessageBox msgbox;

     if(test)
        { msgbox.setText("succes de supprssion.");
         ui->table_carte->setModel(f.afficher());
     }
     else
         msgbox.setText("echec de suppression");
     msgbox.exec();

}
















void gestion_des_clients::on_modifcarte_clicked()
{
    int reference=ui->ref_m->text().toInt();
 int cin_client=ui->cl_m->text().toInt();
 int nbr_point=ui->point_m->text().toInt();
  QDate date_emission=ui->date_m->date();

                  carte Cr(reference,cin_client,nbr_point,date_emission);

         bool test = Cr.modifcarte(reference,cin_client,nbr_point,date_emission);


         if(test)

         {
              ui->table_carte->setModel(Cr.afficher());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("carte fidelite modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("carte fidelite non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_des_clients::on_table_carte_clicked(const QModelIndex &index)
{
    ui->ref_m->setText( ui->table_carte->model()->data(ui->table_carte->model()->index(ui->table_carte->selectionModel()->currentIndex().row(),0)).toString() );
     ui->cl_m->setText( ui->table_carte->model()->data(ui->table_carte->model()->index(ui->table_carte->selectionModel()->currentIndex().row(),1)).toString() );
      ui->point_m->setText( ui->table_carte->model()->data(ui->table_carte->model()->index(ui->table_carte->selectionModel()->currentIndex().row(),2)).toString() );
        ui->date_m->setDate( ui->table_carte->model()->data(ui->table_carte->model()->index(ui->table_carte->selectionModel()->currentIndex().row(),3)).toDate() );
}


//metier client

void gestion_des_clients::on_tri_c_clicked()
{
    ui->table_client->setModel(c.trier_cin());
}

void gestion_des_clients::on_tri_n_clicked()
{
    ui->table_client->setModel(c.trier_nom());
}

void gestion_des_clients::on_afficher_normal_clicked()
{
     ui->table_client->setModel(c.afficher());
}

void gestion_des_clients::on_recherche_clicked()
{

   QString nom =ui->nom_r->text();
QString prenom =ui->adr_r->text();


            if (nom!= ""){
           ui->table_client->setModel(c.chercher(nom,prenom)) ;}
           if (prenom!= ""){
          ui->table_client->setModel(c.chercher(nom,prenom)) ;

}
}





void gestion_des_clients::on_exp_c_clicked()
{
    QTableView table_client;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM client");
     qry.exec();
     Modal->setQuery(qry);
     table_client.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = table_client.model()->rowCount();
     const int columnCount =  table_client.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les Clients")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!table_client.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(table_client.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!table_client.isColumnHidden(column)) {
                     QString data = table_client.model()->data(table_client.model()->index(row, column)).toString().simplified();
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







//metier carte

void gestion_des_clients::on_tri_r_clicked()
{
   ui->table_carte->setModel(f.trier_ref());
}

void gestion_des_clients::on_tri_ci_clicked()
{
    ui->table_carte->setModel(f.trier_cinclient());
}

void gestion_des_clients::on_afficher_clicked()
{
    ui->table_carte->setModel(f.afficher());
}

void gestion_des_clients::on_exp_2_clicked()
{
    QTableView table_carte;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM carte");
     qry.exec();
     Modal->setQuery(qry);
     table_carte.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = table_carte.model()->rowCount();
     const int columnCount =  table_carte.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les cartes fidélite")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!table_carte.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(table_carte.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!table_carte.isColumnHidden(column)) {
                     QString data = table_carte.model()->data(table_carte.model()->index(row, column)).toString().simplified();
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

void gestion_des_clients::on_rech_2_clicked()
{
    int reference=ui->ref_r->text().toInt();
   int cin_client =ui->cc_r->text().toInt();


              if (reference!=0){
           ui->table_carte->setModel(f.chercher(reference,cin_client)) ;}
            if (cin_client!=0){
           ui->table_carte->setModel(f.chercher(reference,cin_client)) ;}


}
