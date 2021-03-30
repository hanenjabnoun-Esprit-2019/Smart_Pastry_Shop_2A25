#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"commande.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tableView_boutique->setModel(b.afficher());
    ui->tableView_Commandes->setModel(c.afficher());

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
    QString nom_produit=ui->lineEdit->text();
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
    commande c1;
    c1.set_ref(ui->lineEdit_8->text());
      bool test=c1.supprimer(c1.get_ref());
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
               ui->tableView_boutique->setModel(b.afficher());


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
    boutique b1;
    b1.set_ID_boutique(ui->lineEdit_14->text());

    bool test=b1.supprimer(ui->lineEdit_14->text());
    if(test)
       {
           QMessageBox::information(nullptr, QObject::tr("ok"),
                       QObject::tr("suppression effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
           ui->tableView_boutique->setModel(b.afficher());


   }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                       QObject::tr("suppression non effectuer.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_bar_ajoutC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_bar_modifC_clicked()
{
  ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_bar_afficheC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::on_bar_suppC_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_bar_ajoutB_clicked()
{
      ui->stackedWidget_3->setCurrentIndex(0);
}

void MainWindow::on_bar_modifB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}

void MainWindow::on_bar_affichB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(3);
}

void MainWindow::on_bar_suppB_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(2);
}

void MainWindow::on_home1_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_home2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_modifier_boutique_clicked()
{



    QString  ID_boutique=ui->lineEdit_11->text();
    QString nom_boutique=ui->lineEdit_12->text();
    QString adresse=ui->lineEdit_13->text();
    int nbr_employees=ui->spinBox_2->text().toInt();
    int nbr_heure=ui->spinBox_4->text().toInt();
 boutique b(ID_boutique,nom_boutique, adresse,nbr_employees,nbr_heure);
   bool test=b.modifier(ID_boutique,nom_boutique, adresse,nbr_employees,nbr_heure);
   if(test)
       {ui->tableView_boutique->setModel(b.afficher());
           QMessageBox::information(nullptr, QObject::tr("modifier une boutique"),
                                    QObject::tr("boutique  modifié.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);}
       else
           QMessageBox::critical(nullptr, QObject::tr("Modifier une boutique"),
                                 QObject::tr("erreur !.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);





   }





void MainWindow::on_tableView_boutique_clicked(const QModelIndex &index)
{
    ui->lineEdit_11->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),0)).toString());
    ui->lineEdit_12->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),1)).toString());
    ui->lineEdit_13->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),2)).toString());
    ui->spinBox_2->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),3)).toString());
    ui->spinBox_4->setText( ui->tableView_boutique->model()->data(ui->tableView_boutique->model()->index(ui->tableView_boutique->selectionModel()->currentIndex().row(),4)).toString());
}

void MainWindow::on_modifier_commande_clicked()
{


   QString ref_commande=ui->lineEdit_4->text();
    QString nom_produit=ui->lineEdit_5->text();
   int nbr_produit=ui->lineEdit_6->text().toInt();
   commande c (nom_produit,ref_commande,nbr_produit);

   bool test=c.modifier(nom_produit,ref_commande,nbr_produit);

   if(test)
       {ui->tableView_Commandes->setModel(c.afficher());
           QMessageBox::information(nullptr, QObject::tr("modifier une commande"),
                                    QObject::tr("commande  modifié.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);}
       else
   {
           QMessageBox::critical(nullptr, QObject::tr("Modifier une commande"),
                                 QObject::tr("erreur !.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);}

}

void MainWindow::on_tableView_Commandes_clicked(const QModelIndex &index)
{
    ui->lineEdit_4->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),1)).toString());
     ui->lineEdit_5->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),0)).toString());
     ui->lineEdit_6->setText( ui->tableView_Commandes->model()->data(ui->tableView_Commandes->model()->index(ui->tableView_Commandes->selectionModel()->currentIndex().row(),2)).toString());
}