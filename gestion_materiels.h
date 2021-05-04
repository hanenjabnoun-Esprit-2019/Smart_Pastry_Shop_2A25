#ifndef GESTION_MATERIELS_H
#define GESTION_MATERIELS_H



#include <QMainWindow>
#include"materiel.h"
#include"maintenance.h"
#include <QMainWindow>
#include "statelivrec.h"
QT_BEGIN_NAMESPACE
namespace Ui { class gestion_materiels; }
QT_END_NAMESPACE

class gestion_materiels : public QMainWindow
{
    Q_OBJECT

public:
    gestion_materiels(QWidget *parent = nullptr);
    ~gestion_materiels();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_11_clicked();


    void on_pb_ajouter_clicked();


    void on_PB_supp_clicked();

    void on_pb_ajouter_m_clicked();

    void on_pb_supp_maintenance_clicked();

    void on_pushButton_9_clicked();

    void on_Tab_materiel_clicked(const QModelIndex &index);

    void on_Trier_ID_clicked();

    void on_Trier_Prix_clicked();

    void on_pushButton_8_clicked();

    void on_Rechercher_materiel_clicked();

    void on_pushButton_15_clicked();

    void on_table_maintenance_clicked(const QModelIndex &index);

    void on_trier_ref_mainte_clicked();

    void on_trier_repa_mainte_clicked();

    void on_rechercher_maint_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::gestion_materiels *ui;
    materiel M;

    maintenance A;

    statelivrec *stat_liv;






};

#endif // GESTION_MATERIELS_H
