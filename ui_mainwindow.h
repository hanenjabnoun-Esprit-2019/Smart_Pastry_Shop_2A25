/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QGroupBox *groupBox_7;
    QPushButton *ajouter_commande;
    QPushButton *statistique_commande;
    QToolBox *toolBox;
    QWidget *page_12;
    QLineEdit *lineEdit;
    QWidget *page_13;
    QLineEdit *lineEdit_2;
    QWidget *page_14;
    QLineEdit *lineEdit_3;
    QWidget *page_20;
    QLineEdit *lineEdit_7;
    QWidget *page_5;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_11;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QGroupBox *groupBox_9;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *modifier_commande;
    QLineEdit *lineEdit_15;
    QLabel *label_3;
    QWidget *page_6;
    QTableView *tableView_Commandes;
    QLabel *label_4;
    QLineEdit *lineEdit_17;
    QWidget *page_7;
    QGroupBox *groupBox_10;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QPushButton *supprimer_commande;
    QPushButton *pushButton_14;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bar_ajoutC;
    QPushButton *bar_modifC;
    QPushButton *bar_afficheC;
    QPushButton *bar_suppC;
    QPushButton *deconnexion1;
    QPushButton *home1;
    QWidget *page_3;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QStackedWidget *stackedWidget_3;
    QWidget *page_8;
    QGroupBox *groupBox_11;
    QPushButton *ajouter_boutique;
    QPushButton *pushButton_16;
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
    QWidget *page_9;
    QGroupBox *groupBox_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QPushButton *modifier_boutique;
    QPushButton *pushButton_19;
    QLineEdit *spinBox_2;
    QLineEdit *spinBox_4;
    QPushButton *pushButton_17;
    QLineEdit *lineEdit_11;
    QLabel *label_12;
    QWidget *page_10;
    QGroupBox *groupBox_13;
    QLabel *label_17;
    QLineEdit *lineEdit_14;
    QPushButton *supprimer_boutique;
    QPushButton *pushButton_21;
    QWidget *page_11;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_22;
    QLabel *label_18;
    QComboBox *comboBox;
    QTableView *tableView_boutique;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *tri_boutique;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bar_ajoutB;
    QPushButton *bar_modifB;
    QPushButton *bar_affichB;
    QPushButton *bar_suppB;
    QPushButton *deconnexion2;
    QPushButton *home2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1005, 600);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(49, 19, 691, 271));
        groupBox->setAcceptDrops(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(594, 10, 91, 23));
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
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 40, 641, 181));
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QStringLiteral(""));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        groupBox_2->setChecked(false);
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 90, 211, 41));
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
        pushButton_3->setGeometry(QRect(370, 90, 181, 41));
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
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(590, 240, 75, 23));
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
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 751, 321));
        groupBox_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:qlineargradient(spread:pad, x1:0.483045, y1:1, x2:0.483, y2:0, stop:0 rgba(42, 46, 50, 255), stop:1 rgba(72, 79, 86, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	background-color:qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.483, y2:0, stop:0.494318 rgba(42, 46, 50, 255), stop:1 rgba(72, 79, 86, 0));\n"
"}"));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 40, 701, 261));
        stackedWidget_2 = new QStackedWidget(groupBox_4);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 70, 661, 171));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_7 = new QGroupBox(page_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(40, 10, 581, 161));
        ajouter_commande = new QPushButton(groupBox_7);
        ajouter_commande->setObjectName(QStringLiteral("ajouter_commande"));
        ajouter_commande->setGeometry(QRect(490, 110, 75, 23));
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
        statistique_commande = new QPushButton(groupBox_7);
        statistique_commande->setObjectName(QStringLiteral("statistique_commande"));
        statistique_commande->setGeometry(QRect(470, 60, 101, 23));
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
        toolBox = new QToolBox(groupBox_7);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 20, 421, 131));
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
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        page_12->setGeometry(QRect(0, 0, 98, 28));
        lineEdit = new QLineEdit(page_12);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 0, 161, 20));
        lineEdit->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_12, QStringLiteral("Nom de produit"));
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        page_13->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_2 = new QLineEdit(page_13);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 0, 141, 20));
        lineEdit_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_13, QStringLiteral("Nombre de produit"));
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        page_14->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_3 = new QLineEdit(page_14);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 0, 141, 20));
        lineEdit_3->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_14, QStringLiteral("Reference de commande"));
        page_20 = new QWidget();
        page_20->setObjectName(QStringLiteral("page_20"));
        page_20->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_7 = new QLineEdit(page_20);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 0, 113, 20));
        lineEdit_7->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox->addItem(page_20, QStringLiteral("ID de la boutique "));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_8 = new QGroupBox(page_5);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 641, 161));
        pushButton_11 = new QPushButton(groupBox_8);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(370, 20, 91, 23));
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
        lineEdit_4 = new QLineEdit(groupBox_8);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 10, 113, 20));
        lineEdit_4->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 161, 20));
        label_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        groupBox_9 = new QGroupBox(groupBox_8);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setEnabled(true);
        groupBox_9->setGeometry(QRect(20, 40, 611, 121));
        groupBox_9->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox_9);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 101, 16));
        label->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 60, 111, 16));
        label_5->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_5 = new QLineEdit(groupBox_9);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 10, 141, 20));
        lineEdit_5->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_6 = new QLineEdit(groupBox_9);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 50, 131, 20));
        lineEdit_6->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifier_commande = new QPushButton(groupBox_9);
        modifier_commande->setObjectName(QStringLiteral("modifier_commande"));
        modifier_commande->setGeometry(QRect(310, 80, 75, 23));
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
        lineEdit_15 = new QLineEdit(groupBox_9);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(170, 80, 113, 20));
        lineEdit_15->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 91, 16));
        label_3->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        tableView_Commandes = new QTableView(page_6);
        tableView_Commandes->setObjectName(QStringLiteral("tableView_Commandes"));
        tableView_Commandes->setGeometry(QRect(30, 60, 591, 111));
        label_4 = new QLabel(page_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 0, 231, 16));
        label_4->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_17 = new QLineEdit(page_6);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(230, 20, 113, 20));
        lineEdit_17->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_10 = new QGroupBox(page_7);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(20, 20, 621, 151));
        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 30, 201, 16));
        label_7->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(groupBox_10);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(40, 70, 211, 20));
        lineEdit_8->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        supprimer_commande = new QPushButton(groupBox_10);
        supprimer_commande->setObjectName(QStringLiteral("supprimer_commande"));
        supprimer_commande->setGeometry(QRect(200, 120, 161, 23));
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
        pushButton_14 = new QPushButton(groupBox_10);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(480, 110, 75, 23));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_2->addWidget(page_7);
        horizontalLayoutWidget = new QWidget(groupBox_4);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 20, 481, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_3->addWidget(bar_ajoutC);

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

        horizontalLayout_3->addWidget(bar_modifC);

        bar_afficheC = new QPushButton(horizontalLayoutWidget);
        bar_afficheC->setObjectName(QStringLiteral("bar_afficheC"));
        bar_afficheC->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout_3->addWidget(bar_afficheC);

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

        horizontalLayout_3->addWidget(bar_suppC);

        deconnexion1 = new QPushButton(groupBox_3);
        deconnexion1->setObjectName(QStringLiteral("deconnexion1"));
        deconnexion1->setGeometry(QRect(644, 10, 91, 23));
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
        home1 = new QPushButton(groupBox_3);
        home1->setObjectName(QStringLiteral("home1"));
        home1->setGeometry(QRect(570, 10, 75, 23));
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
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_5 = new QGroupBox(page_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(19, 9, 721, 331));
        groupBox_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color:qlineargradient(spread:pad, x1:0.483045, y1:1, x2:0.483, y2:0, stop:0 rgba(42, 46, 50, 255), stop:1 rgba(72, 79, 86, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-radius:0px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	background-color:qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.483, y2:0, stop:0.494318 rgba(42, 46, 50, 255), stop:1 rgba(72, 79, 86, 0));\n"
"}"));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 30, 691, 291));
        stackedWidget_3 = new QStackedWidget(groupBox_6);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(20, 60, 651, 221));
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_11 = new QGroupBox(page_8);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(20, 20, 631, 201));
        ajouter_boutique = new QPushButton(groupBox_11);
        ajouter_boutique->setObjectName(QStringLiteral("ajouter_boutique"));
        ajouter_boutique->setGeometry(QRect(400, 40, 75, 23));
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
        pushButton_16 = new QPushButton(groupBox_11);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(410, 110, 75, 23));
        pushButton_16->setStyleSheet(QLatin1String("QPushButton\n"
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
        toolBox_2 = new QToolBox(groupBox_11);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        toolBox_2->setGeometry(QRect(20, 20, 331, 161));
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
        page_15->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_16 = new QLineEdit(page_15);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(40, 0, 121, 20));
        lineEdit_16->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_15, QStringLiteral("ID_boutique"));
        page_16 = new QWidget();
        page_16->setObjectName(QStringLiteral("page_16"));
        page_16->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_9 = new QLineEdit(page_16);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(20, 0, 141, 20));
        lineEdit_9->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_16, QStringLiteral("nom de boutique"));
        page_17 = new QWidget();
        page_17->setObjectName(QStringLiteral("page_17"));
        page_17->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_10 = new QLineEdit(page_17);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(60, 0, 121, 20));
        lineEdit_10->setStyleSheet(QLatin1String("border: 0px solid #ffffff;\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        toolBox_2->addItem(page_17, QStringLiteral("adresse"));
        page_18 = new QWidget();
        page_18->setObjectName(QStringLiteral("page_18"));
        page_18->setGeometry(QRect(0, 0, 98, 28));
        spinBox = new QLineEdit(page_18);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 0, 113, 20));
        toolBox_2->addItem(page_18, QStringLiteral("Nombre d'employees"));
        page_19 = new QWidget();
        page_19->setObjectName(QStringLiteral("page_19"));
        page_19->setGeometry(QRect(0, 0, 98, 28));
        spinBox_3 = new QLineEdit(page_19);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(30, 0, 113, 20));
        toolBox_2->addItem(page_19, QStringLiteral("Nombre d'heure"));
        stackedWidget_3->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        groupBox_12 = new QGroupBox(page_9);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(20, 50, 621, 161));
        label_13 = new QLabel(groupBox_12);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 20, 91, 16));
        label_13->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(groupBox_12);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 50, 47, 14));
        label_14->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox_12);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 80, 111, 16));
        label_15->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(groupBox_12);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 110, 47, 14));
        label_16->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_12 = new QLineEdit(groupBox_12);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(132, 20, 191, 20));
        lineEdit_12->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_13 = new QLineEdit(groupBox_12);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(110, 50, 113, 20));
        lineEdit_13->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifier_boutique = new QPushButton(groupBox_12);
        modifier_boutique->setObjectName(QStringLiteral("modifier_boutique"));
        modifier_boutique->setGeometry(QRect(400, 30, 75, 23));
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
""));
        pushButton_19 = new QPushButton(groupBox_12);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(400, 90, 75, 23));
        pushButton_19->setStyleSheet(QLatin1String("QPushButton\n"
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
        spinBox_2 = new QLineEdit(groupBox_12);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(140, 80, 113, 20));
        spinBox_4 = new QLineEdit(groupBox_12);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(100, 110, 113, 20));
        pushButton_17 = new QPushButton(page_9);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(280, 10, 75, 23));
        lineEdit_11 = new QLineEdit(page_9);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(120, 10, 131, 20));
        lineEdit_11->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(page_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 10, 91, 20));
        label_12->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_3->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        groupBox_13 = new QGroupBox(page_10);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(30, 20, 601, 171));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 40, 201, 16));
        label_17->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_14 = new QLineEdit(groupBox_13);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(90, 70, 281, 20));
        lineEdit_14->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        supprimer_boutique = new QPushButton(groupBox_13);
        supprimer_boutique->setObjectName(QStringLiteral("supprimer_boutique"));
        supprimer_boutique->setGeometry(QRect(80, 120, 171, 23));
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
""));
        pushButton_21 = new QPushButton(groupBox_13);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(300, 120, 131, 23));
        pushButton_21->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_3->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        groupBox_14 = new QGroupBox(page_11);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(20, 10, 621, 181));
        pushButton_22 = new QPushButton(groupBox_14);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(470, 150, 75, 23));
        label_18 = new QLabel(groupBox_14);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 110, 71, 16));
        label_18->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(groupBox_14);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 130, 81, 21));
        comboBox->setStyleSheet(QLatin1String("QPushButton\n"
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
        tableView_boutique = new QTableView(groupBox_14);
        tableView_boutique->setObjectName(QStringLiteral("tableView_boutique"));
        tableView_boutique->setGeometry(QRect(90, 20, 481, 131));
        checkBox = new QCheckBox(groupBox_14);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 70, 70, 17));
        checkBox_2 = new QCheckBox(groupBox_14);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 90, 70, 17));
        tri_boutique = new QPushButton(groupBox_14);
        tri_boutique->setObjectName(QStringLiteral("tri_boutique"));
        tri_boutique->setGeometry(QRect(90, 150, 75, 23));
        stackedWidget_3->addWidget(page_11);
        horizontalLayoutWidget_2 = new QWidget(groupBox_6);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(110, 20, 411, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout_4->addWidget(bar_ajoutB);

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

        horizontalLayout_4->addWidget(bar_modifB);

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

        horizontalLayout_4->addWidget(bar_affichB);

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

        horizontalLayout_4->addWidget(bar_suppB);

        deconnexion2 = new QPushButton(groupBox_5);
        deconnexion2->setObjectName(QStringLiteral("deconnexion2"));
        deconnexion2->setGeometry(QRect(620, 10, 75, 23));
        home2 = new QPushButton(groupBox_5);
        home2->setObjectName(QStringLiteral("home2"));
        home2->setGeometry(QRect(530, 10, 75, 23));
        stackedWidget->addWidget(page_3);

        horizontalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1005, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(2);
        toolBox->setCurrentIndex(3);
        stackedWidget_3->setCurrentIndex(1);
        toolBox_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "                                                                                    Cookies", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "deconnexion", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "                                                                        gestion commande et boutique ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "gestion commande", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "gestion boutique ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "home", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "                                                                                       Gestion des Commandes ", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "   Commande", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "             PASSER VOTRE COMMANDE", Q_NULLPTR));
        ajouter_commande->setText(QApplication::translate("MainWindow", "ajouter ", Q_NULLPTR));
        statistique_commande->setText(QApplication::translate("MainWindow", "statistique ", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_12), QApplication::translate("MainWindow", "Nom de produit", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_13), QApplication::translate("MainWindow", "Nombre de produit", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_14), QApplication::translate("MainWindow", "Reference de commande", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_20), QApplication::translate("MainWindow", "ID de la boutique ", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Tapper la reference de Commande ", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "chercher ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "taper la rference de commande", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom de produit", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nombre de produit ", Q_NULLPTR));
        modifier_commande->setText(QApplication::translate("MainWindow", "Modifier ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "ID de la boutique", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "taper la refernce de commande pour chercher", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Taper la Reference de commande ", Q_NULLPTR));
        supprimer_commande->setText(QApplication::translate("MainWindow", "confirmer la suppression", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "annuler ", Q_NULLPTR));
        bar_ajoutC->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        bar_modifC->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        bar_afficheC->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        bar_suppC->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        deconnexion1->setText(QApplication::translate("MainWindow", "deconnexion", Q_NULLPTR));
        home1->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "                                                              Gestion des Boutiques ", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Boutique", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Ajouter ", Q_NULLPTR));
        ajouter_boutique->setText(QApplication::translate("MainWindow", "Ajouter ", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "annuler", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_15), QApplication::translate("MainWindow", "ID_boutique", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_16), QApplication::translate("MainWindow", "nom de boutique", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_17), QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_18), QApplication::translate("MainWindow", "Nombre d'employees", Q_NULLPTR));
        toolBox_2->setItemText(toolBox_2->indexOf(page_19), QApplication::translate("MainWindow", "Nombre d'heure", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Nom de boutique ", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Adresse ", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "nombre d'employees", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Horaire ", Q_NULLPTR));
        modifier_boutique->setText(QApplication::translate("MainWindow", "Confirmer ", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "Annuler ", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "chercher ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "taper l'ID", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Supprimer ", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Taper l'identifiant du boutique ", Q_NULLPTR));
        supprimer_boutique->setText(QApplication::translate("MainWindow", "confirmer la suppression", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "Annuler ", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Afficher ", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Trier selon ", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "nbr_employees", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom_boutique", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nbr_heure", Q_NULLPTR)
        );
        checkBox->setText(QApplication::translate("MainWindow", "DSC", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "ASC", Q_NULLPTR));
        tri_boutique->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        bar_ajoutB->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        bar_modifB->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        bar_affichB->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        bar_suppB->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        deconnexion2->setText(QApplication::translate("MainWindow", "deconnexion", Q_NULLPTR));
        home2->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
