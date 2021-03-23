#ifndef CLIENT_H
#define CLIENT_H

#include<QString>
#include<QSqlQueryModel>
class client
{
public:
    client();

   client(int,QString,QString,QString,int);

    int getcin();
    QString getnom();
    QString getprenom();
    QString getadresse();
     int gettelephone();

     void setcin(int);
      void setnom(QString);
       void setprenom(QString);
        void setadresse(QString);
         void settelephone(int);

     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     void modifier(int,QString,int);

private:
    int cin;
   QString nom;
   QString prenom;
   QString adresse;
   int telephone;



};

#endif
