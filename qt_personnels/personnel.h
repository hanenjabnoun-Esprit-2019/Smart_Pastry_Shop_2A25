#ifndef PERSONNEL_H
#define PERSONNEL_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include<qdatetime.h>

class personnel
{
public:
    personnel();
    personnel(int,QString,QString,int,QString,QDateTime,QDateTime,QString );
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier ();
    QSqlQueryModel * afficher_rech(QString);
    QSqlQueryModel * afficher_choix(QString);
    QSqlQueryModel * afficher_id();
    QSqlQueryModel * afficher_cin();
    QSqlQueryModel * afficher_email_rep();
private:
    QString nom,prenom,email,id_departement;
    int cin,telephone;
    QDateTime date_naissance,date_embauche;

};

#endif // PERSONNEL_H
