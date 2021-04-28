#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include<QDebug>

class connexion
{
public:

     QSqlDatabase db ;

    connexion();

    bool createconnect();
    bool ouvrirConnexion()
    {
        db=QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("test");
        if (!db.open())
        {
            qDebug()<<("Failed to open Database");
            return false;
        }
        else
           {
            qDebug()<<("Connected..");
            return true;
        }
    }
    void fermerConnexion()
    {
        db.close();
    }
};

#endif // CONNEXION_H
