/********************************************************************************
** Form generated from reading UI file 'gestion_materiels.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_MATERIELS_H
#define UI_GESTION_MATERIELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLabel *label_2;
    QLabel *label_39;
    QLabel *label_18;
    QLabel *label_4;
    QWidget *page_2;
    QPushButton *pushButton_6;
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
    QPushButton *pushButton_4;
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
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_40;
    QLabel *label_41;
    QWidget *page_3;
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
    QPushButton *pushButton_11;
    QLabel *label_3;
    QLabel *label_19;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_materiels)
    {
        if (gestion_materiels->objectName().isEmpty())
            gestion_materiels->setObjectName(QString::fromUtf8("gestion_materiels"));
        gestion_materiels->resize(1307, 535);
        centralwidget = new QWidget(gestion_materiels);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, 0, 1161, 561));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 127);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 180, 291, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 180, 271, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 70, 761, 29));
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(244, 143, 55);\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_39 = new QLabel(page);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(540, 230, 211, 201));
        label_39->setPixmap(QPixmap(QString::fromUtf8("image/Foto2.png")));
        label_39->setScaledContents(true);
        label_18 = new QLabel(page);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(150, 242, 191, 201));
        label_18->setPixmap(QPixmap(QString::fromUtf8("image/Foto1.png")));
        label_18->setScaledContents(true);
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(950, 50, 111, 81));
        label_4->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_4->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1170, 600, 93, 28));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 80, 1041, 361));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 1001, 331));
        tabWidget->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tab->setObjectName(QString::fromUtf8("tab"));
        le_id = new QLineEdit(tab);
        le_id->setObjectName(QString::fromUtf8("le_id"));
        le_id->setGeometry(QRect(300, 20, 113, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 20, 141, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 50, 56, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 80, 56, 16));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 110, 101, 16));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 140, 121, 16));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(110, 170, 151, 16));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 200, 56, 16));
        le_nom = new QLineEdit(tab);
        le_nom->setObjectName(QString::fromUtf8("le_nom"));
        le_nom->setGeometry(QRect(300, 50, 113, 22));
        le_lieux_achat = new QLineEdit(tab);
        le_lieux_achat->setObjectName(QString::fromUtf8("le_lieux_achat"));
        le_lieux_achat->setGeometry(QRect(300, 140, 113, 22));
        le_prix = new QLineEdit(tab);
        le_prix->setObjectName(QString::fromUtf8("le_prix"));
        le_prix->setGeometry(QRect(300, 200, 113, 22));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QString::fromUtf8("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(600, 210, 93, 28));
        la_quantite = new QDoubleSpinBox(tab);
        la_quantite->setObjectName(QString::fromUtf8("la_quantite"));
        la_quantite->setGeometry(QRect(300, 80, 111, 22));
        le_date_achat = new QDateEdit(tab);
        le_date_achat->setObjectName(QString::fromUtf8("le_date_achat"));
        le_date_achat->setGeometry(QRect(300, 110, 110, 22));
        le_date_garantie = new QDateEdit(tab);
        le_date_garantie->setObjectName(QString::fromUtf8("le_date_garantie"));
        le_date_garantie->setGeometry(QRect(300, 170, 110, 22));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 80, 101, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(370, 90, 331, 16));
        le_id_supp = new QLineEdit(tab_2);
        le_id_supp->setObjectName(QString::fromUtf8("le_id_supp"));
        le_id_supp->setGeometry(QRect(390, 140, 171, 22));
        PB_supp = new QPushButton(tab_2);
        PB_supp->setObjectName(QString::fromUtf8("PB_supp"));
        PB_supp->setGeometry(QRect(430, 210, 93, 28));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 20, 331, 16));
        lineEdit_11 = new QLineEdit(tab_3);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(230, 20, 171, 22));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(510, 230, 93, 28));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 60, 56, 16));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 90, 56, 16));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 150, 101, 16));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 210, 121, 16));
        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 180, 151, 16));
        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 120, 56, 16));
        nom_modif = new QLineEdit(tab_3);
        nom_modif->setObjectName(QString::fromUtf8("nom_modif"));
        nom_modif->setGeometry(QRect(230, 50, 171, 22));
        Quantite_modif = new QLineEdit(tab_3);
        Quantite_modif->setObjectName(QString::fromUtf8("Quantite_modif"));
        Quantite_modif->setGeometry(QRect(230, 80, 171, 22));
        Prix_modif = new QLineEdit(tab_3);
        Prix_modif->setObjectName(QString::fromUtf8("Prix_modif"));
        Prix_modif->setGeometry(QRect(230, 110, 171, 22));
        lieux_achat_modif = new QLineEdit(tab_3);
        lieux_achat_modif->setObjectName(QString::fromUtf8("lieux_achat_modif"));
        lieux_achat_modif->setGeometry(QRect(230, 200, 171, 22));
        date_achat_modifier = new QDateEdit(tab_3);
        date_achat_modifier->setObjectName(QString::fromUtf8("date_achat_modifier"));
        date_achat_modifier->setGeometry(QRect(230, 140, 171, 22));
        date_garantie_modif = new QDateEdit(tab_3);
        date_garantie_modif->setObjectName(QString::fromUtf8("date_garantie_modif"));
        date_garantie_modif->setGeometry(QRect(230, 170, 171, 22));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(610, 230, 141, 28));
        Tab_materiel = new QTableView(tab_4);
        Tab_materiel->setObjectName(QString::fromUtf8("Tab_materiel"));
        Tab_materiel->setGeometry(QRect(200, 50, 741, 141));
        Trier_ID = new QPushButton(tab_4);
        Trier_ID->setObjectName(QString::fromUtf8("Trier_ID"));
        Trier_ID->setGeometry(QRect(10, 20, 171, 28));
        Trier_Prix = new QPushButton(tab_4);
        Trier_Prix->setObjectName(QString::fromUtf8("Trier_Prix"));
        Trier_Prix->setGeometry(QRect(10, 60, 171, 28));
        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 100, 171, 28));
        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(10, 140, 151, 16));
        label_31 = new QLabel(tab_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 200, 211, 16));
        cherche_lieux_achat = new QLineEdit(tab_4);
        cherche_lieux_achat->setObjectName(QString::fromUtf8("cherche_lieux_achat"));
        cherche_lieux_achat->setGeometry(QRect(20, 160, 171, 22));
        chercher_nom = new QLineEdit(tab_4);
        chercher_nom->setObjectName(QString::fromUtf8("chercher_nom"));
        chercher_nom->setGeometry(QRect(20, 230, 171, 22));
        Rechercher_materiel = new QPushButton(tab_4);
        Rechercher_materiel->setObjectName(QString::fromUtf8("Rechercher_materiel"));
        Rechercher_materiel->setGeometry(QRect(40, 270, 93, 28));
        tabWidget->addTab(tab_4, QString());
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(990, 10, 91, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label->setScaledContents(true);
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(960, 450, 93, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        label_40 = new QLabel(page_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(1120, 40, 91, 61));
        label_40->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_40->setScaledContents(true);
        label_41 = new QLabel(page_2);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(550, 10, 171, 61));
        label_41->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 1061, 341));
        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 30, 1031, 291));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        m_id_materie = new QLineEdit(tab_5);
        m_id_materie->setObjectName(QString::fromUtf8("m_id_materie"));
        m_id_materie->setGeometry(QRect(300, 40, 113, 22));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(100, 40, 141, 16));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(100, 70, 121, 16));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(100, 100, 131, 16));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(100, 140, 151, 16));
        le_nom_reparateur = new QLineEdit(tab_5);
        le_nom_reparateur->setObjectName(QString::fromUtf8("le_nom_reparateur"));
        le_nom_reparateur->setGeometry(QRect(300, 70, 113, 22));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(100, 180, 181, 16));
        pb_ajouter_m = new QPushButton(tab_5);
        pb_ajouter_m->setObjectName(QString::fromUtf8("pb_ajouter_m"));
        pb_ajouter_m->setGeometry(QRect(480, 170, 93, 28));
        la_derniere_reparation = new QDateEdit(tab_5);
        la_derniere_reparation->setObjectName(QString::fromUtf8("la_derniere_reparation"));
        la_derniere_reparation->setGeometry(QRect(300, 100, 110, 22));
        la_prochaine_visite = new QDateEdit(tab_5);
        la_prochaine_visite->setObjectName(QString::fromUtf8("la_prochaine_visite"));
        la_prochaine_visite->setGeometry(QRect(300, 140, 110, 22));
        la_description = new QLineEdit(tab_5);
        la_description->setObjectName(QString::fromUtf8("la_description"));
        la_description->setGeometry(QRect(300, 170, 113, 22));
        label_32 = new QLabel(tab_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(100, 10, 141, 16));
        ref_ajouter = new QLineEdit(tab_5);
        ref_ajouter->setObjectName(QString::fromUtf8("ref_ajouter"));
        ref_ajouter->setGeometry(QRect(300, 10, 113, 22));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(380, 80, 331, 16));
        label_28->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_15 = new QLineEdit(tab_6);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(390, 130, 311, 22));
        lineEdit_15->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pb_supp_maintenance = new QPushButton(tab_6);
        pb_supp_maintenance->setObjectName(QString::fromUtf8("pb_supp_maintenance"));
        pb_supp_maintenance->setGeometry(QRect(430, 210, 93, 28));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        pushButton_15 = new QPushButton(tab_7);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(870, 220, 93, 28));
        label_33 = new QLabel(tab_7);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(190, 40, 141, 16));
        label_22 = new QLabel(tab_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(190, 70, 141, 16));
        label_30 = new QLabel(tab_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(190, 100, 121, 16));
        label_34 = new QLabel(tab_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(190, 130, 131, 16));
        label_35 = new QLabel(tab_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(190, 160, 151, 16));
        label_36 = new QLabel(tab_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(190, 190, 181, 16));
        ref_modifier = new QLineEdit(tab_7);
        ref_modifier->setObjectName(QString::fromUtf8("ref_modifier"));
        ref_modifier->setGeometry(QRect(370, 30, 113, 22));
        id_modifier = new QLineEdit(tab_7);
        id_modifier->setObjectName(QString::fromUtf8("id_modifier"));
        id_modifier->setGeometry(QRect(370, 60, 113, 22));
        modifier_nom = new QLineEdit(tab_7);
        modifier_nom->setObjectName(QString::fromUtf8("modifier_nom"));
        modifier_nom->setGeometry(QRect(370, 90, 113, 22));
        modifier_des = new QLineEdit(tab_7);
        modifier_des->setObjectName(QString::fromUtf8("modifier_des"));
        modifier_des->setGeometry(QRect(370, 190, 113, 22));
        modifier_date_mainte = new QDateEdit(tab_7);
        modifier_date_mainte->setObjectName(QString::fromUtf8("modifier_date_mainte"));
        modifier_date_mainte->setGeometry(QRect(370, 120, 110, 22));
        modifier_visite_ = new QDateEdit(tab_7);
        modifier_visite_->setObjectName(QString::fromUtf8("modifier_visite_"));
        modifier_visite_->setGeometry(QRect(370, 150, 110, 22));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        pushButton_16 = new QPushButton(tab_8);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(580, 230, 141, 28));
        table_maintenance = new QTableView(tab_8);
        table_maintenance->setObjectName(QString::fromUtf8("table_maintenance"));
        table_maintenance->setGeometry(QRect(360, 10, 621, 211));
        trier_ref_mainte = new QPushButton(tab_8);
        trier_ref_mainte->setObjectName(QString::fromUtf8("trier_ref_mainte"));
        trier_ref_mainte->setGeometry(QRect(30, 10, 171, 28));
        trier_ref_mainte->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        trier_repa_mainte->setObjectName(QString::fromUtf8("trier_repa_mainte"));
        trier_repa_mainte->setGeometry(QRect(30, 50, 171, 28));
        trier_repa_mainte->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(30, 90, 171, 28));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(60, 160, 151, 16));
        label_38 = new QLabel(tab_8);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(60, 210, 141, 16));
        rechercher_maint = new QPushButton(tab_8);
        rechercher_maint->setObjectName(QString::fromUtf8("rechercher_maint"));
        rechercher_maint->setGeometry(QRect(250, 200, 93, 28));
        repa_chercher = new QLineEdit(tab_8);
        repa_chercher->setObjectName(QString::fromUtf8("repa_chercher"));
        repa_chercher->setGeometry(QRect(30, 180, 181, 22));
        ref_chercher = new QLineEdit(tab_8);
        ref_chercher->setObjectName(QString::fromUtf8("ref_chercher"));
        ref_chercher->setGeometry(QRect(30, 230, 181, 22));
        tabWidget_2->addTab(tab_8, QString());
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(950, 450, 93, 28));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(920, 20, 91, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_3->setScaledContents(true);
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(380, 20, 171, 61));
        label_19->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(page_3);
        gestion_materiels->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_materiels);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1307, 21));
        gestion_materiels->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_materiels);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gestion_materiels->setStatusBar(statusbar);

        retranslateUi(gestion_materiels);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_materiels);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_materiels)
    {
        gestion_materiels->setWindowTitle(QCoreApplication::translate("gestion_materiels", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("gestion_materiels", "Gestion du materiel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gestion_materiels", "Gestion de la maintenance", nullptr));
        label_2->setText(QCoreApplication::translate("gestion_materiels", " Gestion du Materiel et de la maintenance", nullptr));
        label_39->setText(QString());
        label_18->setText(QString());
        label_4->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("gestion_materiels", "Deconexion", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gestion_materiels", "Gestion du materiel", nullptr));
        label_5->setText(QCoreApplication::translate("gestion_materiels", "id_materiel", nullptr));
        label_6->setText(QCoreApplication::translate("gestion_materiels", "Nom :", nullptr));
        label_7->setText(QCoreApplication::translate("gestion_materiels", "Quantite :", nullptr));
        label_8->setText(QCoreApplication::translate("gestion_materiels", "date_achat", nullptr));
        label_9->setText(QCoreApplication::translate("gestion_materiels", "lieux_achat", nullptr));
        label_10->setText(QCoreApplication::translate("gestion_materiels", "date_garantie", nullptr));
        label_11->setText(QCoreApplication::translate("gestion_materiels", "prix", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("gestion_materiels", "Ajouter", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gestion_materiels", "statistique", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("gestion_materiels", "Ajouter", nullptr));
        label_13->setText(QCoreApplication::translate("gestion_materiels", "Donner l'ID du produit a supprimer :", nullptr));
        PB_supp->setText(QCoreApplication::translate("gestion_materiels", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("gestion_materiels", "Supprimer", nullptr));
        label_15->setText(QCoreApplication::translate("gestion_materiels", "Donner l'ID du produit a modifier :", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gestion_materiels", "Modifier", nullptr));
        label_12->setText(QCoreApplication::translate("gestion_materiels", "Nom :", nullptr));
        label_14->setText(QCoreApplication::translate("gestion_materiels", "Quantite :", nullptr));
        label_16->setText(QCoreApplication::translate("gestion_materiels", "date_achat", nullptr));
        label_17->setText(QCoreApplication::translate("gestion_materiels", "lieux_achat", nullptr));
        label_24->setText(QCoreApplication::translate("gestion_materiels", "date_garantie", nullptr));
        label_26->setText(QCoreApplication::translate("gestion_materiels", "prix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("gestion_materiels", "Modifier", nullptr));
        pushButton_10->setText(QCoreApplication::translate("gestion_materiels", "Afficher ", nullptr));
        Trier_ID->setText(QCoreApplication::translate("gestion_materiels", "Tier selon L'ID", nullptr));
        Trier_Prix->setText(QCoreApplication::translate("gestion_materiels", "Trier selon le Prix", nullptr));
        pushButton_13->setText(QCoreApplication::translate("gestion_materiels", "Exporter PDF", nullptr));
        label_29->setText(QCoreApplication::translate("gestion_materiels", "Donner le lieux d'achat", nullptr));
        label_31->setText(QCoreApplication::translate("gestion_materiels", "Donner le nom du Materiel", nullptr));
        Rechercher_materiel->setText(QCoreApplication::translate("gestion_materiels", "Rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("gestion_materiels", "Afficher", nullptr));
        label->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("gestion_materiels", "HOME", nullptr));
        label_40->setText(QString());
        label_41->setText(QCoreApplication::translate("gestion_materiels", "COOKIES", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("gestion_materiels", "Gestion de la maintenance", nullptr));
        label_20->setText(QCoreApplication::translate("gestion_materiels", "id_materiel", nullptr));
        label_21->setText(QCoreApplication::translate("gestion_materiels", "Nom du reparateur :", nullptr));
        label_23->setText(QCoreApplication::translate("gestion_materiels", "Dernierre reparation", nullptr));
        label_25->setText(QCoreApplication::translate("gestion_materiels", "Prochaine visite Tech. :", nullptr));
        label_27->setText(QCoreApplication::translate("gestion_materiels", "Description de l'intervention :", nullptr));
        pb_ajouter_m->setText(QCoreApplication::translate("gestion_materiels", "Ajouter", nullptr));
        label_32->setText(QCoreApplication::translate("gestion_materiels", "reference", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("gestion_materiels", "Ajouter", nullptr));
        label_28->setText(QCoreApplication::translate("gestion_materiels", "Donner la reference du produit a supprimer :", nullptr));
        pb_supp_maintenance->setText(QCoreApplication::translate("gestion_materiels", "Supprimer", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("gestion_materiels", "Supprimer", nullptr));
        pushButton_15->setText(QCoreApplication::translate("gestion_materiels", "Modifier", nullptr));
        label_33->setText(QCoreApplication::translate("gestion_materiels", "reference", nullptr));
        label_22->setText(QCoreApplication::translate("gestion_materiels", "id_materiel", nullptr));
        label_30->setText(QCoreApplication::translate("gestion_materiels", "Nom du reparateur :", nullptr));
        label_34->setText(QCoreApplication::translate("gestion_materiels", "Dernierre reparation", nullptr));
        label_35->setText(QCoreApplication::translate("gestion_materiels", "Prochaine visite Tech. :", nullptr));
        label_36->setText(QCoreApplication::translate("gestion_materiels", "Description de l'intervention :", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("gestion_materiels", "Modifier", nullptr));
        pushButton_16->setText(QCoreApplication::translate("gestion_materiels", "Afficher ", nullptr));
        trier_ref_mainte->setText(QCoreApplication::translate("gestion_materiels", "Trier selon la reference", nullptr));
        trier_repa_mainte->setText(QCoreApplication::translate("gestion_materiels", "Trier selon le reparateur", nullptr));
        pushButton_14->setText(QCoreApplication::translate("gestion_materiels", "Exporter PDF", nullptr));
        label_37->setText(QCoreApplication::translate("gestion_materiels", "Donner le nom ", nullptr));
        label_38->setText(QCoreApplication::translate("gestion_materiels", "donner la reference", nullptr));
        rechercher_maint->setText(QCoreApplication::translate("gestion_materiels", "rechercher", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("gestion_materiels", "Afficher", nullptr));
        pushButton_11->setText(QCoreApplication::translate("gestion_materiels", "HOME", nullptr));
        label_3->setText(QString());
        label_19->setText(QCoreApplication::translate("gestion_materiels", "COOKIES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_materiels: public Ui_gestion_materiels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_MATERIELS_H
