/********************************************************************************
** Form generated from reading UI file 'gestion_materiels.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_MATERIELS_H
#define UI_GESTION_MATERIELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_materiels
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *le_id;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *le_nom;
    QLineEdit *le_lieux_achat;
    QLineEdit *le_prix;
    QPushButton *pb_ajouter;
    QDoubleSpinBox *la_quantite;
    QDateEdit *le_date_achat;
    QDateEdit *le_date_garantie;
    QWidget *tab_2;
    QLabel *label_13;
    QLineEdit *le_id_supp;
    QPushButton *PB_supp;
    QWidget *tab_3;
    QLabel *label_15;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_9;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_24;
    QLabel *label_26;
    QLineEdit *nom_modif;
    QLineEdit *Quantite_modif;
    QLineEdit *Prix_modif;
    QLineEdit *lieux_achat_modif;
    QDateEdit *date_achat_modifier;
    QDateEdit *date_garantie_modif;
    QWidget *tab_4;
    QPushButton *pushButton_10;
    QTableView *Tab_materiel;
    QPushButton *Trier_ID;
    QPushButton *Trier_Prix;
    QPushButton *pushButton_13;
    QLabel *label_29;
    QLabel *label_31;
    QLineEdit *cherche_lieux_achat;
    QLineEdit *chercher_nom;
    QPushButton *Rechercher_materiel;
    QLabel *label_3;
    QWidget *page_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QLabel *label_18;
    QLabel *label_19;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QLineEdit *m_id_materie;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *label_25;
    QLineEdit *le_nom_reparateur;
    QLabel *label_27;
    QPushButton *pb_ajouter_m;
    QDateEdit *la_derniere_reparation;
    QDateEdit *la_prochaine_visite;
    QLineEdit *la_description;
    QLabel *label_32;
    QLineEdit *ref_ajouter;
    QWidget *tab_6;
    QLabel *label_28;
    QLineEdit *lineEdit_15;
    QPushButton *pb_supp_maintenance;
    QWidget *tab_7;
    QPushButton *pushButton_15;
    QLabel *label_33;
    QLabel *label_22;
    QLabel *label_30;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLineEdit *ref_modifier;
    QLineEdit *id_modifier;
    QLineEdit *modifier_nom;
    QLineEdit *modifier_des;
    QDateEdit *modifier_date_mainte;
    QDateEdit *modifier_visite_;
    QWidget *tab_8;
    QPushButton *pushButton_16;
    QTableView *table_maintenance;
    QPushButton *trier_ref_mainte;
    QPushButton *trier_repa_mainte;
    QPushButton *pushButton_14;
    QLabel *label_37;
    QLabel *label_38;
    QPushButton *rechercher_maint;
    QLineEdit *repa_chercher;
    QLineEdit *ref_chercher;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_materiels)
    {
        if (gestion_materiels->objectName().isEmpty())
            gestion_materiels->setObjectName(QStringLiteral("gestion_materiels"));
        gestion_materiels->resize(1314, 481);
        centralwidget = new QWidget(gestion_materiels);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-20, 70, 1291, 651));
        stackedWidget->setStyleSheet(QStringLiteral("background-color:rgb(255, 170, 127);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 357, 311, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(760, 360, 271, 41));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1150, 460, 93, 28));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1160, 50, 93, 28));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 561, 29));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 661, 29));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1140, 20, 93, 28));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1170, 600, 93, 28));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 50, 1029, 29));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 150, 1191, 431));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 1191, 401));
        tabWidget->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        le_id = new QLineEdit(tab);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(300, 20, 113, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 20, 141, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 50, 56, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 80, 56, 16));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 110, 101, 16));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 140, 121, 16));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 170, 151, 16));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 200, 56, 16));
        le_nom = new QLineEdit(tab);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(300, 50, 113, 22));
        le_lieux_achat = new QLineEdit(tab);
        le_lieux_achat->setObjectName(QStringLiteral("le_lieux_achat"));
        le_lieux_achat->setGeometry(QRect(300, 140, 113, 22));
        le_prix = new QLineEdit(tab);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(300, 200, 113, 22));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(870, 210, 93, 28));
        la_quantite = new QDoubleSpinBox(tab);
        la_quantite->setObjectName(QStringLiteral("la_quantite"));
        la_quantite->setGeometry(QRect(300, 80, 111, 22));
        le_date_achat = new QDateEdit(tab);
        le_date_achat->setObjectName(QStringLiteral("le_date_achat"));
        le_date_achat->setGeometry(QRect(300, 110, 110, 22));
        le_date_garantie = new QDateEdit(tab);
        le_date_garantie->setObjectName(QStringLiteral("le_date_garantie"));
        le_date_garantie->setGeometry(QRect(300, 170, 110, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(370, 90, 331, 16));
        le_id_supp = new QLineEdit(tab_2);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(390, 140, 171, 22));
        PB_supp = new QPushButton(tab_2);
        PB_supp->setObjectName(QStringLiteral("PB_supp"));
        PB_supp->setGeometry(QRect(430, 210, 93, 28));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 20, 331, 16));
        lineEdit_11 = new QLineEdit(tab_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(230, 20, 171, 22));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(890, 210, 93, 28));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 60, 56, 16));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 90, 56, 16));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 150, 101, 16));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 210, 121, 16));
        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 180, 151, 16));
        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 120, 56, 16));
        nom_modif = new QLineEdit(tab_3);
        nom_modif->setObjectName(QStringLiteral("nom_modif"));
        nom_modif->setGeometry(QRect(230, 50, 171, 22));
        Quantite_modif = new QLineEdit(tab_3);
        Quantite_modif->setObjectName(QStringLiteral("Quantite_modif"));
        Quantite_modif->setGeometry(QRect(230, 80, 171, 22));
        Prix_modif = new QLineEdit(tab_3);
        Prix_modif->setObjectName(QStringLiteral("Prix_modif"));
        Prix_modif->setGeometry(QRect(230, 110, 171, 22));
        lieux_achat_modif = new QLineEdit(tab_3);
        lieux_achat_modif->setObjectName(QStringLiteral("lieux_achat_modif"));
        lieux_achat_modif->setGeometry(QRect(230, 200, 171, 22));
        date_achat_modifier = new QDateEdit(tab_3);
        date_achat_modifier->setObjectName(QStringLiteral("date_achat_modifier"));
        date_achat_modifier->setGeometry(QRect(230, 140, 171, 22));
        date_garantie_modif = new QDateEdit(tab_3);
        date_garantie_modif->setObjectName(QStringLiteral("date_garantie_modif"));
        date_garantie_modif->setGeometry(QRect(230, 170, 171, 22));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(610, 340, 141, 28));
        Tab_materiel = new QTableView(tab_4);
        Tab_materiel->setObjectName(QStringLiteral("Tab_materiel"));
        Tab_materiel->setGeometry(QRect(210, 10, 961, 321));
        Trier_ID = new QPushButton(tab_4);
        Trier_ID->setObjectName(QStringLiteral("Trier_ID"));
        Trier_ID->setGeometry(QRect(10, 20, 171, 28));
        Trier_Prix = new QPushButton(tab_4);
        Trier_Prix->setObjectName(QStringLiteral("Trier_Prix"));
        Trier_Prix->setGeometry(QRect(10, 60, 171, 28));
        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 100, 171, 28));
        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 140, 151, 16));
        label_31 = new QLabel(tab_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 200, 211, 16));
        cherche_lieux_achat = new QLineEdit(tab_4);
        cherche_lieux_achat->setObjectName(QStringLiteral("cherche_lieux_achat"));
        cherche_lieux_achat->setGeometry(QRect(20, 160, 171, 22));
        chercher_nom = new QLineEdit(tab_4);
        chercher_nom->setObjectName(QStringLiteral("chercher_nom"));
        chercher_nom->setGeometry(QRect(20, 230, 171, 22));
        Rechercher_materiel = new QPushButton(tab_4);
        Rechercher_materiel->setObjectName(QStringLiteral("Rechercher_materiel"));
        Rechercher_materiel->setGeometry(QRect(10, 270, 93, 28));
        tabWidget->addTab(tab_4, QString());
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 1029, 29));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(970, 20, 93, 28));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(970, 470, 93, 28));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        label_18 = new QLabel(page_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 60, 1029, 29));
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 100, 1029, 29));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 140, 1021, 321));
        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 1001, 291));
        tabWidget_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        m_id_materie = new QLineEdit(tab_5);
        m_id_materie->setObjectName(QStringLiteral("m_id_materie"));
        m_id_materie->setGeometry(QRect(300, 40, 113, 22));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(100, 40, 141, 16));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 70, 121, 16));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(100, 100, 131, 16));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(100, 140, 151, 16));
        le_nom_reparateur = new QLineEdit(tab_5);
        le_nom_reparateur->setObjectName(QStringLiteral("le_nom_reparateur"));
        le_nom_reparateur->setGeometry(QRect(300, 70, 113, 22));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 180, 181, 16));
        pb_ajouter_m = new QPushButton(tab_5);
        pb_ajouter_m->setObjectName(QStringLiteral("pb_ajouter_m"));
        pb_ajouter_m->setGeometry(QRect(870, 210, 93, 28));
        la_derniere_reparation = new QDateEdit(tab_5);
        la_derniere_reparation->setObjectName(QStringLiteral("la_derniere_reparation"));
        la_derniere_reparation->setGeometry(QRect(300, 100, 110, 22));
        la_prochaine_visite = new QDateEdit(tab_5);
        la_prochaine_visite->setObjectName(QStringLiteral("la_prochaine_visite"));
        la_prochaine_visite->setGeometry(QRect(300, 140, 110, 22));
        la_description = new QLineEdit(tab_5);
        la_description->setObjectName(QStringLiteral("la_description"));
        la_description->setGeometry(QRect(300, 170, 113, 22));
        label_32 = new QLabel(tab_5);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(100, 10, 141, 16));
        ref_ajouter = new QLineEdit(tab_5);
        ref_ajouter->setObjectName(QStringLiteral("ref_ajouter"));
        ref_ajouter->setGeometry(QRect(300, 10, 113, 22));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(380, 80, 331, 16));
        lineEdit_15 = new QLineEdit(tab_6);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(390, 130, 171, 22));
        pb_supp_maintenance = new QPushButton(tab_6);
        pb_supp_maintenance->setObjectName(QStringLiteral("pb_supp_maintenance"));
        pb_supp_maintenance->setGeometry(QRect(430, 210, 93, 28));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        pushButton_15 = new QPushButton(tab_7);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(870, 220, 93, 28));
        label_33 = new QLabel(tab_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(190, 40, 141, 16));
        label_22 = new QLabel(tab_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(190, 70, 141, 16));
        label_30 = new QLabel(tab_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(190, 100, 121, 16));
        label_34 = new QLabel(tab_7);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(190, 130, 131, 16));
        label_35 = new QLabel(tab_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(190, 160, 151, 16));
        label_36 = new QLabel(tab_7);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(190, 190, 181, 16));
        ref_modifier = new QLineEdit(tab_7);
        ref_modifier->setObjectName(QStringLiteral("ref_modifier"));
        ref_modifier->setGeometry(QRect(370, 30, 113, 22));
        id_modifier = new QLineEdit(tab_7);
        id_modifier->setObjectName(QStringLiteral("id_modifier"));
        id_modifier->setGeometry(QRect(370, 60, 113, 22));
        modifier_nom = new QLineEdit(tab_7);
        modifier_nom->setObjectName(QStringLiteral("modifier_nom"));
        modifier_nom->setGeometry(QRect(370, 90, 113, 22));
        modifier_des = new QLineEdit(tab_7);
        modifier_des->setObjectName(QStringLiteral("modifier_des"));
        modifier_des->setGeometry(QRect(370, 190, 113, 22));
        modifier_date_mainte = new QDateEdit(tab_7);
        modifier_date_mainte->setObjectName(QStringLiteral("modifier_date_mainte"));
        modifier_date_mainte->setGeometry(QRect(370, 120, 110, 22));
        modifier_visite_ = new QDateEdit(tab_7);
        modifier_visite_->setObjectName(QStringLiteral("modifier_visite_"));
        modifier_visite_->setGeometry(QRect(370, 150, 110, 22));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        pushButton_16 = new QPushButton(tab_8);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(580, 230, 141, 28));
        table_maintenance = new QTableView(tab_8);
        table_maintenance->setObjectName(QStringLiteral("table_maintenance"));
        table_maintenance->setGeometry(QRect(360, 10, 621, 211));
        trier_ref_mainte = new QPushButton(tab_8);
        trier_ref_mainte->setObjectName(QStringLiteral("trier_ref_mainte"));
        trier_ref_mainte->setGeometry(QRect(30, 10, 171, 28));
        trier_ref_mainte->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        trier_repa_mainte = new QPushButton(tab_8);
        trier_repa_mainte->setObjectName(QStringLiteral("trier_repa_mainte"));
        trier_repa_mainte->setGeometry(QRect(30, 50, 171, 28));
        trier_repa_mainte->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        pushButton_14 = new QPushButton(tab_8);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(30, 90, 171, 28));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"qproperty-iconSize:35px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffff99;\n"
"\n"
"}\n"
"QPushButton:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-left-width:7px;\n"
"	border-color: #ff3333;\n"
"	color:#ffff99;\n"
"}\n"
""));
        label_37 = new QLabel(tab_8);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(60, 160, 151, 16));
        label_38 = new QLabel(tab_8);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(60, 210, 141, 16));
        rechercher_maint = new QPushButton(tab_8);
        rechercher_maint->setObjectName(QStringLiteral("rechercher_maint"));
        rechercher_maint->setGeometry(QRect(250, 200, 93, 28));
        repa_chercher = new QLineEdit(tab_8);
        repa_chercher->setObjectName(QStringLiteral("repa_chercher"));
        repa_chercher->setGeometry(QRect(30, 180, 181, 22));
        ref_chercher = new QLineEdit(tab_8);
        ref_chercher->setObjectName(QStringLiteral("ref_chercher"));
        ref_chercher->setGeometry(QRect(30, 230, 181, 22));
        tabWidget_2->addTab(tab_8, QString());
        stackedWidget->addWidget(page_3);
        gestion_materiels->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_materiels);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1314, 26));
        gestion_materiels->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_materiels);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_materiels->setStatusBar(statusbar);

        retranslateUi(gestion_materiels);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_materiels);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_materiels)
    {
        gestion_materiels->setWindowTitle(QApplication::translate("gestion_materiels", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_materiels", "Gestion du materiel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_materiels", "Gestion de la maintenance", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_materiels", "Deconexion", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gestion_materiels", "HOME", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_materiels", "                                                                                                                         Cookies", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_materiels", "                                                                                                  Gestion du Materiel et de la maintenance", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gestion_materiels", "HOME", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("gestion_materiels", "Deconexion", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_materiels", "                                                                                                  Gestion du Materiel et de la maintenance", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestion_materiels", "Gestion du materiel", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_materiels", "id_materiel", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_materiels", "Nom :", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_materiels", "Quantite :", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_materiels", "date_achat", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_materiels", "lieux_achat", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_materiels", "date_garantie", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_materiels", "prix", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("gestion_materiels", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_materiels", "Ajouter", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_materiels", "Donner l'ID du produit a supprimer :", Q_NULLPTR));
        PB_supp->setText(QApplication::translate("gestion_materiels", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_materiels", "Supprimer", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_materiels", "Donner l'ID du produit a modifier :", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("gestion_materiels", "Modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_materiels", "Nom :", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_materiels", "Quantite :", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_materiels", "date_achat", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_materiels", "lieux_achat", Q_NULLPTR));
        label_24->setText(QApplication::translate("gestion_materiels", "date_garantie", Q_NULLPTR));
        label_26->setText(QApplication::translate("gestion_materiels", "prix", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gestion_materiels", "Modifier", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("gestion_materiels", "Afficher ", Q_NULLPTR));
        Trier_ID->setText(QApplication::translate("gestion_materiels", "Tier selon L'ID", Q_NULLPTR));
        Trier_Prix->setText(QApplication::translate("gestion_materiels", "Trier selon le Prix", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("gestion_materiels", "Exporter PDF", Q_NULLPTR));
        label_29->setText(QApplication::translate("gestion_materiels", "Donner le lieux d'achat", Q_NULLPTR));
        label_31->setText(QApplication::translate("gestion_materiels", "Donner le nom du Materiel", Q_NULLPTR));
        Rechercher_materiel->setText(QApplication::translate("gestion_materiels", "Rechercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("gestion_materiels", "Afficher", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_materiels", "                                                                                                                         Cookies", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("gestion_materiels", "HOME", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("gestion_materiels", "Deconexion", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_materiels", "                                                                                                                         Cookies", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_materiels", "                                                                                                  Gestion du Materiel et de la maintenance", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("gestion_materiels", "Gestion de la maintenance", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_materiels", "id_materiel", Q_NULLPTR));
        label_21->setText(QApplication::translate("gestion_materiels", "Nom du reparateur :", Q_NULLPTR));
        label_23->setText(QApplication::translate("gestion_materiels", "Dernierre reparation", Q_NULLPTR));
        label_25->setText(QApplication::translate("gestion_materiels", "Prochaine visite Tech. :", Q_NULLPTR));
        label_27->setText(QApplication::translate("gestion_materiels", "Description de l'intervention :", Q_NULLPTR));
        pb_ajouter_m->setText(QApplication::translate("gestion_materiels", "Ajouter", Q_NULLPTR));
        label_32->setText(QApplication::translate("gestion_materiels", "reference", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("gestion_materiels", "Ajouter", Q_NULLPTR));
        label_28->setText(QApplication::translate("gestion_materiels", "Donner la reference du produit a supprimer :", Q_NULLPTR));
        pb_supp_maintenance->setText(QApplication::translate("gestion_materiels", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("gestion_materiels", "Supprimer", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("gestion_materiels", "Modifier", Q_NULLPTR));
        label_33->setText(QApplication::translate("gestion_materiels", "reference", Q_NULLPTR));
        label_22->setText(QApplication::translate("gestion_materiels", "id_materiel", Q_NULLPTR));
        label_30->setText(QApplication::translate("gestion_materiels", "Nom du reparateur :", Q_NULLPTR));
        label_34->setText(QApplication::translate("gestion_materiels", "Dernierre reparation", Q_NULLPTR));
        label_35->setText(QApplication::translate("gestion_materiels", "Prochaine visite Tech. :", Q_NULLPTR));
        label_36->setText(QApplication::translate("gestion_materiels", "Description de l'intervention :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("gestion_materiels", "Modifier", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("gestion_materiels", "Afficher ", Q_NULLPTR));
        trier_ref_mainte->setText(QApplication::translate("gestion_materiels", "Trier selon la reference", Q_NULLPTR));
        trier_repa_mainte->setText(QApplication::translate("gestion_materiels", "Trier selon le reparateur", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("gestion_materiels", "Exporter PDF", Q_NULLPTR));
        label_37->setText(QApplication::translate("gestion_materiels", "Donner le nom ", Q_NULLPTR));
        label_38->setText(QApplication::translate("gestion_materiels", "donner la reference", Q_NULLPTR));
        rechercher_maint->setText(QApplication::translate("gestion_materiels", "rechercher", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("gestion_materiels", "Afficher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_materiels: public Ui_gestion_materiels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_MATERIELS_H
