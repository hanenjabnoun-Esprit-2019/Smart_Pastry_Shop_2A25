#include "maintenance.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QDate>

/*maintenance::maintenance()

{
reference=0;
id_materiel=0;
nom_reparateur="";
derniere_reparation=QDate(2000,01,01);
prochaine_visite=QDate(2000,01,01);
description="";
}

maintenance::maintenance(int id_materiel ,QString nom_reparateur, QDate derniere_reparation, QDate prochaine_visite, QString description, int reference )
{
this->id_materiel=id_materiel;
this->nom_reparateur=nom_reparateur;
this->derniere_reparation=derniere_reparation;
this->prochaine_visite=prochaine_visite;
this->description=description;
this->reference=reference;}


int maintenance::getid_materiel(){return id_materiel;}
QString maintenance::getnom_reparateur(){return nom_reparateur;}
QDate maintenance::getderniere_reparation(){return derniere_reparation;}
QDate maintenance::getprochaine_visite(){return prochaine_visite;}
QString maintenance::getdescription(){return description;}
int maintenance::getreference(){return reference;}


  void maintenance::setid_materiel(int id_materiel){this->id_materiel=id_materiel;}
  void maintenance::setnom_reparateur(QString nom_reparateur ){this->nom_reparateur=nom_reparateur;}
  void maintenance::setderniere_reparation(QDate derniere_reparation){this->derniere_reparation=derniere_reparation;}
  void maintenance::setprochaine_visite(QDate prochaine_visite){this->prochaine_visite=prochaine_visite;}
  void maintenance::setdescription(QString description ){this->description=description;}
  void maintenance::setreference(int reference){this->reference=reference;}






 bool maintenance::ajouter (){


     QSqlQuery query;
     QString id_materiel_string=QString::number(id_materiel);
     QString reference_string=QString::number(reference);

           query.prepare("INSERT INTO Maintenance (id_materiel, nom_reparateur, derniere_reparation, prochaine_visite, description, reference) "
                                      "VALUES (:id_materiel, :nom_reparateur, :derniere_reparation, :prochaine_visite, :description, :reference)");

           query.bindValue(":id_materiel", id_materiel_string);
           query.bindValue(":nom_reparateur", nom_reparateur);
           query.bindValue(":derniere_reparation",derniere_reparation );
           query.bindValue(":prochaine_visite",prochaine_visite );
           query.bindValue(":description", description);
           query.bindValue(":reference", reference_string);
           return query.exec();


 }
 bool maintenance::supprimer(int reference)
 {
     QSqlQuery query;
     QString reference_string=QString::number(reference);


           query.prepare("DELETE from Maintenance where reference=:reference");
           query.bindValue(0, reference);

         return  query.exec();


 }
 QSqlQueryModel*maintenance::afficher()
 {
     QSqlQueryModel*model=new QSqlQueryModel();

          model->setQuery("SELECT*FROM Maintenance");

          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom du reparateur"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Derniere reparation"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prochaine visite"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("description"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));



     return model;
 }


 bool maintenance::modifiermaintenance(int id_materiel, QString nom_reparateur, QDate derniere_reparation, QDate prochaine_visite, QString description,  int reference){

     QSqlQuery query;
     query.prepare("UPDATE materiel set id_materiel=:id_materiel,nom_reparateur=:nom_reparateur,derniere_reparation=:derniere_reparation,prochaine_visite=:prochaine_visite,description=:description,reference=:reference WHERE id_materiel=:id_materiel");

     query.bindValue(":id_materiel",id_materiel);
     query.bindValue(":nom_reparateur",nom_reparateur);
     query.bindValue(":derniere_reparation",derniere_reparation);
     query.bindValue(":prochaine_visite",prochaine_visite);
     query.bindValue(":description",description);
     query.bindValue(":reference",reference);
return  query.exec();

   }







QSqlQueryModel*maintenance::trier_reference()
    {

    QSqlQueryModel * model=new QSqlQueryModel();
             model->setQuery("select * from maintenance order by (reference)ASC ");

             model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom du reparateur"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Derniere reparation"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prochaine visite"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("description"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));
return model;
     }

QSqlQueryModel* maintenance::trier_reparateur()
     {

         QSqlQueryModel * model=new QSqlQueryModel();


         model->setQuery("select * from maintenance order by (nom_reparateur)ASC ");

         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom du reparateur"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Derniere reparation"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prochaine visite"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("description"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));

         return model;
     }








     QSqlQueryModel * maintenance::chercher_maintenance_avancee(QString nom_reparateur,QString description)

    {
              { QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("SELECT * FROM maintenance WHERE upper(nom_reparateur) Like upper('"+nom_reparateur+"%') and upper(description) Like upper('"+description+"%') ");

         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom du reparateur"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Derniere reparation"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prochaine visite"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("description"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));
         return model;
            }
    }
*/
maintenance::maintenance()

{
reference=0;
id_materiel=0;
nom_reparateur="";
derniere_reparation=QDate(2000,01,01);
prochaine_visite=QDate(2000,01,01);
description="";
}

maintenance::maintenance(int id_materiel ,QString nom_reparateur, QDate derniere_reparation, QDate prochaine_visite, QString description, int reference )
{
this->id_materiel=id_materiel;
this->nom_reparateur=nom_reparateur;
this->derniere_reparation=derniere_reparation;
this->prochaine_visite=prochaine_visite;
this->description=description;
this->reference=reference;}


int maintenance::getid_materiel(){return id_materiel;}
QString maintenance::getnom_reparateur(){return nom_reparateur;}
QDate maintenance::getderniere_reparation(){return derniere_reparation;}
QDate maintenance::getprochaine_visite(){return prochaine_visite;}
QString maintenance::getdescription(){return description;}
int maintenance::getreference(){return reference;}

  void maintenance::setreference(int reference){this->reference=reference;}
  void maintenance::setid_materiel(int id_materiel){this->id_materiel=id_materiel;}
  void maintenance::setnom_reparateur(QString nom_reparateur ){this->nom_reparateur=nom_reparateur;}
  void maintenance::setderniere_reparation(QDate derniere_reparation){this->derniere_reparation=derniere_reparation;}
  void maintenance::setprochaine_visite(QDate prochaine_visite){this->prochaine_visite=prochaine_visite;}
  void maintenance::setdescription(QString description ){this->description=description;}






 bool maintenance::ajouter (){


     QSqlQuery query;
     QString id_materiel_string=QString::number(id_materiel);
     QString reference_string=QString::number(reference);

           query.prepare("INSERT INTO Maintenance (id_materiel, nom_reparateur, derniere_reparation, prochaine_visite, description, reference) "
                                      "VALUES (:id_materiel, :nom_reparateur, :derniere_reparation, :prochaine_visite, :description, :reference)");

           query.bindValue(":id_materiel", id_materiel_string);
           query.bindValue(":nom_reparateur", nom_reparateur);
           query.bindValue(":derniere_reparation",derniere_reparation );
           query.bindValue(":prochaine_visite",prochaine_visite );
           query.bindValue(":description", description);
           query.bindValue(":reference", reference_string);
           return query.exec();


 }
 bool maintenance::supprimer(int reference)
 {
     QSqlQuery query;
     QString reference_string=QString::number(reference);


           query.prepare("DELETE from Maintenance where reference=:reference");
           query.bindValue(0, reference);

         return  query.exec();


 }
 QSqlQueryModel*maintenance::afficher()
 {
     QSqlQueryModel*model=new QSqlQueryModel();

          model->setQuery("SELECT*FROM Maintenance");

          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prochaine visite"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom du reparateur"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Derniere reparation"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));



     return model;
 }


 bool maintenance::modifiermaintenance(int id_materiel, QString nom_reparateur, QDate derniere_reparation, QDate prochaine_visite, QString description,  int reference){

     QSqlQuery query;
     query.prepare("UPDATE materiel set id_materiel=:id_materiel,nom_reparateur=:nom_reparateur,derniere_reparation=:derniere_reparation,prochaine_visite=:prochaine_visite,description=:description,reference=:reference WHERE id_materiel=:id_materiel");

     query.bindValue(":id_materiel",id_materiel);
     query.bindValue(":nom_reparateur",nom_reparateur);
     query.bindValue(":derniere_reparation",derniere_reparation);
     query.bindValue(":prochaine_visite",prochaine_visite);
     query.bindValue(":description",description);
     query.bindValue(":reference",reference);
return  query.exec();

   }







QSqlQueryModel*maintenance::trier_reference()
    {

    QSqlQueryModel * model=new QSqlQueryModel();
             model->setQuery("select * from maintenance order by (reference)ASC ");

             model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prochaine visite"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom du reparateur"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Derniere reparation"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));
return model;
     }

QSqlQueryModel* maintenance::trier_reparateur()
     {

         QSqlQueryModel * model=new QSqlQueryModel();


         model->setQuery("select * from maintenance order by (nom_reparateur)ASC ");

         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prochaine visite"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom du reparateur"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Derniere reparation"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));

         return model;
     }








     QSqlQueryModel * maintenance::chercher_maintenance_avancee(QString nom_reparateur,QString description)

    {
              { QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("SELECT * FROM maintenance WHERE upper(nom_reparateur) Like upper('"+nom_reparateur+"%') and upper(description) Like upper('"+description+"%') ");

         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prochaine visite"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom du reparateur"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("description"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Derniere reparation"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reference"));
         return model;
            }
    }

