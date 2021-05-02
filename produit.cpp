#include "produit.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QPainter>
#include <QTextDocument>
#include "connection.h"
#include <QString>
#include<QSqlQuery>

Produit::Produit()
{

}
/*bool modifyValues(QString nom, QString quantite, QString description ,  QString id, QString oldid)
{

   QSqlQuery query;
   query.prepare("UPDATE produit "
               "SET  id = :newID, quantite= :quantite, description=:description, nom=:nom  WHERE id = :oldid ;");
    query.addBindValue(quantite);
    query.addBindValue(id);
    query.addBindValue(description);
    query.addBindValue(nom);
    query.addBindValue(oldid);


    if(!query.exec()){
        QMessageBox::critical(nullptr, QObject::tr("ID already exists."),
                    QObject::tr("Please change the ID."), QMessageBox::Ok);
        return false;
    }
    else{
        qDebug("Values added to DB");
        return true;
    }
}

bool addValuesToDB(QString nom, QString description, QString quantite ,QString id)
{
   QSqlQuery query;
       query.prepare("UPDATE produit "
                   "SET nom = :nom, description= :description, quantite=:quantite , ID=:id");
        query.addBindValue(nom);
        query.addBindValue(description);
        query.addBindValue(quantite);
        query.addBindValue(id);


        if(!query.exec()){
            QMessageBox::critical(nullptr, QObject::tr("ID already exists."),
                        QObject::tr("Please change the ID."), QMessageBox::Ok);
            return false;
        }
        else{
            qDebug("Values added to DB");
            return true;
        }
    }*/


Produit::Produit(QString nom,QString description ,QString quantite,int id)
{
   this->nom=nom;
   this->description=description;
   this->quantite=quantite;
   this->id=id;
}
bool Produit::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("INSERT INTO PRODUIT (id, nom, quantite,description) "
                  "VALUES (:id, :nom, :quantite,:description)");
    query.bindValue(":nom",nom);
     query.bindValue(":description",description);
     query.bindValue(":quantite",quantite);
     query.bindValue(":id",res);


    if(!query.exec()){
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                    QObject::tr("Employeur ajouter"), QMessageBox::Ok);
        return false;
    }
    else{
        qDebug("Values added to DB");
        return true;
    }
}

QSqlQueryModel * Produit::afficher()
{

QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from Produit");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("description"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("quantite"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("id"));
return model;

}
bool Produit::supprimer(int id)
{
 QSqlQuery query;
 QString res=QString::number(id);
 query.prepare("DELETE From Produit where ID= :id");
 query.bindValue(":id",res);

 return query.exec();
}
void Produit::afficher(QString nom, QString description,QString quantite, int id){
    this->nom=nom;
    this->description=description;
    this->quantite=quantite;
    this->id=id;
}
QSqlQueryModel* Produit::recherche(QString a)
{



        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("select ID from emp where ID='"+a+"' ");

        return model;


}



bool Produit::modifierproduit(QString nom, QString description,QString quantite, int id)
{

QSqlQuery query;
query.prepare("UPDATE produit set id=:id,nom=:nom,quantite=:quantite,description=:description WHERE id=:id");
query.bindValue(":id",id);
query.bindValue(":nom",nom);
query.bindValue(":quantite",quantite);
query.bindValue("description",description);

return (query.exec());
}

   QSqlQueryModel * Produit::trie(const QString &critere, const QString &mode )
{

    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from Produit order by "+critere+" "+mode+"");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("description"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("quantite"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("id"));

return  model;
}
