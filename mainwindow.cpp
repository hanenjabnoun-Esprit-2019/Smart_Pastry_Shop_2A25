#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"commande.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui->tableView_Commandes->setModel(b.afficher());

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}





void MainWindow::on_ajouter_commande_clicked()
{
    QString nom_produit=ui->lineEdit_2->text();
       int nbr_produit=ui->lineEdit_2->text().toInt();
        QString ref_commande=ui->lineEdit_3->text();
      commande c (nom_produit,ref_commande,nbr_produit);
        bool test=c.ajouter();
        if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tableView_Commandes->setModel(c.afficher());


        }
            else
                QMessageBox::critical(nullptr, QObject::tr("not ok"),
                            QObject::tr("ajout non effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_supprimer_commande_clicked()
{
    commande c;
    QString ref=ui->lineEdit_8->text();
      bool test=c.supprimer(ref);
      if(test)
         {
             QMessageBox::information(nullptr, QObject::tr("ok"),
                         QObject::tr("suppression effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
             ui->tableView_Commandes->setModel(c.afficher());


     }
         else
             QMessageBox::critical(nullptr, QObject::tr("not ok"),
                         QObject::tr("suppression non effectuer.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_ajouter_boutique_clicked()
{
   QString ID_boutique=ui->lineEdit_16->text();
   QString nom_boutique=ui->lineEdit_9->text();
  QString adresse=ui->lineEdit_10->text();
  int nbr_employees=ui->spinBox->text().toInt()  ;
   int nbr_heure=ui->spinBox_3->text().toInt() ;

boutique b( ID_boutique,nom_boutique,adresse,nbr_employees,nbr_heure);

bool test=b.ajouter();
   if(test)
            {
                QMessageBox::information(nullptr, QObject::tr("ok"),
                            QObject::tr("ajout effectuer.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
               ui->tableView_Commandes->setModel(c.afficher());


        }
            else
               {
       QMessageBox::critical(nullptr, QObject::tr("not ok"),
                             QObject::tr("ajout non effectuer.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


   }




}
void MainWindow::on_supprimer_boutique_clicked()
{
    boutique b;
    QString ID=ui->lineEdit_14->text();

    bool test=b.supprimer(ID);
    if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                       QObject::tr("suppression effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
           ui->tableView_Commandes->setModel(c.afficher());


   }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                       QObject::tr("suppression non effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

}
