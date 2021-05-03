/********************************************************************************
** Form generated from reading UI file 'gestion_des_clients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_DES_CLIENTS_H
#define UI_GESTION_DES_CLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
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

class Ui_gestion_des_clients
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *cin;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *adresse;
    QPushButton *pb_ajouter;
    QLabel *label_7;
    QLineEdit *tel;
    QWidget *tab_2;
    QLabel *label_13;
    QLineEdit *c_supp;
    QPushButton *PB_supp;
    QWidget *tab_3;
    QPushButton *modifclient;
    QLineEdit *cin_m;
    QLineEdit *nom_m;
    QLineEdit *prenom_m;
    QLineEdit *adresse_m;
    QLineEdit *telephone_m;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *tab_4;
    QPushButton *afficher_normal;
    QTableView *table_client;
    QPushButton *tri_c;
    QPushButton *tri_n;
    QPushButton *exp_c;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *recherche;
    QLineEdit *nom_r;
    QLineEdit *adr_r;
    QLabel *label_2;
    QWidget *page_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QLineEdit *ref;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *cin_2;
    QLabel *label_27;
    QPushButton *pb_ajouter_c;
    QLineEdit *nbr;
    QDateEdit *date_e;
    QLabel *label_29;
    QWidget *tab_6;
    QLabel *label_28;
    QLineEdit *r_supp;
    QPushButton *pb_supp_c;
    QWidget *tab_7;
    QPushButton *modifcarte;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_23;
    QLineEdit *ref_m;
    QLineEdit *cl_m;
    QLineEdit *point_m;
    QLabel *label_30;
    QDateEdit *date_m;
    QWidget *tab_8;
    QPushButton *afficher;
    QTableView *table_carte;
    QPushButton *tri_r;
    QPushButton *tri_ci;
    QPushButton *exp_2;
    QLineEdit *ref_r;
    QLineEdit *cc_r;
    QPushButton *rech_2;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_des_clients)
    {
        if (gestion_des_clients->objectName().isEmpty())
            gestion_des_clients->setObjectName(QStringLiteral("gestion_des_clients"));
        gestion_des_clients->resize(1316, 600);
        gestion_des_clients->setStyleSheet(QStringLiteral("background-color:rgb(255, 170, 127);"));
        centralwidget = new QWidget(gestion_des_clients);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-20, 0, 1311, 541));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 390, 221, 28));
        pushButton->setFocusPolicy(Qt::StrongFocus);
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
"\n"
""));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(860, 390, 221, 28));
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
"\n"
""));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1210, 500, 93, 28));
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
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 120, 439, 49));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Caslon Pro"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1190, 30, 93, 28));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1220, 510, 93, 28));
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
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 100, 1271, 401));
        QFont font1;
        font1.setPointSize(16);
        groupBox->setFont(font1);
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 30, 1201, 361));
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
        cin = new QLineEdit(tab);
        cin->setObjectName(QStringLiteral("cin"));
        cin->setGeometry(QRect(300, 40, 113, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 40, 51, 20));
        label_5->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 80, 56, 16));
        label_6->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 120, 61, 16));
        label_9->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 160, 56, 16));
        label_11->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        nom = new QLineEdit(tab);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(300, 80, 113, 22));
        prenom = new QLineEdit(tab);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(300, 120, 113, 22));
        adresse = new QLineEdit(tab);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(300, 160, 113, 22));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(590, 290, 93, 28));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 210, 61, 20));
        label_7->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tel = new QLineEdit(tab);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(300, 210, 113, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(480, 140, 201, 31));
        label_13->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        c_supp = new QLineEdit(tab_2);
        c_supp->setObjectName(QStringLiteral("c_supp"));
        c_supp->setGeometry(QRect(370, 190, 461, 22));
        c_supp->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        PB_supp = new QPushButton(tab_2);
        PB_supp->setObjectName(QStringLiteral("PB_supp"));
        PB_supp->setGeometry(QRect(560, 280, 93, 28));
        PB_supp->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        modifclient = new QPushButton(tab_3);
        modifclient->setObjectName(QStringLiteral("modifclient"));
        modifclient->setGeometry(QRect(520, 290, 93, 28));
        modifclient->setStyleSheet(QLatin1String("QPushButton\n"
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
"\n"
""));
        cin_m = new QLineEdit(tab_3);
        cin_m->setObjectName(QStringLiteral("cin_m"));
        cin_m->setGeometry(QRect(270, 50, 113, 20));
        nom_m = new QLineEdit(tab_3);
        nom_m->setObjectName(QStringLiteral("nom_m"));
        nom_m->setGeometry(QRect(270, 90, 113, 20));
        prenom_m = new QLineEdit(tab_3);
        prenom_m->setObjectName(QStringLiteral("prenom_m"));
        prenom_m->setGeometry(QRect(270, 130, 113, 20));
        adresse_m = new QLineEdit(tab_3);
        adresse_m->setObjectName(QStringLiteral("adresse_m"));
        adresse_m->setGeometry(QRect(270, 170, 113, 20));
        telephone_m = new QLineEdit(tab_3);
        telephone_m->setObjectName(QStringLiteral("telephone_m"));
        telephone_m->setGeometry(QRect(270, 210, 113, 20));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 50, 41, 16));
        label_8->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(160, 90, 41, 21));
        label_10->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 140, 47, 13));
        label_12->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(160, 180, 47, 13));
        label_14->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(160, 210, 61, 20));
        label_15->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        afficher_normal = new QPushButton(tab_4);
        afficher_normal->setObjectName(QStringLiteral("afficher_normal"));
        afficher_normal->setGeometry(QRect(560, 280, 141, 28));
        afficher_normal->setStyleSheet(QLatin1String("QPushButton\n"
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
"\n"
""));
        table_client = new QTableView(tab_4);
        table_client->setObjectName(QStringLiteral("table_client"));
        table_client->setGeometry(QRect(200, 20, 971, 251));
        tri_c = new QPushButton(tab_4);
        tri_c->setObjectName(QStringLiteral("tri_c"));
        tri_c->setGeometry(QRect(10, 72, 121, 31));
        tri_n = new QPushButton(tab_4);
        tri_n->setObjectName(QStringLiteral("tri_n"));
        tri_n->setGeometry(QRect(10, 112, 121, 31));
        exp_c = new QPushButton(tab_4);
        exp_c->setObjectName(QStringLiteral("exp_c"));
        exp_c->setGeometry(QRect(10, 152, 121, 31));
        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 230, 31, 16));
        label_25->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 260, 47, 13));
        label_26->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        recherche = new QPushButton(tab_4);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(20, 292, 111, 31));
        recherche->setStyleSheet(QLatin1String("QPushButton\n"
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
        nom_r = new QLineEdit(tab_4);
        nom_r->setObjectName(QStringLiteral("nom_r"));
        nom_r->setGeometry(QRect(70, 230, 113, 20));
        adr_r = new QLineEdit(tab_4);
        adr_r->setObjectName(QStringLiteral("adr_r"));
        adr_r->setGeometry(QRect(70, 260, 113, 20));
        tabWidget->addTab(tab_4, QString());
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 40, 651, 49));
        label_2->setStyleSheet(QStringLiteral("font: 24pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(1180, 30, 93, 28));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(970, 470, 93, 28));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 100, 1251, 421));
        QFont font2;
        font2.setPointSize(18);
        groupBox_2->setFont(font2);
        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 50, 1201, 361));
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
"\n"
""));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        ref = new QLineEdit(tab_5);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(290, 60, 191, 22));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(100, 70, 71, 16));
        label_20->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 120, 71, 16));
        label_21->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        cin_2 = new QLineEdit(tab_5);
        cin_2->setObjectName(QStringLiteral("cin_2"));
        cin_2->setGeometry(QRect(290, 120, 191, 22));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 180, 71, 16));
        label_27->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pb_ajouter_c = new QPushButton(tab_5);
        pb_ajouter_c->setObjectName(QStringLiteral("pb_ajouter_c"));
        pb_ajouter_c->setGeometry(QRect(560, 290, 93, 28));
        pb_ajouter_c->setStyleSheet(QLatin1String("QPushButton\n"
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
        nbr = new QLineEdit(tab_5);
        nbr->setObjectName(QStringLiteral("nbr"));
        nbr->setGeometry(QRect(290, 170, 191, 22));
        date_e = new QDateEdit(tab_5);
        date_e->setObjectName(QStringLiteral("date_e"));
        date_e->setGeometry(QRect(290, 230, 191, 22));
        label_29 = new QLabel(tab_5);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(100, 230, 91, 16));
        label_29->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(490, 130, 251, 31));
        label_28->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        r_supp = new QLineEdit(tab_6);
        r_supp->setObjectName(QStringLiteral("r_supp"));
        r_supp->setGeometry(QRect(350, 180, 481, 22));
        r_supp->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pb_supp_c = new QPushButton(tab_6);
        pb_supp_c->setObjectName(QStringLiteral("pb_supp_c"));
        pb_supp_c->setGeometry(QRect(550, 290, 93, 28));
        pb_supp_c->setStyleSheet(QLatin1String("QPushButton\n"
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
"\n"
""));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        modifcarte = new QPushButton(tab_7);
        modifcarte->setObjectName(QStringLiteral("modifcarte"));
        modifcarte->setGeometry(QRect(550, 290, 181, 28));
        modifcarte->setStyleSheet(QLatin1String("QPushButton\n"
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
"\n"
""));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(70, 60, 71, 16));
        label_16->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(70, 100, 61, 16));
        label_17->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_23 = new QLabel(tab_7);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(70, 140, 71, 16));
        label_23->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        ref_m = new QLineEdit(tab_7);
        ref_m->setObjectName(QStringLiteral("ref_m"));
        ref_m->setGeometry(QRect(230, 60, 251, 20));
        cl_m = new QLineEdit(tab_7);
        cl_m->setObjectName(QStringLiteral("cl_m"));
        cl_m->setGeometry(QRect(230, 100, 251, 20));
        point_m = new QLineEdit(tab_7);
        point_m->setObjectName(QStringLiteral("point_m"));
        point_m->setGeometry(QRect(230, 140, 251, 20));
        label_30 = new QLabel(tab_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(70, 180, 111, 16));
        label_30->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        date_m = new QDateEdit(tab_7);
        date_m->setObjectName(QStringLiteral("date_m"));
        date_m->setGeometry(QRect(230, 180, 251, 22));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        afficher = new QPushButton(tab_8);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(560, 290, 141, 28));
        afficher->setStyleSheet(QLatin1String("QPushButton\n"
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
        table_carte = new QTableView(tab_8);
        table_carte->setObjectName(QStringLiteral("table_carte"));
        table_carte->setGeometry(QRect(220, 10, 951, 271));
        tri_r = new QPushButton(tab_8);
        tri_r->setObjectName(QStringLiteral("tri_r"));
        tri_r->setGeometry(QRect(20, 90, 121, 23));
        tri_r->setStyleSheet(QLatin1String("QPushButton\n"
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
        tri_ci = new QPushButton(tab_8);
        tri_ci->setObjectName(QStringLiteral("tri_ci"));
        tri_ci->setGeometry(QRect(20, 130, 121, 23));
        exp_2 = new QPushButton(tab_8);
        exp_2->setObjectName(QStringLiteral("exp_2"));
        exp_2->setGeometry(QRect(20, 170, 121, 23));
        ref_r = new QLineEdit(tab_8);
        ref_r->setObjectName(QStringLiteral("ref_r"));
        ref_r->setGeometry(QRect(100, 220, 113, 20));
        cc_r = new QLineEdit(tab_8);
        cc_r->setObjectName(QStringLiteral("cc_r"));
        cc_r->setGeometry(QRect(100, 250, 113, 20));
        rech_2 = new QPushButton(tab_8);
        rech_2->setObjectName(QStringLiteral("rech_2"));
        rech_2->setGeometry(QRect(20, 290, 111, 31));
        rech_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_31 = new QLabel(tab_8);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 220, 61, 16));
        label_31->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_32 = new QLabel(tab_8);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 250, 71, 16));
        label_32->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_8, QString());
        label_18 = new QLabel(page_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(-30, 0, 1059, 40));
        QFont font3;
        font3.setPointSize(20);
        label_18->setFont(font3);
        stackedWidget->addWidget(page_3);
        gestion_des_clients->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_des_clients);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1316, 26));
        gestion_des_clients->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_des_clients);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_des_clients->setStatusBar(statusbar);

        retranslateUi(gestion_des_clients);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_des_clients);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_des_clients)
    {
        gestion_des_clients->setWindowTitle(QApplication::translate("gestion_des_clients", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_des_clients", "Gestion Client", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_des_clients", "Gestion Carte-fidelite", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_des_clients", "Deconexion", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_des_clients", "                         Cookies", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gestion_des_clients", "HOME", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("gestion_des_clients", "Deconexion", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestion_des_clients", "Gestion Client", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_des_clients", "CIN", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_des_clients", "Nom :", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_des_clients", "Prenom:", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_des_clients", "Adresse:", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("gestion_des_clients", "Ajouter", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_des_clients", "Num-T\303\251l:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_des_clients", "Ajouter", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_des_clients", "Donner CIN du client a supprimer :", Q_NULLPTR));
        PB_supp->setText(QApplication::translate("gestion_des_clients", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_des_clients", "Supprimer", Q_NULLPTR));
        modifclient->setText(QApplication::translate("gestion_des_clients", "Modifier", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_des_clients", "CIN:", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_des_clients", "Nom:", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_des_clients", "Prenom:", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_des_clients", "Adresse:", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_des_clients", "Telephone:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gestion_des_clients", "Modifier", Q_NULLPTR));
        afficher_normal->setText(QApplication::translate("gestion_des_clients", "Afficher ", Q_NULLPTR));
        tri_c->setText(QApplication::translate("gestion_des_clients", "Trier par CIN", Q_NULLPTR));
        tri_n->setText(QApplication::translate("gestion_des_clients", "Trier par NOM", Q_NULLPTR));
        exp_c->setText(QApplication::translate("gestion_des_clients", "Exportation PDF", Q_NULLPTR));
        label_25->setText(QApplication::translate("gestion_des_clients", "Nom:", Q_NULLPTR));
        label_26->setText(QApplication::translate("gestion_des_clients", "Prenom:", Q_NULLPTR));
        recherche->setText(QApplication::translate("gestion_des_clients", "Recherche", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("gestion_des_clients", "Afficher", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_des_clients", "                                     COOKIES", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("gestion_des_clients", "HOME", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("gestion_des_clients", "Deconexion", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("gestion_des_clients", "Gestion Carte-fidelite", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_des_clients", "Reference:", Q_NULLPTR));
        label_21->setText(QApplication::translate("gestion_des_clients", "Cin_client:", Q_NULLPTR));
        label_27->setText(QApplication::translate("gestion_des_clients", "Nbr_point", Q_NULLPTR));
        pb_ajouter_c->setText(QApplication::translate("gestion_des_clients", "Ajouter", Q_NULLPTR));
        label_29->setText(QApplication::translate("gestion_des_clients", "Date d'\303\251mission", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("gestion_des_clients", "Ajouter", Q_NULLPTR));
        label_28->setText(QApplication::translate("gestion_des_clients", "Donner reference  a supprimer :", Q_NULLPTR));
        pb_supp_c->setText(QApplication::translate("gestion_des_clients", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("gestion_des_clients", "Supprimer", Q_NULLPTR));
        modifcarte->setText(QApplication::translate("gestion_des_clients", "Modifier", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_des_clients", "Reference:", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_des_clients", "Cin_client", Q_NULLPTR));
        label_23->setText(QApplication::translate("gestion_des_clients", "Nbr_point", Q_NULLPTR));
        label_30->setText(QApplication::translate("gestion_des_clients", "Date d'\303\251mission", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("gestion_des_clients", "Modifier", Q_NULLPTR));
        afficher->setText(QApplication::translate("gestion_des_clients", "Afficher ", Q_NULLPTR));
        tri_r->setText(QApplication::translate("gestion_des_clients", "Tri par Reference", Q_NULLPTR));
        tri_ci->setText(QApplication::translate("gestion_des_clients", "Tri par CIN client", Q_NULLPTR));
        exp_2->setText(QApplication::translate("gestion_des_clients", "Exporatation PDF", Q_NULLPTR));
        rech_2->setText(QApplication::translate("gestion_des_clients", "Recherche", Q_NULLPTR));
        label_31->setText(QApplication::translate("gestion_des_clients", "Reference:", Q_NULLPTR));
        label_32->setText(QApplication::translate("gestion_des_clients", "Cin_client", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("gestion_des_clients", "Afficher", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_des_clients", "                                                             Cookies", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_des_clients: public Ui_gestion_des_clients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_DES_CLIENTS_H
