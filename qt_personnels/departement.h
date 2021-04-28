#ifndef DEPARTEMENT_H
#define DEPARTEMENT_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include<qdatetime.h>

class departement
{
public:
    departement();
    departement(QString,int);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier ();
    QSqlQueryModel * afficher_rech(QString);
    QSqlQueryModel * afficher_choix(QString);
    QSqlQueryModel * afficher_id();
private :
    QString id_departement;
    int salaire;
};

#endif // DEPARTEMENT_H
