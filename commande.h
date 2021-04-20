#ifndef COMMANDE_H
#define COMMANDE_H
#include<QString>
#include<QSqlQueryModel>



class commande
{
public:
    commande();
    commande(QString,QString,int,QString);
    QString get_nom();
        QString get_ref();
        int get_nbr();
        QString get_ID();
        void set_nom(QString);
        void set_ref(QString);
        void set_nbr(int);
        void set_ID(QString);

         bool ajouter();
         QSqlQueryModel* afficher();
         bool supprimer(QString);
         bool modifier(QString,QString,int,QString);
         QSqlQueryModel * rechercher (const QString &aux);
    private:
         QString nom_produit;
         QString ref_commande;
         int nbr_produit;
         QString ID;

};

#endif // COMMANDE_H
