#ifndef PERSONNELS_H
#define PERSONNELS_H
#include "personnel.h"
#include "departement.h"
#include "smtp.h"
#include <QDialog>
#include <QMainWindow>


namespace Ui {
class personnels;
}

class personnels : public QMainWindow
{
    Q_OBJECT

public:
    explicit personnels(QWidget *parent = nullptr);
    ~personnels();

private slots:
    bool controleVide(QString test);
    bool controleEmail(QString test);
    bool controlenum(int test);
    bool controlenumm(int test);
    void on_pushButton_91_clicked();

    void on_pushButton_92_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_93_clicked();

    void on_pushButton_98_clicked();

    void on_pushButton_99_clicked();

    void on_pushButton_94_clicked();

    void on_tableView_11_activated(const QModelIndex &index);

    void on_pushButton_95_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_107_clicked();

    void on_tableView_12_activated(const QModelIndex &index);

    void on_pushButton_146_clicked();

    void on_pushButton_145_clicked();

    void on_pushButton_97_clicked();

    void on_comboBox_31_activated(const QString &arg1);

    void on_pushButton_106_clicked();

    void on_comboBox_33_activated(const QString &arg1);

    void on_pushButton_147_clicked();

    int on_pushButton_96_clicked();

    void on_pushButton_100_clicked();

    void on_pushButton_105_clicked();
    void mailSent(QString status);
    void on_pushButton_102_clicked();

    void on_pushButton_148_clicked();

    int on_pushButton_103_clicked();

    void on_try_5_activated(const QString &arg1);

    void on_pushButton_108_clicked();

    void on_pushButton_101_clicked();

private:
    Ui::personnels *ui;
    personnel tmppersonnel;
    departement tmpdepartement;
};

#endif // personnels
