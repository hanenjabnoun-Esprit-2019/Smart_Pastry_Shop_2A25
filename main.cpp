#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "gestion_ingredient.h"
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createconnect();

    MainWindow w;
QTranslator translator;
    QStringList languages ;
    languages << "francais" << "anglais";

    QString lang = QInputDialog::getItem(NULL,"Select Language",
                                         "Language",languages);

    if(lang == "anglais"){
        translator.load("C:/Users/Sofien/Desktop/integrationfi/Smart_Pastry_Shop_2A25/english.qm");
    }

    if(lang != "francais")
        a.installTranslator(&translator);


  //  gestion_ingredient gg;
    //gg.show();
   // w.show();

    if(test)

       {w.show();
           QMessageBox::information(nullptr, QObject::tr("database is open"),
                       QObject::tr("connection successful.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

   }
       else
           QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                       QObject::tr("connection failed.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);



       return a.exec();


}
