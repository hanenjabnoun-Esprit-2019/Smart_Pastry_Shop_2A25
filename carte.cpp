#include "carte.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
carte::carte()
{
reference=0;
cin_client=0;
nbr_point=0;
}
carte::carte(int reference,int cin_client,int nbr_point)

{
    this->reference=reference;
     this->cin_client=cin_client;
      this->nbr_point=nbr_point;

}

int carte::getreference(){return reference;}
int carte::getcin_client(){return cin_client;}
int carte::getnbr_point(){return nbr_point;}

void carte::setreference(int reference){this->reference=reference;}
 void carte::setcin_client(int cin_client ){this->cin_client=cin_client;}
 void carte::setnbr_point(int nbr_point){this->nbr_point=nbr_point;}

 bool carte::ajouter (){

     QSqlQuery query;
     QString reference_string=QString::number(reference);
      QString cin_client_string=QString::number(cin_client);
      QString nbr_point_string=QString::number(nbr_point);
           query.prepare("INSERT INTO carte_fidelite (reference, cin_client, nbr_point) "
                         "VALUES (:reference, :cin_client, :nbr_point)");
           query.bindValue(":reference", reference_string);
           query.bindValue(":cin_client", cin_client_string);
           query.bindValue(":nbr_point", nbr_point_string);
         return  query.exec();

 }
 bool carte::supprimer(int reference)
 {
     QSqlQuery query;
     QString reference_string=QString::number(reference);
     QString cin_client_string=QString::number(cin_client);
     QString nbr_point_string=QString::number(nbr_point);
           query.prepare("DELETE from carte_fidelite where reference=:reference");
           query.bindValue(0, reference);

         return  query.exec();


 }
QSqlQueryModel*carte::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM CARTE_FIDELITE");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference carte fidelite"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Cin client"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbr point"));

           return model;
}



