#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include<QString>
#include<QSqlQueryModel>
#include<QDate>


/*class maintenance
{
public:
    maintenance();




    maintenance(int, QString, QDate, QDate, QString, int);

    int getid_materiel();
    QString getnom_reparateur();
    QDate getderniere_reparation();
    QDate getprochaine_visite();
    QString getdescription();
    int getreference();


    void setid_materiel(int);
    void setnom_reparateur(QString);
    void setderniere_reparation(QDate);
    void setprochaine_visite(QDate);
    void setdescription(QString);
    void setreference(int);


     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifiermaintenance(int,QString,QDate,QDate,QString,int);

     QSqlQueryModel* trier_reference();
     QSqlQueryModel* trier_reparateur();


     QSqlQueryModel * chercher_maintenance_avancee(QString,QString);


private:
     int reference;
    int id_materiel;
   QString nom_reparateur;
   QDate derniere_reparation;
   QDate prochaine_visite;
   QString description;





};*/
class maintenance
{
public:
    maintenance();




    maintenance(int, QString, QDate, QDate, QString, int);

    int getid_materiel();
    QString getnom_reparateur();
    QDate getderniere_reparation();
    QDate getprochaine_visite();
    QString getdescription();
    int getreference();


    void setid_materiel(int);
    void setnom_reparateur(QString);
    void setderniere_reparation(QDate);
    void setprochaine_visite(QDate);
    void setdescription(QString);
    void setreference(int);


     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifiermaintenance(int,QString,QDate,QDate,QString,int);

     QSqlQueryModel* trier_reference();
     QSqlQueryModel* trier_reparateur();


     QSqlQueryModel * chercher_maintenance_avancee(QString,QString);


private:
     int reference;
    int id_materiel;
   QString nom_reparateur;
   QDate derniere_reparation;
   QDate prochaine_visite;
   QString description;





};

#endif // MAINTENANCE_H
