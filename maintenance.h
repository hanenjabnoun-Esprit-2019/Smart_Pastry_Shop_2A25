#ifndef MAINTENANCE_H
#define MAINTENANCE_H


#include<QString>
#include<QSqlQueryModel>
#include<QDate>


class maintenance
{
public:
    maintenance();




    maintenance(int,int, QString, QDate, QDate, QString);
    int getreference();
    int getid_materiel();
    QString getnom_reparateur();
    QDate getderniere_reparation();
    QDate getprochaine_visite();
    QString getdescription();

    void setreference(int);
    void setid_materiel(int);
    void setnom_reparateur(QString);
    void setderniere_reparation(QDate);
    void setprochaine_visite(QDate);
    void setdescription(QString);


     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifiermaintenance(int,int,QString,QDate,QDate,QString);

     //QSqlQueryModel* trier_reference();
    // QSqlQueryModel* trier_reparateur();


    // QSqlQueryModel * chercher_maintenance_avancee(QString,QString);


private:
     int reference;
    int id_materiel;
   QString nom_reparateur;
   QDate derniere_reparation;
   QDate prochaine_visite;
   QString description;





};

#endif // MAINTENANCE_H
