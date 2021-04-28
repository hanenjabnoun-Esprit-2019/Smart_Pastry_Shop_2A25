#ifndef GESTION_DES_CLIENTS_H
#define GESTION_DES_CLIENTS_H

#include <QMainWindow>
#include"carte.h"
#include"client.h"



QT_BEGIN_NAMESPACE
namespace Ui { class gestion_des_clients; }
QT_END_NAMESPACE

class gestion_des_clients : public QMainWindow
{
    Q_OBJECT

public:
   gestion_des_clients(QWidget *parent = nullptr);
    ~gestion_des_clients();

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
    Ui::gestion_des_clients *ui;
     client c;
    carte f;







};

#endif // GESTION_DES_CLIENTS_H
