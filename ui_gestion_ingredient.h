/********************************************************************************
** Form generated from reading UI file 'gestion_ingredient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_INGREDIENT_H
#define UI_GESTION_INGREDIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_ingredient
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QFrame *frame;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *addemploye_2;
    QPushButton *employeelist_2;
    QPushButton *pushButton_8;
    QPushButton *reportemploye_2;
    QStackedWidget *stackedWidget_3;
    QWidget *page_8;
    QPushButton *ajouter_i;
    QLineEdit *id_2;
    QLineEdit *quantite_2;
    QLineEdit *description_2;
    QLineEdit *idi;
    QLineEdit *nomi;
    QLineEdit *qti;
    QWidget *page_9;
    QTableView *tab_ingredient;
    QPushButton *pdf;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QWidget *page_10;
    QPushButton *modifier_i;
    QLineEdit *BillProviderNameEdit_3;
    QLineEdit *BillProviderNameEdit_5;
    QLineEdit *BillProviderNameEdit_6;
    QLineEdit *qt_m;
    QLineEdit *nom_m;
    QLineEdit *id_m;
    QWidget *page_11;
    QPushButton *supprimer_i;
    QPushButton *recherche_2;
    QListView *listView_2;
    QLineEdit *ig_d;
    QPushButton *pushButton_5;
    QWidget *page_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *addemploye;
    QPushButton *employeelist;
    QPushButton *pushButton_4;
    QPushButton *reportemploye;
    QPushButton *ajouteremploye_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QPushButton *ajouter_produit;
    QLineEdit *id;
    QLineEdit *quantite;
    QLineEdit *description;
    QLineEdit *nom;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_quantite;
    QLineEdit *lineEdit_description;
    QLineEdit *lineEdit_nom;
    QWidget *page_5;
    QTableView *tabproduit;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_9;
    QWidget *page_6;
    QLineEdit *lineEdit_quantite2;
    QLineEdit *lineEdit_name;
    QPushButton *modifierProduit;
    QLineEdit *BillProviderNameEdit_2;
    QLineEdit *BillProviderNameEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *page_7;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_IDs;
    QLabel *label_3;
    QPushButton *pushButton_6;

    void setupUi(QDialog *gestion_ingredient)
    {
        if (gestion_ingredient->objectName().isEmpty())
            gestion_ingredient->setObjectName(QStringLiteral("gestion_ingredient"));
        gestion_ingredient->resize(885, 504);
        stackedWidget = new QStackedWidget(gestion_ingredient);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 10, 781, 451));
        stackedWidget->setStyleSheet(QLatin1String("QPushButton\n"
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
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame_2 = new QFrame(page);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 20, 721, 411));
        frame_2->setStyleSheet(QStringLiteral(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 110, 421, 51));
        pushButton->setStyleSheet(QLatin1String("margin-top:0px;\n"
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
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 210, 421, 51));
        pushButton_2->setStyleSheet(QLatin1String("margin-top:0px;\n"
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
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame = new QFrame(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 711, 431));
        frame->setStyleSheet(QLatin1String("margin-top:0px;\n"
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
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(-10, 10, 721, 41));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        addemploye_2 = new QPushButton(layoutWidget_2);
        addemploye_2->setObjectName(QStringLiteral("addemploye_2"));
        addemploye_2->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout_2->addWidget(addemploye_2, 0, 0, 1, 1);

        employeelist_2 = new QPushButton(layoutWidget_2);
        employeelist_2->setObjectName(QStringLiteral("employeelist_2"));
        employeelist_2->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout_2->addWidget(employeelist_2, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout_2->addWidget(pushButton_8, 0, 2, 1, 1);

        reportemploye_2 = new QPushButton(layoutWidget_2);
        reportemploye_2->setObjectName(QStringLiteral("reportemploye_2"));
        reportemploye_2->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout_2->addWidget(reportemploye_2, 0, 1, 1, 1);

        stackedWidget_3 = new QStackedWidget(frame);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(0, 60, 711, 341));
        stackedWidget_3->setStyleSheet(QLatin1String("margin-top:0px;\n"
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
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        ajouter_i = new QPushButton(page_8);
        ajouter_i->setObjectName(QStringLiteral("ajouter_i"));
        ajouter_i->setGeometry(QRect(520, 270, 181, 31));
        ajouter_i->setMinimumSize(QSize(151, 0));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        ajouter_i->setFont(font);
        ajouter_i->setStyleSheet(QLatin1String("QPushButton\n"
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
        id_2 = new QLineEdit(page_8);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(20, 40, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        id_2->setFont(font1);
        id_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        quantite_2 = new QLineEdit(page_8);
        quantite_2->setObjectName(QStringLiteral("quantite_2"));
        quantite_2->setGeometry(QRect(20, 90, 101, 21));
        quantite_2->setFont(font1);
        quantite_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        description_2 = new QLineEdit(page_8);
        description_2->setObjectName(QStringLiteral("description_2"));
        description_2->setGeometry(QRect(20, 140, 101, 21));
        description_2->setFont(font1);
        description_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        idi = new QLineEdit(page_8);
        idi->setObjectName(QStringLiteral("idi"));
        idi->setGeometry(QRect(180, 40, 171, 20));
        nomi = new QLineEdit(page_8);
        nomi->setObjectName(QStringLiteral("nomi"));
        nomi->setGeometry(QRect(180, 100, 171, 20));
        qti = new QLineEdit(page_8);
        qti->setObjectName(QStringLiteral("qti"));
        qti->setGeometry(QRect(180, 150, 171, 20));
        stackedWidget_3->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        tab_ingredient = new QTableView(page_9);
        tab_ingredient->setObjectName(QStringLiteral("tab_ingredient"));
        tab_ingredient->setGeometry(QRect(30, 20, 521, 301));
        tab_ingredient->setStyleSheet(QLatin1String("QTableView{\n"
"background:rgb(231, 231, 231);\n"
"}"));
        pdf = new QPushButton(page_9);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(580, 40, 75, 23));
        lineEdit_3 = new QLineEdit(page_9);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(580, 140, 113, 20));
        label_4 = new QLabel(page_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(590, 110, 71, 16));
        label_4->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_3->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        modifier_i = new QPushButton(page_10);
        modifier_i->setObjectName(QStringLiteral("modifier_i"));
        modifier_i->setGeometry(QRect(530, 310, 181, 31));
        modifier_i->setMinimumSize(QSize(151, 0));
        modifier_i->setFont(font);
        modifier_i->setStyleSheet(QLatin1String("QPushButton\n"
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
        BillProviderNameEdit_3 = new QLineEdit(page_10);
        BillProviderNameEdit_3->setObjectName(QStringLiteral("BillProviderNameEdit_3"));
        BillProviderNameEdit_3->setGeometry(QRect(20, 80, 101, 21));
        BillProviderNameEdit_3->setFont(font1);
        BillProviderNameEdit_3->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        BillProviderNameEdit_5 = new QLineEdit(page_10);
        BillProviderNameEdit_5->setObjectName(QStringLiteral("BillProviderNameEdit_5"));
        BillProviderNameEdit_5->setGeometry(QRect(20, 150, 101, 21));
        BillProviderNameEdit_5->setFont(font1);
        BillProviderNameEdit_5->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        BillProviderNameEdit_6 = new QLineEdit(page_10);
        BillProviderNameEdit_6->setObjectName(QStringLiteral("BillProviderNameEdit_6"));
        BillProviderNameEdit_6->setGeometry(QRect(20, 30, 101, 21));
        BillProviderNameEdit_6->setFont(font1);
        BillProviderNameEdit_6->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        qt_m = new QLineEdit(page_10);
        qt_m->setObjectName(QStringLiteral("qt_m"));
        qt_m->setGeometry(QRect(260, 150, 171, 20));
        nom_m = new QLineEdit(page_10);
        nom_m->setObjectName(QStringLiteral("nom_m"));
        nom_m->setGeometry(QRect(260, 90, 171, 20));
        id_m = new QLineEdit(page_10);
        id_m->setObjectName(QStringLiteral("id_m"));
        id_m->setGeometry(QRect(260, 30, 171, 20));
        stackedWidget_3->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        supprimer_i = new QPushButton(page_11);
        supprimer_i->setObjectName(QStringLiteral("supprimer_i"));
        supprimer_i->setGeometry(QRect(554, 300, 161, 31));
        supprimer_i->setStyleSheet(QLatin1String("QPushButton\n"
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
        recherche_2 = new QPushButton(page_11);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(30, 10, 211, 32));
        listView_2 = new QListView(page_11);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(0, 50, 491, 291));
        ig_d = new QLineEdit(page_11);
        ig_d->setObjectName(QStringLiteral("ig_d"));
        ig_d->setGeometry(QRect(310, 10, 381, 31));
        stackedWidget_3->addWidget(page_11);
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 0, 141, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        layoutWidget = new QWidget(page_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 27, 721, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addemploye = new QPushButton(layoutWidget);
        addemploye->setObjectName(QStringLiteral("addemploye"));
        addemploye->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(addemploye, 0, 0, 1, 1);

        employeelist = new QPushButton(layoutWidget);
        employeelist->setObjectName(QStringLiteral("employeelist"));
        employeelist->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(employeelist, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
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

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        reportemploye = new QPushButton(layoutWidget);
        reportemploye->setObjectName(QStringLiteral("reportemploye"));
        reportemploye->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(reportemploye, 0, 1, 1, 1);

        ajouteremploye_2 = new QPushButton(page_3);
        ajouteremploye_2->setObjectName(QStringLiteral("ajouteremploye_2"));
        ajouteremploye_2->setGeometry(QRect(970, 600, 181, 31));
        ajouteremploye_2->setMinimumSize(QSize(151, 0));
        ajouteremploye_2->setFont(font);
        ajouteremploye_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        stackedWidget_2 = new QStackedWidget(page_3);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 70, 721, 341));
        stackedWidget_2->setStyleSheet(QLatin1String("margin-top:0px;\n"
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
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        ajouter_produit = new QPushButton(page_4);
        ajouter_produit->setObjectName(QStringLiteral("ajouter_produit"));
        ajouter_produit->setGeometry(QRect(530, 310, 181, 31));
        ajouter_produit->setMinimumSize(QSize(151, 0));
        ajouter_produit->setFont(font);
        ajouter_produit->setStyleSheet(QLatin1String("QPushButton\n"
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
        id = new QLineEdit(page_4);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(20, 40, 101, 21));
        id->setFont(font1);
        id->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        quantite = new QLineEdit(page_4);
        quantite->setObjectName(QStringLiteral("quantite"));
        quantite->setGeometry(QRect(20, 90, 101, 21));
        quantite->setFont(font1);
        quantite->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        description = new QLineEdit(page_4);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(20, 140, 101, 21));
        description->setFont(font1);
        description->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        nom = new QLineEdit(page_4);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(20, 190, 101, 21));
        nom->setFont(font1);
        nom->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_id = new QLineEdit(page_4);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(180, 40, 171, 20));
        lineEdit_quantite = new QLineEdit(page_4);
        lineEdit_quantite->setObjectName(QStringLiteral("lineEdit_quantite"));
        lineEdit_quantite->setGeometry(QRect(180, 100, 171, 20));
        lineEdit_description = new QLineEdit(page_4);
        lineEdit_description->setObjectName(QStringLiteral("lineEdit_description"));
        lineEdit_description->setGeometry(QRect(180, 150, 171, 20));
        lineEdit_nom = new QLineEdit(page_4);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(180, 190, 171, 20));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tabproduit = new QTableView(page_5);
        tabproduit->setObjectName(QStringLiteral("tabproduit"));
        tabproduit->setGeometry(QRect(30, 20, 541, 301));
        tabproduit->setStyleSheet(QLatin1String("QTableView{\n"
"background:rgb(231, 231, 231);\n"
"}"));
        comboBox = new QComboBox(page_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(610, 80, 62, 22));
        checkBox = new QCheckBox(page_5);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(610, 150, 70, 18));
        checkBox_2 = new QCheckBox(page_5);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(610, 180, 70, 18));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(600, 230, 75, 23));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        lineEdit_quantite2 = new QLineEdit(page_6);
        lineEdit_quantite2->setObjectName(QStringLiteral("lineEdit_quantite2"));
        lineEdit_quantite2->setGeometry(QRect(170, 180, 221, 31));
        lineEdit_quantite2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_name = new QLineEdit(page_6);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(150, 50, 221, 16));
        lineEdit_name->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        modifierProduit = new QPushButton(page_6);
        modifierProduit->setObjectName(QStringLiteral("modifierProduit"));
        modifierProduit->setGeometry(QRect(530, 310, 181, 31));
        modifierProduit->setMinimumSize(QSize(151, 0));
        modifierProduit->setFont(font);
        modifierProduit->setStyleSheet(QLatin1String("QPushButton\n"
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
        BillProviderNameEdit_2 = new QLineEdit(page_6);
        BillProviderNameEdit_2->setObjectName(QStringLiteral("BillProviderNameEdit_2"));
        BillProviderNameEdit_2->setGeometry(QRect(10, 40, 101, 21));
        BillProviderNameEdit_2->setFont(font1);
        BillProviderNameEdit_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        BillProviderNameEdit_4 = new QLineEdit(page_6);
        BillProviderNameEdit_4->setObjectName(QStringLiteral("BillProviderNameEdit_4"));
        BillProviderNameEdit_4->setGeometry(QRect(20, 190, 101, 21));
        BillProviderNameEdit_4->setFont(font1);
        BillProviderNameEdit_4->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(page_6);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 280, 47, 21));
        label->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(page_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 81, 16));
        label_2->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(page_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 280, 113, 20));
        lineEdit->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(page_6);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 100, 113, 20));
        lineEdit_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        pushButton_7 = new QPushButton(page_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(554, 300, 161, 31));
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
        lineEdit_IDs = new QLineEdit(page_7);
        lineEdit_IDs->setObjectName(QStringLiteral("lineEdit_IDs"));
        lineEdit_IDs->setGeometry(QRect(90, 140, 381, 31));
        label_3 = new QLabel(page_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 40, 111, 16));
        label_3->setStyleSheet(QLatin1String("border: 0px solid rgb(249, 167, 43);\n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page_7);
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 0, 121, 23));
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
        stackedWidget->addWidget(page_3);

        retranslateUi(gestion_ingredient);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_ingredient);
    } // setupUi

    void retranslateUi(QDialog *gestion_ingredient)
    {
        gestion_ingredient->setWindowTitle(QApplication::translate("gestion_ingredient", "Dialog", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        stackedWidget->setWhatsThis(QApplication::translate("gestion_ingredient", "margin-top:0px;\n"
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
"}", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        frame_2->setToolTip(QApplication::translate("gestion_ingredient", "margin-top:0px;\n"
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
"}", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("gestion_ingredient", "gs engredient", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_ingredient", "gs produit", Q_NULLPTR));
        addemploye_2->setText(QApplication::translate("gestion_ingredient", "Ajouter ingredient", Q_NULLPTR));
        employeelist_2->setText(QApplication::translate("gestion_ingredient", "Delete ingredient", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("gestion_ingredient", "modifier un ingredient", Q_NULLPTR));
        reportemploye_2->setText(QApplication::translate("gestion_ingredient", "Liste ingredient", Q_NULLPTR));
        ajouter_i->setText(QApplication::translate("gestion_ingredient", "Ajouter", Q_NULLPTR));
        id_2->setInputMask(QString());
        id_2->setText(QApplication::translate("gestion_ingredient", "ID_ingredient", Q_NULLPTR));
        id_2->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        quantite_2->setInputMask(QString());
        quantite_2->setText(QApplication::translate("gestion_ingredient", "Nom", Q_NULLPTR));
        quantite_2->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        description_2->setInputMask(QString());
        description_2->setText(QApplication::translate("gestion_ingredient", "Quantite", Q_NULLPTR));
        description_2->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        pdf->setText(QApplication::translate("gestion_ingredient", "PDF", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_ingredient", "chercher", Q_NULLPTR));
        modifier_i->setText(QApplication::translate("gestion_ingredient", "Modifier", Q_NULLPTR));
        BillProviderNameEdit_3->setInputMask(QString());
        BillProviderNameEdit_3->setText(QApplication::translate("gestion_ingredient", "nom", Q_NULLPTR));
        BillProviderNameEdit_3->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        BillProviderNameEdit_5->setInputMask(QString());
        BillProviderNameEdit_5->setText(QApplication::translate("gestion_ingredient", "Quantit\303\251", Q_NULLPTR));
        BillProviderNameEdit_5->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        BillProviderNameEdit_6->setInputMask(QString());
        BillProviderNameEdit_6->setText(QApplication::translate("gestion_ingredient", "Id_ingredient", Q_NULLPTR));
        BillProviderNameEdit_6->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        supprimer_i->setText(QApplication::translate("gestion_ingredient", "Supprimer", Q_NULLPTR));
        recherche_2->setText(QApplication::translate("gestion_ingredient", "ingredient a supprimer", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gestion_ingredient", "Retour", Q_NULLPTR));
        addemploye->setText(QApplication::translate("gestion_ingredient", "Ajouter Produit", Q_NULLPTR));
        employeelist->setText(QApplication::translate("gestion_ingredient", "Delete Produit", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gestion_ingredient", "modifier un produit", Q_NULLPTR));
        reportemploye->setText(QApplication::translate("gestion_ingredient", "Liste Produit", Q_NULLPTR));
        ajouteremploye_2->setText(QApplication::translate("gestion_ingredient", "Ajouter", Q_NULLPTR));
        ajouter_produit->setText(QApplication::translate("gestion_ingredient", "Ajouter", Q_NULLPTR));
        id->setInputMask(QString());
        id->setText(QApplication::translate("gestion_ingredient", "ID", Q_NULLPTR));
        id->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        quantite->setInputMask(QString());
        quantite->setText(QApplication::translate("gestion_ingredient", "Quantit\303\251", Q_NULLPTR));
        quantite->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        description->setInputMask(QString());
        description->setText(QApplication::translate("gestion_ingredient", "Description", Q_NULLPTR));
        description->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        nom->setInputMask(QString());
        nom->setText(QApplication::translate("gestion_ingredient", "Nom", Q_NULLPTR));
        nom->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("gestion_ingredient", "nom", Q_NULLPTR)
         << QApplication::translate("gestion_ingredient", "description", Q_NULLPTR)
         << QApplication::translate("gestion_ingredient", "quantite", Q_NULLPTR)
         << QApplication::translate("gestion_ingredient", "id", Q_NULLPTR)
        );
        checkBox->setText(QApplication::translate("gestion_ingredient", "DSC", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("gestion_ingredient", "ASC", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("gestion_ingredient", "TRIER", Q_NULLPTR));
        lineEdit_quantite2->setText(QString());
        lineEdit_name->setText(QString());
        modifierProduit->setText(QApplication::translate("gestion_ingredient", "Modifier", Q_NULLPTR));
        BillProviderNameEdit_2->setInputMask(QString());
        BillProviderNameEdit_2->setText(QApplication::translate("gestion_ingredient", "nom", Q_NULLPTR));
        BillProviderNameEdit_2->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        BillProviderNameEdit_4->setInputMask(QString());
        BillProviderNameEdit_4->setText(QApplication::translate("gestion_ingredient", "Quantit\303\251", Q_NULLPTR));
        BillProviderNameEdit_4->setPlaceholderText(QApplication::translate("gestion_ingredient", "Name", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_ingredient", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_ingredient", "DESCRIPTION", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("gestion_ingredient", "Supprimer", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_ingredient", "taper l'ID", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("gestion_ingredient", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_ingredient: public Ui_gestion_ingredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_INGREDIENT_H
