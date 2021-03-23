#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"client.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_client->setModel(I.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BA_clicked()
{

    int cin=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_2->text();
     QString prenom=ui->lineEdit_3->text();
      QString adresse=ui->lineEdit_4->text();
     int telephone=ui->lineEdit_5->text().toInt();
     client I(cin,nom,prenom,adresse,telephone);
     bool test=I.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_client->setModel(I.afficher());


 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_P_supprimer_clicked()
{
    client I1;
    I1.setcin(ui->supp->text().toInt());
    bool test=I1.supprimer(I1.getcin());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_client->setModel(I.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}





