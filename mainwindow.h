#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gestion_boutique.h"
#include "gestion_materiels.h"
#include "gestion_des_clients.h"
#include "gestion_ingredient.h"
#include "personnels.h"
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool Login(QString u, QString p);
    bool loggedIn;
    QString picName;
    QSqlTableModel* tblMdl;


private slots:
    void on_pushButton_clicked();

    void on_loginButton_clicked();

    void on_regButton_clicked();

    void on_logoutButton_clicked();

    void on_completeRegButton_clicked();

    void on_backButton2_clicked();

    void on_adminButton_clicked();

    void on_editButton_clicked();

    void on_delButton_clicked();

    void on_editedButton_clicked();

    void on_backButton_2_clicked();

    void on_userBrowse_clicked();

    void on_adminBrowse_clicked();

    void on_pageButton_clicked();

    void on_delUButton_clicked();

    void on_delAButton_clicked();

    void on_backButton_5_clicked();

    void on_editedButton_2_clicked();

    void on_winStack_currentChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    gestion_boutique * gestionboutique;
    gestion_materiels * gestionmateriels;
      gestion_des_clients * gestionclient;
      gestion_ingredient *gestioningredient;
    QString username;
    QString password;
    personnels *personnelss;
};
#endif // MAINWINDOW_H
