#ifndef CARTE_C
#define CARTE_C
#include<QString>
#include<QSqlQueryModel>
#include<QDate>
class carte
{
public:
    carte();

   carte(int,int,int,QDate);

    int getreference();
    int getcin_client();
     int getnbr_point();
      QDate getdate_emission();


     void setreference(int);
        void setcin_client(int);
         void setnbr_point(int);
          void setdate_emission(QDate);


     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifcarte(int,int,int,QDate);


     QSqlQueryModel* trier_ref();
      QSqlQueryModel* trier_cinclient();
      QSqlQueryModel * chercher(int reference,int cin_client);
private:
    int reference;
   int cin_client;
   int nbr_point;
   QDate date_emission;




};

#endif
