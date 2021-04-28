#include "departement.h"

departement::departement()
{
    id_departement="";
    salaire=0;
}

departement::departement(QString id_departement, int salaire)
{
    this->id_departement=id_departement;
    this->salaire=salaire;
}
bool departement::ajouter()
{
    QSqlQuery query ;
    QString res = QString::number(salaire);

    query.prepare("INSERT INTO departements (id_departement,salaire) "
                  "VALUES (:id_departement,:salaire)");
    query.bindValue(":id_departement", id_departement);
    query.bindValue(":salaire", res);
    return query.exec();

}
QSqlQueryModel * departement::afficher()
{
  QSqlQueryModel * model =new QSqlQueryModel();
  model->setQuery("select * from departements");
  model->setHeaderData(0, Qt::Horizontal , QObject::tr("Département"));
  model->setHeaderData(1, Qt::Horizontal , QObject::tr("Salaire"));

  return model ;
}
bool departement::modifier ()
{
    QSqlQuery query ;
    QString res = QString::number(salaire);
    query.prepare("UPDATE departements set id_departement=:id_departement , salaire = :salaire WHERE id_departement=:id_departement ");
    query.bindValue(":id_departement", id_departement);
    query.bindValue(":salaire", salaire);
    return query.exec();
}

bool departement::supprimer(QString id)
{
QSqlQuery query ;
query.prepare("Delete from departements where id_departement= :id_departement");
query.bindValue(":id_departement",id);
return query.exec();

}

QSqlQueryModel * departement::afficher_rech(QString ch)
{
    QSqlQueryModel * model =new QSqlQueryModel();
      model->setQuery("SELECT * FROM departements  where id_departement='"+ch+"'  ");
      model->setHeaderData(0, Qt::Horizontal , QObject::tr("Département"));
      model->setHeaderData(1, Qt::Horizontal , QObject::tr("Salaire"));
      return model ;


}
QSqlQueryModel * departement::afficher_choix(QString choix)
{
    QSqlQueryModel * model =new QSqlQueryModel();




    if (choix=="Département")

    {

           model->setQuery("SELECT * FROM departements ORDER BY id_departement;");

    }


    else if(choix=="Salaire croissant")
    {
        model->setQuery("SELECT * FROM departements  ORDER BY salaire ASC;");
    }
    else if(choix=="Salaire decroissant")
    {
        model->setQuery("SELECT * FROM departements  ORDER BY salaire DESC;");
    }
    else if (choix=="Choisir")
    {
        model->setQuery("SELECT * FROM departements ");
    }

    model->setHeaderData(0, Qt::Horizontal , QObject::tr("Département"));
    model->setHeaderData(1, Qt::Horizontal , QObject::tr("Salaire"));

    return model;
}

