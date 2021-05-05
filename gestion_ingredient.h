#ifndef GESTION_INGREDIENT_H
#define GESTION_INGREDIENT_H

#include <QDialog>
#include"ingredient.h"
#include"produit.h"

namespace Ui {
class gestion_ingredient;
}

class gestion_ingredient : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_ingredient(QWidget *parent = nullptr);
    ~gestion_ingredient();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_addemploye_2_clicked();



    void on_ajouter_i_clicked();

    void on_supprimer_i_clicked();

    void on_modifier_i_clicked();

    void on_tab_ingredient_clicked(const QModelIndex &index);

    void on_reportemploye_2_clicked();

    void on_pushButton_8_clicked();

    void on_employeelist_2_clicked();

    void on_addemploye_clicked();

    void on_reportemploye_clicked();

    void on_pushButton_4_clicked();

    void on_employeelist_clicked();

    void on_ajouter_produit_clicked();

    void on_pushButton_7_clicked();

    void on_modifierProduit_clicked();

    void on_tabproduit_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pdf_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);



    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_pushButton_10_clicked();

private:
    Ui::gestion_ingredient *ui;
    Ingredient I;
        Produit P;

};

#endif // GESTION_INGREDIENT_H
