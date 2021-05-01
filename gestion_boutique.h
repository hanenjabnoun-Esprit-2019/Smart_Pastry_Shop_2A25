#ifndef GESTION_BOUTIQUE_H
#define GESTION_BOUTIQUE_H

#include <QDialog>
#include <QMainWindow>
#include "commande.h"
#include <QSound>
#include <QMainWindow>
#include"boutique.h"
#include "seconddialog.h"

namespace Ui {
class gestion_boutique;
}

class gestion_boutique : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_boutique(QWidget *parent = nullptr);
    ~gestion_boutique();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_ajouter_commande_clicked();

    void on_supprimer_commande_clicked();

    void on_ajouter_boutique_clicked();

    void on_supprimer_boutique_clicked();

    void on_bar_ajoutC_clicked();

    void on_bar_modifC_clicked();

    void on_bar_affichC_clicked();

    void on_bar_suppC_clicked();

    void on_bar_ajoutB_clicked();

    void on_bar_modifB_clicked();

    void on_bar_affichB_clicked();

    void on_bar_suppB_clicked();

    void on_home2_clicked();

    void on_home1_clicked();

    void on_modifier_boutique_clicked();

    void on_tableView_boutique_clicked(const QModelIndex &index);

    void on_modifier_commande_clicked();

    void on_tableView_Commandes_clicked(const QModelIndex &index);

    void on_tri_boutique_clicked();

    void on_pushButton_22_clicked();

    void on_lineEdit_17_textChanged(const QString &arg1);

    void on_statistique_commande_clicked();

private:
    Ui::gestion_boutique *ui;
    commande c;
    boutique b;
    secondDialog *secDialog;
};

#endif // GESTION_BOUTIQUE_H
