/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
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
    QWidget *page_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_18;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1132, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #212529;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 20, 1071, 501));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(290, 110, 441, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 250, 221, 28));
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 250, 221, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(960, 440, 93, 28));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(970, 30, 93, 28));
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
""));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(970, 470, 93, 28));
        verticalLayoutWidget_3 = new QWidget(page_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(50, 100, 1053, 35));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);

        verticalLayout_3->addWidget(label_3);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 150, 1021, 341));
        QFont font2;
        font2.setPointSize(16);
        groupBox->setFont(font2);
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 1001, 301));
        tabWidget->setStyleSheet(QString::fromUtf8("margin-top:0px;\n"
"QMainWindow,QWidget,QMessageBox{\n"
"background: qlineargradient(spread:pad, x1:0.472, y1:0, x2:0.502, y2:1, stop:0 rgba(0, 53, 84, 255), stop:1 rgba(0, 70, 111, 255));\n"
"font-family:\"Quicksand SemiBold\";\n"
"}\n"
"\n"
"\n"
"QListWidget{\n"
"background:transparent;\n"
"}\n"
"\n"
"QFrame{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
"QLabel,QGroupBox{\n"
"color: white;\n"
"background:transparent;\n"
"}\n"
"QComboBox{\n"
"background:rgb(0, 48, 75);\n"
"color:white;\n"
"height:32px;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QLineEdit,QDateEdit,QDateTimeEdit{\n"
"background:rgba(0, 33, 52, 100);\n"
"color:white;\n"
"height:32px;\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QPushButton{\n"
"width:131px;\n"
"height:32px;\n"
"background:rgba(0, 33, 52, 100);\n"
"color:white;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: #cae9ff;\n"
"color:black;\n"
"}\n"
"\n"
"\n"
"Line{\n"
"backfround:white;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        cin = new QLineEdit(tab);
        cin->setObjectName(QString::fromUtf8("cin"));
        cin->setGeometry(QRect(300, 40, 113, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 40, 51, 20));
        label_5->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 80, 56, 16));
        label_6->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 120, 61, 16));
        label_9->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(210, 160, 56, 16));
        label_11->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        nom = new QLineEdit(tab);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(300, 80, 113, 22));
        prenom = new QLineEdit(tab);
        prenom->setObjectName(QString::fromUtf8("prenom"));
        prenom->setGeometry(QRect(300, 120, 113, 22));
        adresse = new QLineEdit(tab);
        adresse->setObjectName(QString::fromUtf8("adresse"));
        adresse->setGeometry(QRect(300, 160, 113, 22));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QString::fromUtf8("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(530, 230, 93, 28));
        pb_ajouter->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 210, 47, 13));
        label_7->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tel = new QLineEdit(tab);
        tel->setObjectName(QString::fromUtf8("tel"));
        tel->setGeometry(QRect(300, 210, 113, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(340, 85, 201, 21));
        label_13->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        c_supp = new QLineEdit(tab_2);
        c_supp->setObjectName(QString::fromUtf8("c_supp"));
        c_supp->setGeometry(QRect(360, 130, 171, 22));
        PB_supp = new QPushButton(tab_2);
        PB_supp->setObjectName(QString::fromUtf8("PB_supp"));
        PB_supp->setGeometry(QRect(430, 210, 93, 28));
        PB_supp->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        modifclient = new QPushButton(tab_3);
        modifclient->setObjectName(QString::fromUtf8("modifclient"));
        modifclient->setGeometry(QRect(500, 220, 93, 28));
        modifclient->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        cin_m = new QLineEdit(tab_3);
        cin_m->setObjectName(QString::fromUtf8("cin_m"));
        cin_m->setGeometry(QRect(270, 50, 113, 20));
        nom_m = new QLineEdit(tab_3);
        nom_m->setObjectName(QString::fromUtf8("nom_m"));
        nom_m->setGeometry(QRect(270, 90, 113, 20));
        prenom_m = new QLineEdit(tab_3);
        prenom_m->setObjectName(QString::fromUtf8("prenom_m"));
        prenom_m->setGeometry(QRect(270, 130, 113, 20));
        adresse_m = new QLineEdit(tab_3);
        adresse_m->setObjectName(QString::fromUtf8("adresse_m"));
        adresse_m->setGeometry(QRect(270, 170, 113, 20));
        telephone_m = new QLineEdit(tab_3);
        telephone_m->setObjectName(QString::fromUtf8("telephone_m"));
        telephone_m->setGeometry(QRect(270, 210, 113, 20));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 50, 41, 16));
        label_8->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(160, 90, 41, 21));
        label_10->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 140, 47, 13));
        label_12->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(160, 180, 47, 13));
        label_14->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(160, 210, 61, 20));
        label_15->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        afficher_normal = new QPushButton(tab_4);
        afficher_normal->setObjectName(QString::fromUtf8("afficher_normal"));
        afficher_normal->setGeometry(QRect(440, 220, 141, 28));
        afficher_normal->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        table_client = new QTableView(tab_4);
        table_client->setObjectName(QString::fromUtf8("table_client"));
        table_client->setGeometry(QRect(230, 10, 531, 201));
        tri_c = new QPushButton(tab_4);
        tri_c->setObjectName(QString::fromUtf8("tri_c"));
        tri_c->setGeometry(QRect(50, 40, 101, 23));
        tri_n = new QPushButton(tab_4);
        tri_n->setObjectName(QString::fromUtf8("tri_n"));
        tri_n->setGeometry(QRect(50, 70, 101, 23));
        exp_c = new QPushButton(tab_4);
        exp_c->setObjectName(QString::fromUtf8("exp_c"));
        exp_c->setGeometry(QRect(50, 100, 101, 23));
        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(30, 180, 31, 16));
        label_25->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 210, 47, 13));
        label_26->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        recherche = new QPushButton(tab_4);
        recherche->setObjectName(QString::fromUtf8("recherche"));
        recherche->setGeometry(QRect(100, 240, 75, 23));
        recherche->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        nom_r = new QLineEdit(tab_4);
        nom_r->setObjectName(QString::fromUtf8("nom_r"));
        nom_r->setGeometry(QRect(90, 180, 113, 20));
        adr_r = new QLineEdit(tab_4);
        adr_r->setObjectName(QString::fromUtf8("adr_r"));
        adr_r->setGeometry(QRect(90, 210, 113, 20));
        tabWidget->addTab(tab_4, QString());
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(970, 20, 93, 28));
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
""));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(970, 470, 93, 28));
        verticalLayoutWidget_6 = new QWidget(page_3);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(50, 90, 1061, 35));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(verticalLayoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);

        verticalLayout_6->addWidget(label_18);

        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 140, 1021, 361));
        QFont font3;
        font3.setPointSize(18);
        groupBox_2->setFont(font3);
        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(30, 40, 981, 311));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        ref = new QLineEdit(tab_5);
        ref->setObjectName(QString::fromUtf8("ref"));
        ref->setGeometry(QRect(300, 20, 113, 22));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(110, 20, 71, 16));
        label_20->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(110, 50, 71, 16));
        label_21->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        cin_2 = new QLineEdit(tab_5);
        cin_2->setObjectName(QString::fromUtf8("cin_2"));
        cin_2->setGeometry(QRect(300, 50, 113, 22));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(110, 90, 71, 16));
        label_27->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pb_ajouter_c = new QPushButton(tab_5);
        pb_ajouter_c->setObjectName(QString::fromUtf8("pb_ajouter_c"));
        pb_ajouter_c->setGeometry(QRect(540, 190, 93, 28));
        pb_ajouter_c->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        nbr = new QLineEdit(tab_5);
        nbr->setObjectName(QString::fromUtf8("nbr"));
        nbr->setGeometry(QRect(300, 90, 113, 22));
        date_e = new QDateEdit(tab_5);
        date_e->setObjectName(QString::fromUtf8("date_e"));
        date_e->setGeometry(QRect(300, 130, 110, 22));
        label_29 = new QLabel(tab_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(110, 130, 91, 16));
        label_29->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(390, 90, 171, 16));
        label_28->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        r_supp = new QLineEdit(tab_6);
        r_supp->setObjectName(QString::fromUtf8("r_supp"));
        r_supp->setGeometry(QRect(390, 130, 171, 22));
        pb_supp_c = new QPushButton(tab_6);
        pb_supp_c->setObjectName(QString::fromUtf8("pb_supp_c"));
        pb_supp_c->setGeometry(QRect(430, 210, 93, 28));
        pb_supp_c->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        modifcarte = new QPushButton(tab_7);
        modifcarte->setObjectName(QString::fromUtf8("modifcarte"));
        modifcarte->setGeometry(QRect(420, 200, 93, 28));
        modifcarte->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(140, 60, 71, 16));
        label_16->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(130, 100, 61, 16));
        label_17->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_23 = new QLabel(tab_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(130, 140, 71, 16));
        label_23->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        ref_m = new QLineEdit(tab_7);
        ref_m->setObjectName(QString::fromUtf8("ref_m"));
        ref_m->setGeometry(QRect(230, 60, 113, 20));
        cl_m = new QLineEdit(tab_7);
        cl_m->setObjectName(QString::fromUtf8("cl_m"));
        cl_m->setGeometry(QRect(230, 100, 113, 20));
        point_m = new QLineEdit(tab_7);
        point_m->setObjectName(QString::fromUtf8("point_m"));
        point_m->setGeometry(QRect(230, 140, 113, 20));
        label_30 = new QLabel(tab_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(130, 180, 81, 16));
        label_30->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        date_m = new QDateEdit(tab_7);
        date_m->setObjectName(QString::fromUtf8("date_m"));
        date_m->setGeometry(QRect(230, 180, 110, 22));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        afficher = new QPushButton(tab_8);
        afficher->setObjectName(QString::fromUtf8("afficher"));
        afficher->setGeometry(QRect(440, 230, 141, 28));
        afficher->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        table_carte = new QTableView(tab_8);
        table_carte->setObjectName(QString::fromUtf8("table_carte"));
        table_carte->setGeometry(QRect(220, 10, 541, 211));
        tri_r = new QPushButton(tab_8);
        tri_r->setObjectName(QString::fromUtf8("tri_r"));
        tri_r->setGeometry(QRect(50, 30, 121, 23));
        tri_ci = new QPushButton(tab_8);
        tri_ci->setObjectName(QString::fromUtf8("tri_ci"));
        tri_ci->setGeometry(QRect(50, 60, 121, 23));
        exp_2 = new QPushButton(tab_8);
        exp_2->setObjectName(QString::fromUtf8("exp_2"));
        exp_2->setGeometry(QRect(50, 90, 121, 23));
        ref_r = new QLineEdit(tab_8);
        ref_r->setObjectName(QString::fromUtf8("ref_r"));
        ref_r->setGeometry(QRect(100, 170, 113, 20));
        cc_r = new QLineEdit(tab_8);
        cc_r->setObjectName(QString::fromUtf8("cc_r"));
        cc_r->setGeometry(QRect(100, 200, 113, 20));
        rech_2 = new QPushButton(tab_8);
        rech_2->setObjectName(QString::fromUtf8("rech_2"));
        rech_2->setGeometry(QRect(110, 230, 75, 23));
        rech_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_31 = new QLabel(tab_8);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(20, 170, 61, 16));
        label_31->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_32 = new QLabel(tab_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(20, 210, 51, 16));
        label_32->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_8, QString());
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1132, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "                         Cookies", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Gestion Client", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Gestion Carte-fidelite", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Deconexion", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Deconexion", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "                                                Cookies", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Gestion Client", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Prenom:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Adresse:", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Num-T\303\251l:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Donner CIN du client a supprimer :", nullptr));
        PB_supp->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        modifclient->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "CIN:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Prenom:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Adresse:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Telephone:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        afficher_normal->setText(QCoreApplication::translate("MainWindow", "Afficher ", nullptr));
        tri_c->setText(QCoreApplication::translate("MainWindow", "Trier par CIN", nullptr));
        tri_n->setText(QCoreApplication::translate("MainWindow", "Trier par NOM", nullptr));
        exp_c->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Prenom:", nullptr));
        recherche->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Deconexion", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "                                                             Cookies", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Gestion Carte-fidelite", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Reference:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Cin_client:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Nbr_point", nullptr));
        pb_ajouter_c->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Date d'\303\251mission", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Donner reference  a supprimer :", nullptr));
        pb_supp_c->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        modifcarte->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Reference:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Cin_client", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Nbr_point", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Date d'\303\251mission", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        afficher->setText(QCoreApplication::translate("MainWindow", "Afficher ", nullptr));
        tri_r->setText(QCoreApplication::translate("MainWindow", "Tri par Reference", nullptr));
        tri_ci->setText(QCoreApplication::translate("MainWindow", "Tri par CIN client", nullptr));
        exp_2->setText(QCoreApplication::translate("MainWindow", "Exporatation PDF", nullptr));
        rech_2->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Reference:", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Cin_client", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Afficher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
