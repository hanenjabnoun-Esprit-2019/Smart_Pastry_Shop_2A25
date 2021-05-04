/********************************************************************************
** Form generated from reading UI file 'gestion_boutique.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_BOUTIQUE_H
#define UI_GESTION_BOUTIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_boutique
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QWidget *page_3;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bar_ajoutC;
    QPushButton *bar_modifC;
    QPushButton *bar_affichC;
    QPushButton *bar_suppC;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QToolBox *toolBox;
    QWidget *page_7;
    QLineEdit *lineEdit;
    QWidget *page_8;
    QLineEdit *lineEdit_2;
    QWidget *page_9;
    QLineEdit *lineEdit_3;
    QWidget *page_10;
    QLineEdit *lineEdit_7;
    QLabel *label;
    QPushButton *statistique_commande;
    QPushButton *ajouter_commande;
    QWidget *page_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_15;
    QPushButton *modifier_commande;
    QWidget *page_11;
    QLabel *label_6;
    QTableView *tableView_Commandes;
    QLineEdit *lineEdit_17;
    QWidget *page_12;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QPushButton *supprimer_commande;
    QPushButton *deconnexion1;
    QPushButton *home1;
    QLabel *label_19;
    QLabel *label_21;
    QWidget *page_4;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bar_ajoutB;
    QPushButton *bar_modifB;
    QPushButton *bar_affichB;
    QPushButton *bar_suppB;
    QStackedWidget *stackedWidget_3;
    QWidget *page_13;
    QToolBox *toolBox_2;
    QWidget *page_15;
    QLineEdit *lineEdit_16;
    QWidget *page_16;
    QLineEdit *lineEdit_9;
    QWidget *page_17;
    QLineEdit *lineEdit_10;
    QWidget *page_18;
    QLineEdit *spinBox;
    QWidget *page_19;
    QLineEdit *spinBox_3;
    QPushButton *ajouter_boutique;
    QWidget *page_14;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *spinBox_2;
    QLineEdit *spinBox_4;
    QPushButton *modifier_boutique;
    QPushButton *pushButton_6;
    QWidget *page_20;
    QGroupBox *groupBox_7;
    QLineEdit *lineEdit_14;
    QPushButton *pushButton_7;
    QPushButton *supprimer_boutique;
    QLabel *label_13;
    QWidget *page_21;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_14;
    QComboBox *comboBox;
    QPushButton *tri_boutique;
    QPushButton *pushButton_22;
    QTableView *tableView_boutique;
    QPushButton *deconnexion2;
    QPushButton *home2;
    QLabel *label_20;
    QLabel *label_22;
    QWidget *page_2;

    void setupUi(QDialog *gestion_boutique)
    {
        if (gestion_boutique->objectName().isEmpty())
            gestion_boutique->setObjectName(QString::fromUtf8("gestion_boutique"));
        gestion_boutique->resize(1315, 545);
        gestion_boutique->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 127);"));
        stackedWidget = new QStackedWidget(gestion_boutique);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, 30, 1311, 511));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1130, 490, 101, 21));
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 230, 251, 41));
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
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 230, 261, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(220, 60, 601, 71));
        label_15->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(244, 143, 55);\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(970, 20, 151, 101));
        label_16->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(page);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(630, 290, 261, 171));
        label_17->setPixmap(QPixmap(QString::fromUtf8("image/01_lidette.jpg")));
        label_17->setScaledContents(true);
        label_18 = new QLabel(page);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(170, 292, 231, 191));
        label_18->setPixmap(QPixmap(QString::fromUtf8("image/181291802_817769132281781_5399153178406483641_n.png")));
        label_18->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 40, 1031, 431));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 40, 961, 381));
        horizontalLayoutWidget = new QWidget(groupBox_4);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 20, 881, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bar_ajoutC = new QPushButton(horizontalLayoutWidget);
        bar_ajoutC->setObjectName(QString::fromUtf8("bar_ajoutC"));
        bar_ajoutC->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout->addWidget(bar_ajoutC);

        bar_modifC = new QPushButton(horizontalLayoutWidget);
        bar_modifC->setObjectName(QString::fromUtf8("bar_modifC"));
        bar_modifC->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout->addWidget(bar_modifC);

        bar_affichC = new QPushButton(horizontalLayoutWidget);
        bar_affichC->setObjectName(QString::fromUtf8("bar_affichC"));
        bar_affichC->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout->addWidget(bar_affichC);

        bar_suppC = new QPushButton(horizontalLayoutWidget);
        bar_suppC->setObjectName(QString::fromUtf8("bar_suppC"));
        bar_suppC->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout->addWidget(bar_suppC);

        stackedWidget_2 = new QStackedWidget(groupBox_4);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(40, 60, 911, 321));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        toolBox = new QToolBox(page_5);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 32, 761, 261));
        toolBox->setStyleSheet(QString::fromUtf8("QToolBox::tab\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"\n"
"}\n"
"QToolBox::tab:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffffff;\n"
"}\n"
"QToolBox::tab:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-bottom-width:2px;\n"
"	border-color: rgb(249, 167, 43);\n"
"	color:rgb(249, 167, 43);\n"
"}\n"
"QToolBox::tab:selected\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-bottom-width:2px;\n"
"	border-color: rgb(249, 167, 43);\n"
"	color:rgb(249, 167, 43);\n"
"}\n"
"\n"
"\n"
""));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        page_7->setGeometry(QRect(0, 0, 761, 153));
        lineEdit = new QLineEdit(page_7);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 0, 691, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_7, QString::fromUtf8("Nom de produit "));
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        page_8->setGeometry(QRect(0, 0, 761, 153));
        lineEdit_2 = new QLineEdit(page_8);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 0, 731, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_8, QString::fromUtf8("Nombre de produit "));
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        page_9->setGeometry(QRect(0, 0, 761, 153));
        lineEdit_3 = new QLineEdit(page_9);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 0, 731, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_9, QString::fromUtf8("Reference de commande "));
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        page_10->setGeometry(QRect(0, 0, 761, 153));
        lineEdit_7 = new QLineEdit(page_10);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(10, 0, 751, 20));
        lineEdit_7->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_10, QString::fromUtf8("ID de la boutique"));
        label = new QLabel(page_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 171, 20));
        statistique_commande = new QPushButton(page_5);
        statistique_commande->setObjectName(QString::fromUtf8("statistique_commande"));
        statistique_commande->setGeometry(QRect(810, 50, 101, 31));
        statistique_commande->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        ajouter_commande = new QPushButton(page_5);
        ajouter_commande->setObjectName(QString::fromUtf8("ajouter_commande"));
        ajouter_commande->setGeometry(QRect(810, 290, 91, 31));
        ajouter_commande->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label_2 = new QLabel(page_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 171, 16));
        label_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(page_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 91, 16));
        label_3->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(page_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 100, 121, 16));
        label_4->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(page_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 140, 101, 16));
        label_5->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(page_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(220, 20, 321, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_5 = new QLineEdit(page_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(220, 60, 321, 20));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(page_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(220, 100, 321, 20));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_15 = new QLineEdit(page_6);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(220, 140, 321, 20));
        lineEdit_15->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifier_commande = new QPushButton(page_6);
        modifier_commande->setObjectName(QString::fromUtf8("modifier_commande"));
        modifier_commande->setGeometry(QRect(794, 272, 91, 31));
        modifier_commande->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"}"));
        stackedWidget_2->addWidget(page_6);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        label_6 = new QLabel(page_11);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 10, 211, 16));
        label_6->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tableView_Commandes = new QTableView(page_11);
        tableView_Commandes->setObjectName(QString::fromUtf8("tableView_Commandes"));
        tableView_Commandes->setGeometry(QRect(50, 80, 851, 231));
        lineEdit_17 = new QLineEdit(page_11);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(62, 30, 481, 20));
        lineEdit_17->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QString::fromUtf8("page_12"));
        lineEdit_8 = new QLineEdit(page_12);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(210, 160, 521, 20));
        lineEdit_8->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(page_12);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 110, 211, 31));
        label_7->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        supprimer_commande = new QPushButton(page_12);
        supprimer_commande->setObjectName(QString::fromUtf8("supprimer_commande"));
        supprimer_commande->setGeometry(QRect(380, 290, 171, 23));
        supprimer_commande->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        stackedWidget_2->addWidget(page_12);
        deconnexion1 = new QPushButton(page_3);
        deconnexion1->setObjectName(QString::fromUtf8("deconnexion1"));
        deconnexion1->setGeometry(QRect(850, 480, 101, 23));
        deconnexion1->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        home1 = new QPushButton(page_3);
        home1->setObjectName(QString::fromUtf8("home1"));
        home1->setGeometry(QRect(980, 480, 91, 23));
        home1->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(1090, 10, 111, 81));
        label_19->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_19->setScaledContents(true);
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(610, 5, 261, 31));
        label_21->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 40, 1121, 441));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 40, 1071, 381));
        horizontalLayoutWidget_2 = new QWidget(groupBox_6);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(70, 20, 961, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bar_ajoutB = new QPushButton(horizontalLayoutWidget_2);
        bar_ajoutB->setObjectName(QString::fromUtf8("bar_ajoutB"));
        bar_ajoutB->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(bar_ajoutB);

        bar_modifB = new QPushButton(horizontalLayoutWidget_2);
        bar_modifB->setObjectName(QString::fromUtf8("bar_modifB"));
        bar_modifB->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(bar_modifB);

        bar_affichB = new QPushButton(horizontalLayoutWidget_2);
        bar_affichB->setObjectName(QString::fromUtf8("bar_affichB"));
        bar_affichB->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(bar_affichB);

        bar_suppB = new QPushButton(horizontalLayoutWidget_2);
        bar_suppB->setObjectName(QString::fromUtf8("bar_suppB"));
        bar_suppB->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(bar_suppB);

        stackedWidget_3 = new QStackedWidget(groupBox_6);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(9, 69, 1051, 351));
        page_13 = new QWidget();
        page_13->setObjectName(QString::fromUtf8("page_13"));
        toolBox_2 = new QToolBox(page_13);
        toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
        toolBox_2->setGeometry(QRect(110, 70, 881, 161));
        toolBox_2->setStyleSheet(QString::fromUtf8("QToolBox::tab\n"
"{\n"
"	background-color: rgb(42, 46, 50);\n"
"   border-radius:0px;\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"\n"
"\n"
"}\n"
"QToolBox::tab:hover\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"		color:#ffffff;\n"
"}\n"
"QToolBox::tab:focus\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-bottom-width:2px;\n"
"	border-color: rgb(249, 167, 43);\n"
"	color:rgb(249, 167, 43);\n"
"}\n"
"QToolBox::tab:selected\n"
"{\n"
"	background-color: rgb(59, 62, 66);\n"
"	border-style:solid;\n"
"	border-bottom-width:2px;\n"
"	border-color: rgb(249, 167, 43);\n"
"	color:rgb(249, 167, 43);\n"
"}\n"
"\n"
""));
        page_15 = new QWidget();
        page_15->setObjectName(QString::fromUtf8("page_15"));
        page_15->setGeometry(QRect(0, 0, 881, 26));
        lineEdit_16 = new QLineEdit(page_15);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(0, 0, 881, 20));
        lineEdit_16->setStyleSheet(QString::fromUtf8("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_15, QString::fromUtf8("ID_boutique"));
        page_16 = new QWidget();
        page_16->setObjectName(QString::fromUtf8("page_16"));
        page_16->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_9 = new QLineEdit(page_16);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(0, 0, 881, 20));
        lineEdit_9->setStyleSheet(QString::fromUtf8("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_16, QString::fromUtf8("nom de boutique"));
        page_17 = new QWidget();
        page_17->setObjectName(QString::fromUtf8("page_17"));
        page_17->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_10 = new QLineEdit(page_17);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(10, 0, 871, 20));
        lineEdit_10->setStyleSheet(QString::fromUtf8("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_17, QString::fromUtf8("adresse"));
        page_18 = new QWidget();
        page_18->setObjectName(QString::fromUtf8("page_18"));
        page_18->setGeometry(QRect(0, 0, 100, 30));
        spinBox = new QLineEdit(page_18);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(0, 0, 881, 20));
        spinBox->setStyleSheet(QString::fromUtf8("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_18, QString::fromUtf8("nombre d'employees"));
        page_19 = new QWidget();
        page_19->setObjectName(QString::fromUtf8("page_19"));
        page_19->setGeometry(QRect(0, 0, 100, 30));
        spinBox_3 = new QLineEdit(page_19);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(0, 0, 891, 20));
        spinBox_3->setStyleSheet(QString::fromUtf8("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_19, QString::fromUtf8("nombre d'heure"));
        ajouter_boutique = new QPushButton(page_13);
        ajouter_boutique->setObjectName(QString::fromUtf8("ajouter_boutique"));
        ajouter_boutique->setGeometry(QRect(560, 330, 81, 21));
        ajouter_boutique->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        stackedWidget_3->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QString::fromUtf8("page_14"));
        label_8 = new QLabel(page_14);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 50, 141, 16));
        label_8->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(page_14);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(150, 90, 141, 16));
        label_9->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(page_14);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(150, 130, 141, 16));
        label_10->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(page_14);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(150, 170, 141, 16));
        label_11->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(page_14);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(150, 210, 141, 16));
        label_12->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_11 = new QLineEdit(page_14);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(420, 40, 301, 20));
        lineEdit_11->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(page_14);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(420, 80, 301, 20));
        lineEdit_12->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_13 = new QLineEdit(page_14);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(420, 120, 301, 20));
        lineEdit_13->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        spinBox_2 = new QLineEdit(page_14);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(420, 160, 301, 20));
        spinBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        spinBox_4 = new QLineEdit(page_14);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(420, 200, 301, 20));
        spinBox_4->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifier_boutique = new QPushButton(page_14);
        modifier_boutique->setObjectName(QString::fromUtf8("modifier_boutique"));
        modifier_boutique->setGeometry(QRect(570, 260, 151, 23));
        modifier_boutique->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_6 = new QPushButton(page_14);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 260, 161, 23));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        stackedWidget_3->addWidget(page_14);
        page_20 = new QWidget();
        page_20->setObjectName(QString::fromUtf8("page_20"));
        groupBox_7 = new QGroupBox(page_20);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(19, 19, 1001, 311));
        lineEdit_14 = new QLineEdit(groupBox_7);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(300, 160, 401, 20));
        lineEdit_14->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_7 = new QPushButton(groupBox_7);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(560, 250, 171, 23));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        supprimer_boutique = new QPushButton(groupBox_7);
        supprimer_boutique->setObjectName(QString::fromUtf8("supprimer_boutique"));
        supprimer_boutique->setGeometry(QRect(280, 250, 181, 23));
        supprimer_boutique->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(400, 130, 181, 16));
        label_13->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        stackedWidget_3->addWidget(page_20);
        page_21 = new QWidget();
        page_21->setObjectName(QString::fromUtf8("page_21"));
        checkBox = new QCheckBox(page_21);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(0, 230, 70, 17));
        checkBox_2 = new QCheckBox(page_21);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 210, 70, 17));
        label_14 = new QLabel(page_21);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 150, 111, 20));
        label_14->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(page_21);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(0, 180, 121, 22));
        tri_boutique = new QPushButton(page_21);
        tri_boutique->setObjectName(QString::fromUtf8("tri_boutique"));
        tri_boutique->setGeometry(QRect(0, 110, 121, 23));
        tri_boutique->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_22 = new QPushButton(page_21);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(0, 80, 121, 23));
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tableView_boutique = new QTableView(page_21);
        tableView_boutique->setObjectName(QString::fromUtf8("tableView_boutique"));
        tableView_boutique->setGeometry(QRect(160, 20, 871, 321));
        stackedWidget_3->addWidget(page_21);
        deconnexion2 = new QPushButton(page_4);
        deconnexion2->setObjectName(QString::fromUtf8("deconnexion2"));
        deconnexion2->setGeometry(QRect(940, 490, 91, 23));
        deconnexion2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        home2 = new QPushButton(page_4);
        home2->setObjectName(QString::fromUtf8("home2"));
        home2->setGeometry(QRect(1090, 490, 91, 23));
        home2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        label_20 = new QLabel(page_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(1160, 20, 111, 81));
        label_20->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_20->setScaledContents(true);
        label_22 = new QLabel(page_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(490, 10, 261, 31));
        label_22->setStyleSheet(QString::fromUtf8("font: 24pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(gestion_boutique);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(1);
        toolBox_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_boutique);
    } // setupUi

    void retranslateUi(QDialog *gestion_boutique)
    {
        gestion_boutique->setWindowTitle(QCoreApplication::translate("gestion_boutique", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("gestion_boutique", "Deconnexion", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gestion_boutique", "Gestion Commande", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gestion_boutique", "Gestion Boutique ", nullptr));
        label_15->setText(QCoreApplication::translate("gestion_boutique", "Gestion boutiques et commandes", nullptr));
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("gestion_boutique", "               Gestion des commande", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("gestion_boutique", "Commande", nullptr));
        bar_ajoutC->setText(QCoreApplication::translate("gestion_boutique", "Ajouter", nullptr));
        bar_modifC->setText(QCoreApplication::translate("gestion_boutique", "Modifier", nullptr));
        bar_affichC->setText(QCoreApplication::translate("gestion_boutique", "afficher", nullptr));
        bar_suppC->setText(QCoreApplication::translate("gestion_boutique", "supprimer", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_7), QCoreApplication::translate("gestion_boutique", "Nom de produit ", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_8), QCoreApplication::translate("gestion_boutique", "Nombre de produit ", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_9), QCoreApplication::translate("gestion_boutique", "Reference de commande ", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_10), QCoreApplication::translate("gestion_boutique", "ID de la boutique", nullptr));
        label->setText(QCoreApplication::translate("gestion_boutique", "PASSER VOTRE COMMANDE ", nullptr));
        statistique_commande->setText(QCoreApplication::translate("gestion_boutique", "statistique ", nullptr));
        ajouter_commande->setText(QCoreApplication::translate("gestion_boutique", "ajouter ", nullptr));
        label_2->setText(QCoreApplication::translate("gestion_boutique", "taper la reference de commande", nullptr));
        label_3->setText(QCoreApplication::translate("gestion_boutique", "nom de produit", nullptr));
        label_4->setText(QCoreApplication::translate("gestion_boutique", "nombre de produit ", nullptr));
        label_5->setText(QCoreApplication::translate("gestion_boutique", "ID de la boutique ", nullptr));
        modifier_commande->setText(QCoreApplication::translate("gestion_boutique", "Modifier", nullptr));
        label_6->setText(QCoreApplication::translate("gestion_boutique", "Taper la reference pour chercher ", nullptr));
        label_7->setText(QCoreApplication::translate("gestion_boutique", "Taoer la reference de Commande", nullptr));
        supprimer_commande->setText(QCoreApplication::translate("gestion_boutique", "Confirmer la suppression", nullptr));
        deconnexion1->setText(QCoreApplication::translate("gestion_boutique", "Deconnexion", nullptr));
        home1->setText(QCoreApplication::translate("gestion_boutique", "Home", nullptr));
        label_19->setText(QString());
        label_21->setText(QCoreApplication::translate("gestion_boutique", "COOKIES", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("gestion_boutique", "Gestion des boutique ", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("gestion_boutique", "Boutique ", nullptr));
        bar_ajoutB->setText(QCoreApplication::translate("gestion_boutique", "Ajouter ", nullptr));
        bar_modifB->setText(QCoreApplication::translate("gestion_boutique", "Modifier ", nullptr));
        bar_affichB->setText(QCoreApplication::translate("gestion_boutique", "Afficher", nullptr));
        bar_suppB->setText(QCoreApplication::translate("gestion_boutique", "Supprimer", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_15), QCoreApplication::translate("gestion_boutique", "ID_boutique", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_16), QCoreApplication::translate("gestion_boutique", "nom de boutique", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_17), QCoreApplication::translate("gestion_boutique", "adresse", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_18), QCoreApplication::translate("gestion_boutique", "nombre d'employees", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_19), QCoreApplication::translate("gestion_boutique", "nombre d'heure", nullptr));
        ajouter_boutique->setText(QCoreApplication::translate("gestion_boutique", "Ajouter", nullptr));
        label_8->setText(QCoreApplication::translate("gestion_boutique", "taper l'ID", nullptr));
        label_9->setText(QCoreApplication::translate("gestion_boutique", "Nom de boutique", nullptr));
        label_10->setText(QCoreApplication::translate("gestion_boutique", "adresse", nullptr));
        label_11->setText(QCoreApplication::translate("gestion_boutique", "nombre d'employees", nullptr));
        label_12->setText(QCoreApplication::translate("gestion_boutique", "horaire", nullptr));
        modifier_boutique->setText(QCoreApplication::translate("gestion_boutique", "Confirmer", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gestion_boutique", "Annuler", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("gestion_boutique", "GroupBox", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gestion_boutique", "Annuler", nullptr));
        supprimer_boutique->setText(QCoreApplication::translate("gestion_boutique", "Confirmer la suppression", nullptr));
        label_13->setText(QCoreApplication::translate("gestion_boutique", "Taper l'identifiant du boutique", nullptr));
        checkBox->setText(QCoreApplication::translate("gestion_boutique", "DSC", nullptr));
        checkBox_2->setText(QCoreApplication::translate("gestion_boutique", "ASC", nullptr));
        label_14->setText(QCoreApplication::translate("gestion_boutique", "trier selon", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("gestion_boutique", "nbr_employees", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("gestion_boutique", "nbr_heure", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("gestion_boutique", "nom_boutique", nullptr));

        tri_boutique->setText(QCoreApplication::translate("gestion_boutique", "TRI", nullptr));
        pushButton_22->setText(QCoreApplication::translate("gestion_boutique", "PDF", nullptr));
        deconnexion2->setText(QCoreApplication::translate("gestion_boutique", "Deconnexion", nullptr));
        home2->setText(QCoreApplication::translate("gestion_boutique", "Home", nullptr));
        label_20->setText(QString());
        label_22->setText(QCoreApplication::translate("gestion_boutique", "COOKIES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_boutique: public Ui_gestion_boutique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_BOUTIQUE_H
