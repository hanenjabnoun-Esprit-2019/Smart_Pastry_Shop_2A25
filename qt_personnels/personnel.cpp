#include "personnel.h"
#include"connexion.h"
personnel::personnel()
{
    nom="";
    prenom="";
    email="";
    id_departement="";
    cin=0;
    telephone=0;

}
personnel::personnel(int cin,QString nom,QString prenom ,int telephone ,QString email,QDateTime date_embauche,QDateTime date_naissance,QString id_departement)
{
    this->cin=cin;
    this->nom=nom;
    this->prenom=prenom;
    this->telephone=telephone;
    this->email=email;
    this->date_embauche=date_embauche;
    this->date_naissance=date_naissance;
    this->id_departement=id_departement;
}

bool personnel::ajouter()
{
    QSqlQuery query ;
    QString res = QString::number(cin);
    QString res1 = QString::number(telephone);
    query.prepare("INSERT INTO employes (cin ,nom, prenom,telephone,email,date_embauche,date_naissance,id_departement) "
                  "VALUES (:cin,:nom,:prenom,:telephone,:email,:date_embauche,:date_naissance,:id_departement)");
    query.bindValue(":cin", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":telephone", res1);
    query.bindValue(":email", email);
    query.bindValue(":date_embauche", date_embauche);
    query.bindValue(":date_naissance", date_naissance);
    query.bindValue(":id_departement", id_departement);
    return query.exec();

}

QSqlQueryModel * personnel::afficher()
{
  QSqlQueryModel * model =new QSqlQueryModel();
  model->setQuery("select * from employes");
  model->setHeaderData(0, Qt::Horizontal , QObject::tr("CIN"));
  model->setHeaderData(1, Qt::Horizontal , QObject::tr("Nom"));
  model->setHeaderData(2, Qt::Horizontal , QObject::tr("Prénom"));
  model->setHeaderData(3, Qt::Horizontal , QObject::tr("Télephone"));
  model->setHeaderData(4, Qt::Horizontal , QObject::tr("Email"));
  model->setHeaderData(5, Qt::Horizontal , QObject::tr("Date Embauche"));
  model->setHeaderData(6, Qt::Horizontal , QObject::tr("Date De Naissance"));
  model->setHeaderData(7, Qt::Horizontal , QObject::tr("Département"));
  return model ;
}

bool personnel::modifier ()
{
    QSqlQuery query ;
    QString res = QString::number(cin);
    QString res1 = QString::number(telephone);
    query.prepare("UPDATE employes set cin = :cin, nom = :nom,prenom = :prenom,telephone=:telephone,email=:email,date_embauche=:date_embauche,date_naissance=:date_naissance,id_departement=:id_departement WHERE cin=:cin");
    query.bindValue(":cin", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":telephone", telephone);
    query.bindValue(":email", email);
    query.bindValue(":date_embauche", date_embauche);
     query.bindValue(":date_naissance", date_naissance);
     query.bindValue(":id_departement", id_departement);
    return query.exec();
}

bool personnel::supprimer(int cinn)
{
QSqlQuery query ;
QString res = QString::number(cinn);
query.prepare("Delete from employes where cin= :cin");
query.bindValue(":cin",res);

return query.exec();
}

QSqlQueryModel * personnel::afficher_id()
{
     QSqlQueryModel * model =new QSqlQueryModel();
     model->setQuery("select id_departement from departements ");
     return model ;

}
QSqlQueryModel * personnel::afficher_cin()
{
     QSqlQueryModel * model =new QSqlQueryModel();
     model->setQuery("select cin from employes ");
     return model ;

}
QSqlQueryModel * personnel::afficher_rech(QString ch)
{
    QSqlQueryModel * model =new QSqlQueryModel();
      model->setQuery("SELECT * FROM employes  where nom='"+ch+"' or prenom='"+ch+"' or email='"+ch+"' or id_departement='"+ch+"' ");
      model->setHeaderData(0, Qt::Horizontal , QObject::tr("CIN"));
      model->setHeaderData(1, Qt::Horizontal , QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal , QObject::tr("Prénom"));
      model->setHeaderData(3, Qt::Horizontal , QObject::tr("Télephone"));
      model->setHeaderData(4, Qt::Horizontal , QObject::tr("Email"));
      model->setHeaderData(5, Qt::Horizontal , QObject::tr("Date Embauche"));
      model->setHeaderData(6, Qt::Horizontal , QObject::tr("Date De Naissance"));
      model->setHeaderData(7, Qt::Horizontal , QObject::tr("Département"));
      return model ;


}
QSqlQueryModel * personnel::afficher_choix(QString choix)
{
    QSqlQueryModel * model =new QSqlQueryModel();

    if (choix=="Nom")

    {

           model->setQuery("SELECT * FROM employes ORDER BY nom;");

    }
    else if(choix=="Prénom")
    {
        model->setQuery("SELECT * FROM employes  ORDER BY prenom;");
    }
    else if(choix=="Age croissant")
    {
        model->setQuery("SELECT * FROM employes  ORDER BY date_naissance ASC;");
    }
    else if(choix=="Age décroissant")
    {
        model->setQuery("SELECT * FROM employes  ORDER BY date_naissance DESC;");
    }
    else if (choix=="Choisir")
    {
        model->setQuery("SELECT * FROM employes ");
    }
    model->setHeaderData(0, Qt::Horizontal , QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal , QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal , QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal , QObject::tr("Télephone"));
    model->setHeaderData(4, Qt::Horizontal , QObject::tr("Email"));
    model->setHeaderData(5, Qt::Horizontal , QObject::tr("Date Embauche"));
    model->setHeaderData(6, Qt::Horizontal , QObject::tr("Date De Naissance"));
    model->setHeaderData(7, Qt::Horizontal , QObject::tr("Département"));


    return model;
}
QSqlQueryModel * personnel::afficher_email_rep()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("select email from employes ");
    return model ;
}
