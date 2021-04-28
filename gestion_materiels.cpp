#include "gestion_materiels.h"
#include "ui_gestion_materiels.h"

#include"materiel.h"
#include"qsqlquery.h"
#include <QPrintDialog>
#include<QTextStream>
#include <QPrinter>
#include <QDebug>
#include <QTextStream>
#include"materiel.h"
#include"maintenance.h"
#include<QString>
#include <QMessageBox>
#include <QObject>
#include <QDate>
#include<QTextDocument>
#include"notif.h"

gestion_materiels::gestion_materiels(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gestion_materiels)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(100, 9999999, this));
    ui->Tab_materiel->setModel(M.afficher());
    ui->table_maintenance->setModel(A.afficher());

}

gestion_materiels::~gestion_materiels()
{
    delete ui;
}


void gestion_materiels::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void gestion_materiels::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void gestion_materiels::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void gestion_materiels::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}









void gestion_materiels::on_PB_supp_clicked()
{
 materiel M1;
 M1.setid_materiel(ui->le_id_supp->text().toInt());
 bool test=M1.supprimer(M1.getid_materiel());
 QMessageBox msgbox;

 if(test)
    { msgbox.setText("succes de supprssion.");
     ui->Tab_materiel->setModel(M.afficher());
 }
 else
     msgbox.setText("echec de suppression");
 msgbox.exec();

 }




void gestion_materiels::on_pb_ajouter_clicked()
{

        int id_materiel=ui->le_id->text().toInt();
        QString nom=ui->le_nom->text();
        int prix=ui->le_prix->text().toInt();
        int quantite=ui->la_quantite->text().toInt();
        QDate date_achat=ui->le_date_achat->date();
        QDate date_garantie=ui->le_date_garantie->date();
        QString lieux_achat=ui->le_lieux_achat->text();




    materiel M (id_materiel,nom,prix,quantite,date_achat,date_garantie,lieux_achat);
         bool test=M.ajouter();
         if(test)
         {
             QMessageBox::information(nullptr, QObject::tr("ok"),
                         QObject::tr("ajout effectuer.\n"


                                     "Click Cancel to exit."), QMessageBox::Cancel);
         ui->Tab_materiel->setModel(M.afficher());}
             else
         {
             notif n("Erreur","Ce materiel existe déja ");
                  n.afficher();}
                      /*QMessageBox::critical(nullptr, QObject::tr("not ok"),
                                  QObject::tr("ajout non effectuer.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);*/
}


void gestion_materiels::on_pb_ajouter_m_clicked()
{
    int reference=ui->ref_ajouter->text().toInt();
    int id_materiel=ui->m_id_materie->text().toInt();
    QString nom_reparateur=ui->le_nom_reparateur->text();
    QDate derniere_reparation=ui->la_derniere_reparation->date();
    QDate prochaine_visite=ui->la_prochaine_visite->date();
    QString description=ui->la_description->text();




maintenance A (reference,id_materiel,nom_reparateur,derniere_reparation,prochaine_visite,description);
     bool test=A.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"


                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->table_maintenance->setModel(A.afficher());
     }
         else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("ajout non effectuer.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_materiels::on_pb_supp_maintenance_clicked()
{
    maintenance A1;
    A1.setid_materiel(ui->lineEdit_15->text().toInt());
    bool test=A1.supprimer(A1.getid_materiel());
    QMessageBox msgbox;

    if(test)
       {
        msgbox.setText("succes de supprssion.");

        ui->table_maintenance->setModel(A.afficher());
       }
    else
        msgbox.setText("echec de suppression");
    msgbox.exec();
}

void gestion_materiels::on_pushButton_9_clicked()
{
        int id_materiel=ui->lineEdit_11->text().toInt();
        QString nom=ui->nom_modif->text();
        int prix=ui->Prix_modif->text().toInt();
        int quantite=ui->Quantite_modif->text().toInt();
        QDate date_achat=ui->date_achat_modifier->date();
        QDate date_garantie=ui->date_garantie_modif->date();
        QString lieux_achat=ui->lieux_achat_modif->text();
                     materiel M(id_materiel, nom, prix, quantite,  date_achat, date_garantie, lieux_achat);

            bool test = M.modifiermateriel( id_materiel, nom, prix, quantite,  date_achat, date_garantie, lieux_achat);


            if(test)

                   {
                        ui->Tab_materiel->setModel(M.afficher());
                       QMessageBox::information(nullptr, QObject::tr("update "),
                                   QObject::tr("materiel modifie\n"
                   "Click Cancel to exit."), QMessageBox::Cancel);}
                   else
                       QMessageBox::critical(nullptr, QObject::tr("update "),
                                   QObject::tr("materiel non modifie\n"
                   "Click Cancel to exit."), QMessageBox::Cancel);



}



void gestion_materiels::on_Tab_materiel_clicked(const QModelIndex &index)
{
    ui->lineEdit_11->setText( ui->Tab_materiel->model()->data(ui->Tab_materiel->model()->index(ui->Tab_materiel->selectionModel()->currentIndex().row(),0)).toString() );
ui->nom_modif->setText( ui->Tab_materiel->model()->data(ui->Tab_materiel->model()->index(ui->Tab_materiel->selectionModel()->currentIndex().row(),1)).toString() );
ui->Quantite_modif->setText( ui->Tab_materiel->model()->data(ui->Tab_materiel->model()->index(ui->Tab_materiel->selectionModel()->currentIndex().row(),2)).toString() );
ui->Prix_modif->setText( ui->Tab_materiel->model()->data(ui->Tab_materiel->model()->index(ui->Tab_materiel->selectionModel()->currentIndex().row(),3)).toString() );


ui->lieux_achat_modif->setText( ui->Tab_materiel->model()->data(ui->Tab_materiel->model()->index(ui->Tab_materiel->selectionModel()->currentIndex().row(),6)).toString() );
}

void gestion_materiels::on_Trier_ID_clicked()
{
    ui->Tab_materiel->setModel(M.trier_id());
}

void gestion_materiels::on_Trier_Prix_clicked()
{
    ui->Tab_materiel->setModel(M.trier_prix());
}





void gestion_materiels::on_Rechercher_materiel_clicked()
{

    QString nom =ui->chercher_nom->text();
    QString lieux_achat =ui->cherche_lieux_achat->text();

            if (nom!= ""){
            ui->Tab_materiel->setModel(M.chercher_materiel_avancee(nom,lieux_achat)) ;}
            if (lieux_achat!= ""){
            ui->Tab_materiel->setModel(M.chercher_materiel_avancee(nom,lieux_achat)) ;}


}

void gestion_materiels::on_pushButton_15_clicked()
{
    int reference=ui->ref_modifier->text().toInt();
    int id_materiel=ui->id_modifier->text().toInt();
    QString nom_reparateur=ui->modifier_nom->text();
    QDate derniere_reparation=ui->modifier_date_mainte->date();
    QDate prochaine_visite=ui->modifier_visite_->date();
    QString description=ui->modifier_des->text();
                 maintenance A(reference,id_materiel, nom_reparateur, derniere_reparation, prochaine_visite,  description);

        bool test = A.modifiermaintenance(reference, id_materiel, nom_reparateur, derniere_reparation, prochaine_visite,  description);


        if(test)

               {
                    ui->Tab_materiel->setModel(A.afficher());
                   QMessageBox::information(nullptr, QObject::tr("update "),
                               QObject::tr("maintenance modifie\n"
               "Click Cancel to exit."), QMessageBox::Cancel);}
               else
                   QMessageBox::critical(nullptr, QObject::tr("update "),
                               QObject::tr("maintenance non modifie\n"
               "Click Cancel to exit."), QMessageBox::Cancel);




}

void gestion_materiels::on_table_maintenance_clicked(const QModelIndex &index)
{
ui->ref_modifier->setText( ui->table_maintenance->model()->data(ui->table_maintenance->model()->index(ui->table_maintenance->selectionModel()->currentIndex().row(),0)).toString() );
ui->id_modifier->setText( ui->table_maintenance->model()->data(ui->table_maintenance->model()->index(ui->table_maintenance->selectionModel()->currentIndex().row(),1)).toString() );
ui->nom_modif->setText( ui->table_maintenance->model()->data(ui->table_maintenance->model()->index(ui->table_maintenance->selectionModel()->currentIndex().row(),2)).toString() );
ui->modifier_des->setText( ui->table_maintenance->model()->data(ui->table_maintenance->model()->index(ui->table_maintenance->selectionModel()->currentIndex().row(),6)).toString() );
}


/*void gestion_materiels::on_trier_ref_mainte_clicked()
{
 ui->table_maintenance->setModel(A.trier_reference());
}

void gestion_materiels::on_trier_repa_mainte_clicked()
{
     ui->table_maintenance->setModel(A.trier_reparateur());
}

void gestion_materiels::on_rechercher_maint_clicked()
{
    QString nom_reparateur =ui->repa_chercher->text();
    QString description =ui->ref_chercher->text();

    if (nom_reparateur!= ""){
    ui->table_maintenance->setModel(A.chercher_maintenance_avancee(nom_reparateur,description)) ;}
    if (description!= ""){
    ui->table_maintenance->setModel(A.chercher_maintenance_avancee(nom_reparateur,description)) ;}
}
*/

void gestion_materiels::on_pushButton_13_clicked()
{
    QTableView tab_materiel;
        QSqlQueryModel * Modal=new  QSqlQueryModel();

        QSqlQuery qry ;
         qry.prepare("SELECT * FROM materiel");
         qry.exec();
         Modal->setQuery(qry);
        tab_materiel.setModel(Modal);






         QString strStream;
         QTextStream out(&strStream);

         const int rowCount =tab_materiel.model()->rowCount();
         const int columnCount =tab_materiel.model()->columnCount();

         const QString strTitle ="Document";


         out <<  "<html>\n"
             "<head>\n"
                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
             <<  QString("<title>%1</title>\n").arg(strTitle)
             <<  "</head>\n"
             "<body bgcolor=#ffffff link=#5000A0>\n"
            << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les Materiels")
            <<"<br>"
             <<"<table border=1 cellspacing=0 cellpadding=2>\n";

         out << "<thead><tr bgcolor=#f0f0f0>";
         for (int column = 0; column < columnCount; column++)
             if (!tab_materiel.isColumnHidden(column))
                 out << QString("<th>%1</th>").arg( tab_materiel.model()->headerData(column, Qt::Horizontal).toString());
         out << "</tr></thead>\n";
         for (int row = 0; row < rowCount; row++) {
                 out << "<tr>";
                 for (int column = 0; column < columnCount; column++) {
                     if (!tab_materiel.isColumnHidden(column)) {
                         QString data =  tab_materiel.model()->data( tab_materiel.model()->index(row, column)).toString().simplified();
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


