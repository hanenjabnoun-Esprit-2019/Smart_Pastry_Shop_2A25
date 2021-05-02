#ifndef PRODUIT_H
#define PRODUIT_H
#include "QString"
#include "QSqlQueryModel"
#include <QSqlQuery>
#include "QMessageBox"


class Produit
{
    QString nom,quantite,description;
    int id;
public:
    Produit();
    Produit(QString,QString,QString,int);

    QString getNom(){return nom;}
    QString getQuantie(){return quantite;}
    QString getDescription(){return description;}
    int getID(){return id;}


    void setNom(QString N){N=nom;}
    void setQuantie(QString Q){Q=quantite;}
    void setDescription(QString D){D=description;}
    void setID(int id){this->id=id;}

    bool ajouter();
    bool supprimer(int);
    void afficher(QString nom, QString description,QString quantite, int id);
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString a);
    bool modifierproduit(QString,QString,QString,int);
   QSqlQueryModel *  trie(const QString &critere, const QString &mode );

};

#endif // PRODUIT_H
