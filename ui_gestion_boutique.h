/********************************************************************************
** Form generated from reading UI file 'gestion_boutique.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_BOUTIQUE_H
#define UI_GESTION_BOUTIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
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
    QPushButton *home1;
    QPushButton *deconnexion1;
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
    QPushButton *supprimer_boutique;
    QLabel *label_13;
    QGroupBox *groupBox_7;
    QLineEdit *lineEdit_14;
    QPushButton *pushButton_7;
    QWidget *page_21;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_14;
    QComboBox *comboBox;
    QPushButton *tri_boutique;
    QPushButton *pushButton_22;
    QTableView *tableView_boutique;
    QPushButton *home2;
    QPushButton *deconnexion2;
    QWidget *page_2;

    void setupUi(QDialog *gestion_boutique)
    {
        if (gestion_boutique->objectName().isEmpty())
            gestion_boutique->setObjectName(QStringLiteral("gestion_boutique"));
        gestion_boutique->resize(970, 473);
        gestion_boutique->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 0);"));
        stackedWidget = new QStackedWidget(gestion_boutique);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(49, 29, 871, 391));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(69, 39, 771, 321));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(49, 49, 691, 231));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 100, 201, 41));
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
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 100, 181, 41));
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
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(624, 22, 101, 21));
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
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(640, 290, 91, 21));
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
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(79, 29, 751, 331));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 50, 681, 251));
        horizontalLayoutWidget = new QWidget(groupBox_4);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 20, 491, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bar_ajoutC = new QPushButton(horizontalLayoutWidget);
        bar_ajoutC->setObjectName(QStringLiteral("bar_ajoutC"));
        bar_ajoutC->setStyleSheet(QLatin1String("QPushButton\n"
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
        bar_modifC->setObjectName(QStringLiteral("bar_modifC"));
        bar_modifC->setStyleSheet(QLatin1String("QPushButton\n"
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
        bar_affichC->setObjectName(QStringLiteral("bar_affichC"));
        bar_affichC->setStyleSheet(QLatin1String("QPushButton\n"
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
        bar_suppC->setObjectName(QStringLiteral("bar_suppC"));
        bar_suppC->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(29, 59, 631, 171));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        toolBox = new QToolBox(page_5);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(110, 40, 391, 123));
        toolBox->setStyleSheet(QLatin1String("QToolBox::tab\n"
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
        page_7->setObjectName(QStringLiteral("page_7"));
        page_7->setGeometry(QRect(0, 0, 100, 30));
        lineEdit = new QLineEdit(page_7);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 0, 113, 20));
        lineEdit->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_7, QStringLiteral("Nom de produit "));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        page_8->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_2 = new QLineEdit(page_8);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 0, 113, 20));
        lineEdit_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_8, QStringLiteral("Nombre de produit "));
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        page_9->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_3 = new QLineEdit(page_9);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 0, 113, 20));
        lineEdit_3->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_9, QStringLiteral("Reference de commande "));
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        page_10->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_7 = new QLineEdit(page_10);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(30, 0, 113, 20));
        lineEdit_7->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_10, QStringLiteral("ID de la boutique"));
        label = new QLabel(page_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 171, 20));
        statistique_commande = new QPushButton(page_5);
        statistique_commande->setObjectName(QStringLiteral("statistique_commande"));
        statistique_commande->setGeometry(QRect(520, 60, 101, 23));
        statistique_commande->setStyleSheet(QLatin1String("QPushButton\n"
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
        ajouter_commande = new QPushButton(page_5);
        ajouter_commande->setObjectName(QStringLiteral("ajouter_commande"));
        ajouter_commande->setGeometry(QRect(530, 110, 75, 23));
        ajouter_commande->setStyleSheet(QLatin1String("QPushButton\n"
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
        page_6->setObjectName(QStringLiteral("page_6"));
        label_2 = new QLabel(page_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 171, 16));
        label_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(page_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 91, 16));
        label_3->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(page_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 100, 121, 16));
        label_4->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(page_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 140, 101, 16));
        label_5->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(page_6);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(220, 20, 161, 20));
        lineEdit_4->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_5 = new QLineEdit(page_6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 60, 141, 20));
        lineEdit_5->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(page_6);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(200, 100, 113, 20));
        lineEdit_6->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_15 = new QLineEdit(page_6);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(200, 140, 113, 20));
        lineEdit_15->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifier_commande = new QPushButton(page_6);
        modifier_commande->setObjectName(QStringLiteral("modifier_commande"));
        modifier_commande->setGeometry(QRect(460, 110, 75, 23));
        modifier_commande->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_2->addWidget(page_6);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        label_6 = new QLabel(page_11);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 10, 211, 16));
        label_6->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        tableView_Commandes = new QTableView(page_11);
        tableView_Commandes->setObjectName(QStringLiteral("tableView_Commandes"));
        tableView_Commandes->setGeometry(QRect(40, 60, 451, 101));
        lineEdit_17 = new QLineEdit(page_11);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(270, 30, 113, 20));
        lineEdit_17->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        lineEdit_8 = new QLineEdit(page_12);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(170, 80, 141, 20));
        lineEdit_8->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(page_12);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 30, 171, 16));
        label_7->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        supprimer_commande = new QPushButton(page_12);
        supprimer_commande->setObjectName(QStringLiteral("supprimer_commande"));
        supprimer_commande->setGeometry(QRect(210, 130, 171, 23));
        supprimer_commande->setStyleSheet(QLatin1String("QPushButton\n"
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
        home1 = new QPushButton(groupBox_3);
        home1->setObjectName(QStringLiteral("home1"));
        home1->setGeometry(QRect(540, 20, 91, 23));
        home1->setStyleSheet(QLatin1String("QPushButton\n"
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
        deconnexion1 = new QPushButton(groupBox_3);
        deconnexion1->setObjectName(QStringLiteral("deconnexion1"));
        deconnexion1->setGeometry(QRect(630, 20, 101, 23));
        deconnexion1->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 20, 841, 341));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 40, 791, 281));
        horizontalLayoutWidget_2 = new QWidget(groupBox_6);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(70, 20, 601, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bar_ajoutB = new QPushButton(horizontalLayoutWidget_2);
        bar_ajoutB->setObjectName(QStringLiteral("bar_ajoutB"));
        bar_ajoutB->setStyleSheet(QLatin1String("QPushButton\n"
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
        bar_modifB->setObjectName(QStringLiteral("bar_modifB"));
        bar_modifB->setStyleSheet(QLatin1String("QPushButton\n"
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
        bar_affichB->setObjectName(QStringLiteral("bar_affichB"));
        bar_affichB->setStyleSheet(QLatin1String("QPushButton\n"
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
        bar_suppB->setObjectName(QStringLiteral("bar_suppB"));
        bar_suppB->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(19, 79, 751, 181));
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        toolBox_2 = new QToolBox(page_13);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setGeometry(QRect(70, 10, 341, 161));
        toolBox_2->setStyleSheet(QLatin1String("QToolBox::tab\n"
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
        page_15->setObjectName(QStringLiteral("page_15"));
        page_15->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_16 = new QLineEdit(page_15);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(70, 0, 171, 20));
        lineEdit_16->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_15, QStringLiteral("ID_boutique"));
        page_16 = new QWidget();
        page_16->setObjectName(QStringLiteral("page_16"));
        page_16->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_9 = new QLineEdit(page_16);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(90, 0, 141, 20));
        lineEdit_9->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_16, QStringLiteral("nom de boutique"));
        page_17 = new QWidget();
        page_17->setObjectName(QStringLiteral("page_17"));
        page_17->setGeometry(QRect(0, 0, 100, 30));
        lineEdit_10 = new QLineEdit(page_17);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(90, 0, 151, 20));
        lineEdit_10->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_17, QStringLiteral("adresse"));
        page_18 = new QWidget();
        page_18->setObjectName(QStringLiteral("page_18"));
        page_18->setGeometry(QRect(0, 0, 100, 30));
        spinBox = new QLineEdit(page_18);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(100, 0, 131, 20));
        spinBox->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_18, QStringLiteral("nombre d'employees"));
        page_19 = new QWidget();
        page_19->setObjectName(QStringLiteral("page_19"));
        page_19->setGeometry(QRect(0, 0, 100, 30));
        spinBox_3 = new QLineEdit(page_19);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(70, 0, 151, 20));
        spinBox_3->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_19, QStringLiteral("nombre d'heure"));
        ajouter_boutique = new QPushButton(page_13);
        ajouter_boutique->setObjectName(QStringLiteral("ajouter_boutique"));
        ajouter_boutique->setGeometry(QRect(570, 70, 81, 21));
        ajouter_boutique->setStyleSheet(QLatin1String("QPushButton\n"
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
        page_14->setObjectName(QStringLiteral("page_14"));
        label_8 = new QLabel(page_14);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 10, 61, 16));
        label_8->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(page_14);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 50, 91, 16));
        label_9->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(page_14);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 90, 61, 16));
        label_10->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(page_14);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 120, 111, 16));
        label_11->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(page_14);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 160, 47, 13));
        label_12->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_11 = new QLineEdit(page_14);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(160, 0, 113, 20));
        lineEdit_11->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(page_14);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(140, 40, 113, 20));
        lineEdit_12->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_13 = new QLineEdit(page_14);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(120, 80, 113, 20));
        lineEdit_13->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        spinBox_2 = new QLineEdit(page_14);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(160, 120, 113, 20));
        spinBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        spinBox_4 = new QLineEdit(page_14);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(90, 150, 113, 20));
        spinBox_4->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifier_boutique = new QPushButton(page_14);
        modifier_boutique->setObjectName(QStringLiteral("modifier_boutique"));
        modifier_boutique->setGeometry(QRect(440, 40, 75, 23));
        modifier_boutique->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 110, 75, 23));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
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
        page_20->setObjectName(QStringLiteral("page_20"));
        supprimer_boutique = new QPushButton(page_20);
        supprimer_boutique->setObjectName(QStringLiteral("supprimer_boutique"));
        supprimer_boutique->setGeometry(QRect(114, 130, 151, 23));
        supprimer_boutique->setStyleSheet(QLatin1String("QPushButton\n"
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
        label_13 = new QLabel(page_20);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 40, 171, 16));
        label_13->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        groupBox_7 = new QGroupBox(page_20);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(19, 19, 661, 151));
        lineEdit_14 = new QLineEdit(groupBox_7);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(210, 60, 201, 20));
        lineEdit_14->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_7 = new QPushButton(groupBox_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 110, 131, 23));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_3->addWidget(page_20);
        groupBox_7->raise();
        supprimer_boutique->raise();
        label_13->raise();
        page_21 = new QWidget();
        page_21->setObjectName(QStringLiteral("page_21"));
        checkBox = new QCheckBox(page_21);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(0, 70, 70, 17));
        checkBox_2 = new QCheckBox(page_21);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 90, 70, 17));
        label_14 = new QLabel(page_21);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 120, 61, 16));
        label_14->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(page_21);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 150, 69, 22));
        tri_boutique = new QPushButton(page_21);
        tri_boutique->setObjectName(QStringLiteral("tri_boutique"));
        tri_boutique->setGeometry(QRect(120, 160, 75, 23));
        tri_boutique->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(360, 160, 75, 23));
        pushButton_22->setStyleSheet(QLatin1String("QPushButton\n"
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
        tableView_boutique->setObjectName(QStringLiteral("tableView_boutique"));
        tableView_boutique->setGeometry(QRect(170, 30, 501, 101));
        stackedWidget_3->addWidget(page_21);
        home2 = new QPushButton(groupBox_5);
        home2->setObjectName(QStringLiteral("home2"));
        home2->setGeometry(QRect(650, 20, 75, 23));
        home2->setStyleSheet(QLatin1String("QPushButton\n"
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
        deconnexion2 = new QPushButton(groupBox_5);
        deconnexion2->setObjectName(QStringLiteral("deconnexion2"));
        deconnexion2->setGeometry(QRect(724, 20, 91, 23));
        deconnexion2->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(gestion_boutique);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(1);
        toolBox->setCurrentIndex(3);
        stackedWidget_3->setCurrentIndex(3);
        toolBox_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(gestion_boutique);
    } // setupUi

    void retranslateUi(QDialog *gestion_boutique)
    {
        gestion_boutique->setWindowTitle(QApplication::translate("gestion_boutique", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestion_boutique", "                         cookies ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("gestion_boutique", "                                         Gestion Commande et boutique ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_boutique", "Gestion Commande", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_boutique", "Gestion Boutique ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_boutique", "Deconnexion", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gestion_boutique", "Home", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gestion_boutique", "               Gestion des commande", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("gestion_boutique", "Commande", Q_NULLPTR));
        bar_ajoutC->setText(QApplication::translate("gestion_boutique", "Ajouter", Q_NULLPTR));
        bar_modifC->setText(QApplication::translate("gestion_boutique", "Modifier", Q_NULLPTR));
        bar_affichC->setText(QApplication::translate("gestion_boutique", "afficher", Q_NULLPTR));
        bar_suppC->setText(QApplication::translate("gestion_boutique", "supprimer", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("gestion_boutique", "Nom de produit ", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_8), QApplication::translate("gestion_boutique", "Nombre de produit ", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_9), QApplication::translate("gestion_boutique", "Reference de commande ", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_10), QApplication::translate("gestion_boutique", "ID de la boutique", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_boutique", "PASSER VOTRE COMMANDE ", Q_NULLPTR));
        statistique_commande->setText(QApplication::translate("gestion_boutique", "statistique ", Q_NULLPTR));
        ajouter_commande->setText(QApplication::translate("gestion_boutique", "ajouter ", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_boutique", "taper la reference de commande", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_boutique", "nom de produit", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_boutique", "nombre de produit ", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_boutique", "ID de la boutique ", Q_NULLPTR));
        modifier_commande->setText(QApplication::translate("gestion_boutique", "Modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_boutique", "Taper la reference pour chercher ", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_boutique", "Taoer la reference de Commande", Q_NULLPTR));
        supprimer_commande->setText(QApplication::translate("gestion_boutique", "Confirmer la suppression", Q_NULLPTR));
        home1->setText(QApplication::translate("gestion_boutique", "Home", Q_NULLPTR));
        deconnexion1->setText(QApplication::translate("gestion_boutique", "Deconnexion", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("gestion_boutique", "Gestion des boutique ", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("gestion_boutique", "Boutique ", Q_NULLPTR));
        bar_ajoutB->setText(QApplication::translate("gestion_boutique", "Ajouter ", Q_NULLPTR));
        bar_modifB->setText(QApplication::translate("gestion_boutique", "Modifier ", Q_NULLPTR));
        bar_affichB->setText(QApplication::translate("gestion_boutique", "Afficher", Q_NULLPTR));
        bar_suppB->setText(QApplication::translate("gestion_boutique", "Supprimer", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_15), QApplication::translate("gestion_boutique", "ID_boutique", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_16), QApplication::translate("gestion_boutique", "nom de boutique", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_17), QApplication::translate("gestion_boutique", "adresse", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_18), QApplication::translate("gestion_boutique", "nombre d'employees", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_19), QApplication::translate("gestion_boutique", "nombre d'heure", Q_NULLPTR));
        ajouter_boutique->setText(QApplication::translate("gestion_boutique", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_boutique", "taper l'ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_boutique", "Nom de boutique", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_boutique", "adresse", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_boutique", "nombre d'employees", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_boutique", "horaire", Q_NULLPTR));
        modifier_boutique->setText(QApplication::translate("gestion_boutique", "Confirmer", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("gestion_boutique", "Annuler", Q_NULLPTR));
        supprimer_boutique->setText(QApplication::translate("gestion_boutique", "Confirmer la suppression", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_boutique", "Taper l'identifiant du boutique", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("gestion_boutique", "GroupBox", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("gestion_boutique", "Annuler", Q_NULLPTR));
        checkBox->setText(QApplication::translate("gestion_boutique", "DSC", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("gestion_boutique", "ASC", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_boutique", "trier selon", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("gestion_boutique", "nbr_employees", Q_NULLPTR)
         << QApplication::translate("gestion_boutique", "nbr_heure", Q_NULLPTR)
         << QApplication::translate("gestion_boutique", "nom_boutique", Q_NULLPTR)
        );
        tri_boutique->setText(QApplication::translate("gestion_boutique", "TRI", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("gestion_boutique", "PDF", Q_NULLPTR));
        home2->setText(QApplication::translate("gestion_boutique", "Home", Q_NULLPTR));
        deconnexion2->setText(QApplication::translate("gestion_boutique", "Deconnexion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_boutique: public Ui_gestion_boutique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_BOUTIQUE_H
