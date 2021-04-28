#include "materiel.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QDate>

materiel::materiel()
{
id_materiel=0;
nom="";
prix=0;
quantite=0;

date_achat=QDate(2000,01,01);
date_garantie=QDate(2000,01,01);
lieux_achat="";


}
materiel::materiel(int id_materiel ,QString nom ,int prix, int quantite, QDate date_achat, QDate date_garantie, QString lieux_achat )
{this->id_materiel=id_materiel;
this->nom=nom;
this->prix=prix;
this->quantite=quantite;
this->date_achat=date_achat;
this->date_garantie=date_garantie;
this->lieux_achat=lieux_achat;}

int materiel::getid_materiel(){return id_materiel;}
QString materiel::getnom(){return nom;}
int materiel::getprix(){return prix;}
int materiel::getquantite(){return quantite;}
QDate materiel::getdate_achat(){return date_achat;}
QDate materiel::getdate_garantie(){return date_garantie;}
QString materiel::getlieux_achat(){return lieux_achat;}

  void materiel::setid_materiel(int id_materiel){this->id_materiel=id_materiel;}
  void materiel::setnom(QString nom ){this->nom=nom;}
  void materiel::setprix(int prix){this->prix=prix;}
  void materiel::setquantite(int quantite){this->quantite=quantite;}
  void materiel::setdate_achat(QDate date_achat){this->date_achat=date_achat;}
  void materiel::setdate_garantie(QDate date_garantie){this->date_garantie=date_garantie;}
  void materiel::setlieux_achat(QString lieux_achat ){this->lieux_achat=lieux_achat;}






 bool materiel::ajouter (){


     QSqlQuery query;
     QString id_materiel_string=QString::number(id_materiel);
     QString quantite_string=QString::number(quantite);

     QString prix_string=QString::number(prix);
           query.prepare("INSERT INTO Materiel (id_materiel, nom, prix, quantite, date_achat, date_garantie, lieux_achat) "
                         "VALUES (:id_materiel, :nom, :prix, :quantite, :date_achat, :date_garantie, :lieux_achat)");
           query.bindValue(":id_materiel", id_materiel_string);
           query.bindValue(":nom", nom);
           query.bindValue(":prix",prix_string );
           query.bindValue(":quantite", quantite_string);
           query.bindValue(":date_achat",date_achat );
           query.bindValue(":date_garantie",date_garantie );
           query.bindValue(":lieux_achat", lieux_achat);
           return query.exec();


 }
 bool materiel::supprimer(int id_materiel)
 {
     QSqlQuery query;
     QString id_string=QString::number(id_materiel);


           query.prepare("DELETE from materiel where id_materiel=:id_materiel");
           query.bindValue(0, id_materiel);

         return  query.exec();


 }
 QSqlQueryModel*materiel::afficher()
 {
     QSqlQueryModel*model=new QSqlQueryModel();

          model->setQuery("SELECT*FROM Materiel");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantite"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date de l'achat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Periode de garantie"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieux d'achat"));



     return model;
 }

 bool materiel::modifiermateriel( int id_materiel, QString nom,int prix,int quantite, QDate date_achat, QDate date_garantie, QString lieux_achat){

     QSqlQuery query;
     query.prepare("UPDATE materiel set id_materiel=:id_materiel,nom=:nom,prix=:prix,quantite=:quantite,date_achat=:date_achat,date_garantie=:date_garantie,lieux_achat=:lieux_achat WHERE id_materiel=:id_materiel");
     query.bindValue(":id_materiel",id_materiel);
     query.bindValue(":nom",nom);
     query.bindValue(":prix",prix);
     query.bindValue(":quantite",quantite);
     query.bindValue(":date_achat",date_achat);
     query.bindValue(":date_garantie",date_garantie);
     query.bindValue(":lieux_achat",lieux_achat);

return  query.exec();

}

 QSqlQueryModel* materiel:: trier_id()
 {

     QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("select * from materiel order by (id_materiel)ASC ");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantite"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date de l'achat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Periode de garantie"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieux d'achat"));
     return model;
 }
 QSqlQueryModel* materiel:: trier_prix()
 {

     QSqlQueryModel * model=new QSqlQueryModel();


     model->setQuery("select * from materiel order by (prix)ASC ");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantite"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date de l'achat"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Periode de garantie"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieux d'achat"));

     return model;
 }








 QSqlQueryModel * materiel::chercher_materiel_avancee(QString nom,QString lieux_achat)

{
          { QSqlQueryModel *model = new QSqlQueryModel;
     model->setQuery("SELECT * FROM materiel WHERE upper(nom) Like upper('"+nom+"%') and upper(lieux_achat) Like upper('"+lieux_achat+"%') ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prix"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantite"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date de l'achat"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Periode de garantie"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieux d'achat"));
        return model;
        }
}
