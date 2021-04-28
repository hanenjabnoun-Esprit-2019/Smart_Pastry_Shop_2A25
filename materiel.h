#ifndef MATERIEL_H
#define MATERIEL_H


#include<QString>
#include<QSqlQueryModel>
#include<QDate>

class materiel
{
public:
    materiel();


    materiel(int, QString, int,int, QDate, QDate, QString);
    int getid_materiel();
    QString getnom();
    int getprix();
    int getquantite();
    QDate getdate_achat();
    QDate getdate_garantie();
    QString getlieux_achat();




    void setid_materiel(int);
    void setnom(QString);
    void setprix(int);
    void setquantite(int);
    void setdate_achat(QDate);
    void setdate_garantie(QDate);
    void setlieux_achat(QString);


     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifiermateriel( int, QString,int,int, QDate, QDate, QString );

     QSqlQueryModel* trier_id();
     QSqlQueryModel* trier_prix();


     QSqlQueryModel * chercher_materiel_avancee(QString,QString);
private:
    int id_materiel;
   QString nom;
   int prix;
   int quantite;
   QDate date_achat;
   QDate date_garantie;
   QString lieux_achat;





};

#endif // MATERIEL_H
