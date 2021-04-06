#include "carte.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QDate>
carte::carte()
{
reference=0;
cin_client=0;
nbr_point=0;
date_emission=QDate(2000,01,01);
}
carte::carte(int reference,int cin_client,int nbr_point,QDate date_emission)

{
    this->reference=reference;
     this->cin_client=cin_client;
      this->nbr_point=nbr_point;
    this->date_emission=date_emission;

}

int carte::getreference(){return reference;}
int carte::getcin_client(){return cin_client;}
int carte::getnbr_point(){return nbr_point;}
QDate carte::getdate_emission(){return date_emission;}

void carte::setreference(int reference){this->reference=reference;}
 void carte::setcin_client(int cin_client ){this->cin_client=cin_client;}
 void carte::setnbr_point(int nbr_point){this->nbr_point=nbr_point;}
  void carte::setdate_emission(QDate date_emission){this->date_emission=date_emission;}

 bool carte::ajouter (){

     QSqlQuery query;
     QString reference_string=QString::number(reference);
      QString cin_client_string=QString::number(cin_client);
      QString nbr_point_string=QString::number(nbr_point);
           query.prepare("INSERT INTO carte_fidelite (reference, cin_client, nbr_point, date_emission) "
                         "VALUES (:reference, :cin_client, :nbr_point, :date_emission)");
           query.bindValue(":reference", reference_string);
           query.bindValue(":cin_client", cin_client_string);
           query.bindValue(":nbr_point", nbr_point_string);
            query.bindValue(":date_emission", date_emission);
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
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'émission"));


           return model;
}




bool carte::modifcarte(int reference,int cin_client,int nbr_point,QDate date_emission){
    QSqlQuery query;
    query.prepare("UPDATE CARTE_FIDELITE set reference=:reference,cin_client=:cin_client,nbr_point=:nbr_point,date_emission=:date_emission WHERE reference=:reference");
    query.bindValue(":reference",reference);
    query.bindValue(":cin_client",cin_client);
    query.bindValue(":nbr_point",nbr_point);
    query.bindValue(":date_emission",date_emission);



    return (query.exec());}




QSqlQueryModel* carte:: trier_ref()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from CARTE_FIDELITE order by (reference)ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference carte fidelite"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Cin client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbr point"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'émission"));
    return model;
}

QSqlQueryModel* carte:: trier_cinclient()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from CARTE_FIDELITE order by (cin_client)ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference carte fidelite"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Cin client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbr point"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'émission"));
    return model;
}





QSqlQueryModel *carte::chercher(int reference,int cin_client)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM client WHERE reference Like (reference) and cin_client Like (cin_client) ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference carte fidelite"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Cin client"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nbr point"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'émission"));
        qDebug() << model;
        return model ;
    }


}




