#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"carte.h"
#include"client.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_11_clicked();


    void on_pb_ajouter_clicked();


    void on_PB_supp_clicked();

    void on_pb_ajouter_c_clicked();

    void on_pb_supp_c_clicked();

    void on_modifclient_clicked();

    void on_table_client_clicked(const QModelIndex &index);



    void on_modifcarte_clicked();

    void on_table_carte_clicked(const QModelIndex &index);

    void on_tri_c_clicked();

    void on_tri_n_clicked();

    void on_afficher_normal_clicked();

    void on_recherche_clicked();

    void on_exp_c_clicked();

    void on_tri_r_clicked();

    void on_tri_ci_clicked();

    void on_afficher_clicked();

    void on_exp_2_clicked();

    void on_rech_2_clicked();

private:
    Ui::MainWindow *ui;
     client c;
    carte f;








};
#endif // MAINWINDOW_H
