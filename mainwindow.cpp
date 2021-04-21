#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gestion_boutique.h"
#include "gestion_client.h"
#include <QPrinter>
#include<QFileDialog>
#include <QPainter>
#include <QPrintDialog>
#include <QPrinterInfo>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    gestionboutique = new gestion_boutique(this);
          gestionboutique->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    gestionclient = new gestion_client(this);
          gestionclient->show();
}
