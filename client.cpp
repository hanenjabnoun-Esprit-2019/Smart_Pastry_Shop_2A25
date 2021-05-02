#include "client.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
client::client()
{
cin=0;
nom="";
prenom="";
adresse="";
telephone=0;
}
client::client(int cin,QString nom,QString prenom,QString adresse,int telephone)

{
    this->cin=cin;
     this->nom=nom;
      this->prenom=prenom;
       this->adresse=adresse;
        this->telephone=telephone;
}

int client::getcin(){return cin;}
QString client::getnom(){return nom;}
QString client::getprenom(){return prenom;}
QString client::getadresse(){return adresse;}
int client::gettelephone(){return telephone;}

void client::setcin(int cin){this->cin=cin;}
 void client::setnom(QString nom ){this->nom=nom;}
 void client::setprenom(QString prenom ){this->prenom=prenom;}
 void client::setadresse(QString adresse ){this->adresse=adresse;}
 void client::settelephone(int telephone){this->telephone=telephone;}

 bool client::ajouter (){

     QSqlQuery query;
     QString cin_string=QString::number(cin);
      QString telephone_string=QString::number(telephone);
           query.prepare("INSERT INTO client (cin, nom, prenom, adresse, telephone) "
                         "VALUES (:cin, :nom, :prenom, :adresse, :telephone)");
           query.bindValue(":cin", cin_string);
           query.bindValue(":nom", nom);
           query.bindValue(":prenom", prenom);
           query.bindValue(":adresse", adresse);
           query.bindValue(":telephone", telephone_string);
         return  query.exec();

 }
 bool client::supprimer(int cin)
 {
     QSqlQuery query;
     QString cin_string=QString::number(cin);
      QString telephone_string=QString::number(telephone);
           query.prepare("DELETE from client where cin=:cin");
           query.bindValue(0, cin);

         return  query.exec();


 }
QSqlQueryModel*client::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM CLIENT");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Carte identité"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom client"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom client"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse client"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone client"));
           return model;
}


bool client::modifclient(int cin,QString nom,QString prenom,QString adresse,int telephone){
    QSqlQuery query;
    query.prepare("UPDATE CLIENT set cin=:cin,nom=:nom,prenom=:prenom,adresse=:adresse,telephone=:telephone WHERE cin=:cin");
    query.bindValue(":cin",cin);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":telephone",telephone);

    return (query.exec());}


QSqlQueryModel* client:: trier_cin()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from client order by (cin)ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Carte identité"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom client"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse client"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone client"));

    return model;
}
QSqlQueryModel* client:: trier_nom()
{

    QSqlQueryModel * model=new QSqlQueryModel();


    model->setQuery("select * from client order by (nom)ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Carte identité"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom client"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse client"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone client"));

    return model;
}









 QSqlQueryModel *client::chercher(QString nom,QString prenom)
  {

     {
         QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("SELECT * FROM client WHERE  upper(nom) Like upper('"+nom+"%') and upper(prenom) Like upper('"+prenom+"%') ");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Carte identité"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom client"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom client"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse client"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Telephone client"));
         qDebug() << model;
         return model ;
     }


}
