#ifndef CLIENT_H
#define CLIENT_H

#include<QString>
#include<QSqlQueryModel>
class carte
{
public:
    carte();

   carte(int,int,int);

    int getreference();
    int getcin_client();
     int getnbr_point();

     void setreference(int);
        void setcin_client(int);
         void setnbr_point(int);

     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     void modifier(int,int,int);

private:
    int reference;
   int cin_client;
   int nbr_point;



};

#endif
