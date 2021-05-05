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
#include <QtWidgets/QFrame>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *winStack;
    QWidget *Login;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *regButton;
    QLabel *label_3;
    QWidget *page_2;
    QFrame *frame;
    QLabel *label_4;
    QLineEdit *uBox;
    QLineEdit *pBox;
    QLineEdit *eBox;
    QLineEdit *fBox;
    QLineEdit *mBox;
    QLineEdit *lBoxb;
    QPushButton *backButton2;
    QPushButton *completeRegButton;
    QPushButton *uplButton;
    QLabel *regLabel;
    QLabel *rpLabel;
    QWidget *page;
    QFrame *frame_3;
    QPushButton *adminButton;
    QPushButton *logoutButton;
    QPushButton *editButton;
    QPushButton *delButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *nameLabel;
    QLabel *rankLabel;
    QLabel *emailLabel;
    QPushButton *pushButton_2;
    QLabel *label_258933;
    QPushButton *pushButton_7;
    QWidget *page_3;
    QFrame *frame_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *uBox_2;
    QLineEdit *pBox_2;
    QLineEdit *eBox_2;
    QLineEdit *fBox_2;
    QLineEdit *mBox_2;
    QLineEdit *lBox_2;
    QPushButton *uplButton_2;
    QPushButton *backButton_2;
    QPushButton *editedButton;
    QWidget *page_4;
    QFrame *frame_6;
    QLabel *label_12;
    QPushButton *userBrowse;
    QPushButton *adminBrowse;
    QPushButton *pageButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *delUButton;
    QPushButton *delAButton;
    QPushButton *backButton_5;
    QPushButton *editedButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QFrame *frame_7;
    QTableView *tableView;
    QWidget *page_6;
    QFrame *frame_8;
    QTableView *tableView_2;
    QLabel *label_13;
    QWidget *page_7;
    QFrame *frame_9;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        winStack = new QStackedWidget(centralwidget);
        winStack->setObjectName(QString::fromUtf8("winStack"));
        winStack->setGeometry(QRect(50, 10, 701, 501));
        winStack->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 127);"));
        Login = new QWidget();
        Login->setObjectName(QString::fromUtf8("Login"));
        frame_2 = new QFrame(Login);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 9, 711, 491));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 127);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 60, 351, 31));
        label->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(244, 143, 55);\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 140, 241, 151));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/182141689_901413657425909_592955327907562813_n.png")));
        label_2->setScaledContents(true);
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName(QString::fromUtf8("usernameBox"));
        usernameBox->setGeometry(QRect(100, 140, 201, 51));
        usernameBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName(QString::fromUtf8("passwordBox"));
        passwordBox->setGeometry(QRect(100, 210, 211, 41));
        passwordBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(80, 310, 111, 31));
        loginButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        regButton = new QPushButton(frame_2);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        regButton->setGeometry(QRect(280, 310, 121, 31));
        regButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 120, 171, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        winStack->addWidget(Login);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        frame = new QFrame(page_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(9, -1, 691, 391));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 20, 241, 31));
        label_4->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox = new QLineEdit(frame);
        uBox->setObjectName(QString::fromUtf8("uBox"));
        uBox->setGeometry(QRect(40, 110, 181, 41));
        uBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pBox = new QLineEdit(frame);
        pBox->setObjectName(QString::fromUtf8("pBox"));
        pBox->setGeometry(QRect(40, 160, 181, 41));
        pBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        eBox = new QLineEdit(frame);
        eBox->setObjectName(QString::fromUtf8("eBox"));
        eBox->setGeometry(QRect(40, 210, 181, 41));
        eBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        fBox = new QLineEdit(frame);
        fBox->setObjectName(QString::fromUtf8("fBox"));
        fBox->setGeometry(QRect(430, 100, 151, 41));
        fBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        mBox = new QLineEdit(frame);
        mBox->setObjectName(QString::fromUtf8("mBox"));
        mBox->setGeometry(QRect(430, 160, 151, 41));
        mBox->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lBoxb = new QLineEdit(frame);
        lBoxb->setObjectName(QString::fromUtf8("lBoxb"));
        lBoxb->setGeometry(QRect(430, 210, 151, 41));
        lBoxb->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        backButton2 = new QPushButton(frame);
        backButton2->setObjectName(QString::fromUtf8("backButton2"));
        backButton2->setGeometry(QRect(60, 312, 161, 31));
        backButton2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        completeRegButton = new QPushButton(frame);
        completeRegButton->setObjectName(QString::fromUtf8("completeRegButton"));
        completeRegButton->setGeometry(QRect(420, 310, 151, 31));
        completeRegButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        uplButton = new QPushButton(frame);
        uplButton->setObjectName(QString::fromUtf8("uplButton"));
        uplButton->setGeometry(QRect(270, 220, 111, 23));
        uplButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        regLabel = new QLabel(frame);
        regLabel->setObjectName(QString::fromUtf8("regLabel"));
        regLabel->setGeometry(QRect(60, 80, 151, 16));
        regLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        rpLabel = new QLabel(frame);
        rpLabel->setObjectName(QString::fromUtf8("rpLabel"));
        rpLabel->setGeometry(QRect(280, 70, 111, 111));
        winStack->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        frame_3 = new QFrame(page);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 10, 691, 491));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        adminButton = new QPushButton(frame_3);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));
        adminButton->setGeometry(QRect(540, 120, 121, 23));
        adminButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        logoutButton = new QPushButton(frame_3);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(540, 280, 121, 23));
        logoutButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        editButton = new QPushButton(frame_3);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(540, 160, 121, 23));
        editButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        delButton = new QPushButton(frame_3);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setGeometry(QRect(540, 200, 121, 23));
        delButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 30, 251, 51));
        label_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 160, 71, 41));
        label_6->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 210, 71, 31));
        label_7->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 250, 71, 31));
        label_8->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        nameLabel = new QLabel(frame_3);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(410, 180, 47, 13));
        nameLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        rankLabel = new QLabel(frame_3);
        rankLabel->setObjectName(QString::fromUtf8("rankLabel"));
        rankLabel->setGeometry(QRect(410, 220, 47, 13));
        rankLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        emailLabel = new QLabel(frame_3);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setGeometry(QRect(410, 260, 71, 16));
        emailLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 240, 121, 23));
        pushButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        label_258933 = new QLabel(frame_3);
        label_258933->setObjectName(QString::fromUtf8("label_258933"));
        label_258933->setGeometry(QRect(50, 170, 141, 121));
        label_258933->setPixmap(QPixmap(QString::fromUtf8("image/csm_Login_c148e8b0a7.png")));
        label_258933->setScaledContents(true);
        pushButton_7 = new QPushButton(frame_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(160, 380, 401, 23));
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
        winStack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(9, 9, 691, 381));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 20, 261, 31));
        label_9->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_10 = new QLabel(frame_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 70, 341, 16));
        label_10->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        label_11 = new QLabel(frame_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(260, 120, 111, 91));
        uBox_2 = new QLineEdit(frame_5);
        uBox_2->setObjectName(QString::fromUtf8("uBox_2"));
        uBox_2->setGeometry(QRect(40, 110, 113, 20));
        uBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pBox_2 = new QLineEdit(frame_5);
        pBox_2->setObjectName(QString::fromUtf8("pBox_2"));
        pBox_2->setGeometry(QRect(40, 160, 113, 20));
        pBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        eBox_2 = new QLineEdit(frame_5);
        eBox_2->setObjectName(QString::fromUtf8("eBox_2"));
        eBox_2->setGeometry(QRect(40, 210, 113, 20));
        eBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        fBox_2 = new QLineEdit(frame_5);
        fBox_2->setObjectName(QString::fromUtf8("fBox_2"));
        fBox_2->setGeometry(QRect(480, 110, 113, 20));
        fBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        mBox_2 = new QLineEdit(frame_5);
        mBox_2->setObjectName(QString::fromUtf8("mBox_2"));
        mBox_2->setGeometry(QRect(480, 160, 113, 20));
        mBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lBox_2 = new QLineEdit(frame_5);
        lBox_2->setObjectName(QString::fromUtf8("lBox_2"));
        lBox_2->setGeometry(QRect(480, 210, 113, 20));
        lBox_2->setStyleSheet(QString::fromUtf8("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        uplButton_2 = new QPushButton(frame_5);
        uplButton_2->setObjectName(QString::fromUtf8("uplButton_2"));
        uplButton_2->setGeometry(QRect(240, 240, 121, 23));
        uplButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        backButton_2 = new QPushButton(frame_5);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));
        backButton_2->setGeometry(QRect(20, 290, 111, 23));
        backButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        editedButton = new QPushButton(frame_5);
        editedButton->setObjectName(QString::fromUtf8("editedButton"));
        editedButton->setGeometry(QRect(530, 300, 121, 23));
        editedButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        winStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        frame_6 = new QFrame(page_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(9, 9, 691, 381));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(210, 20, 191, 31));
        label_12->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        userBrowse = new QPushButton(frame_6);
        userBrowse->setObjectName(QString::fromUtf8("userBrowse"));
        userBrowse->setGeometry(QRect(40, 140, 101, 23));
        userBrowse->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        adminBrowse = new QPushButton(frame_6);
        adminBrowse->setObjectName(QString::fromUtf8("adminBrowse"));
        adminBrowse->setGeometry(QRect(40, 180, 101, 23));
        adminBrowse->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        pageButton = new QPushButton(frame_6);
        pageButton->setObjectName(QString::fromUtf8("pageButton"));
        pageButton->setGeometry(QRect(40, 230, 101, 23));
        pageButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        horizontalLayoutWidget = new QWidget(frame_6);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 621, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        delUButton = new QPushButton(horizontalLayoutWidget);
        delUButton->setObjectName(QString::fromUtf8("delUButton"));
        delUButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(delUButton);

        delAButton = new QPushButton(horizontalLayoutWidget);
        delAButton->setObjectName(QString::fromUtf8("delAButton"));
        delAButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(delAButton);

        backButton_5 = new QPushButton(horizontalLayoutWidget);
        backButton_5->setObjectName(QString::fromUtf8("backButton_5"));
        backButton_5->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(backButton_5);

        editedButton_2 = new QPushButton(horizontalLayoutWidget);
        editedButton_2->setObjectName(QString::fromUtf8("editedButton_2"));
        editedButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(editedButton_2);

        stackedWidget = new QStackedWidget(frame_6);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(189, 79, 441, 191));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        frame_7 = new QFrame(page_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(-1, -1, 451, 201));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_7);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(35, 10, 371, 181));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        frame_8 = new QFrame(page_6);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(9, 9, 411, 171));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame_8);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(20, 10, 361, 151));
        stackedWidget->addWidget(page_6);
        label_13 = new QLabel(frame_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 290, 331, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        winStack->addWidget(page_4);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        frame_9 = new QFrame(page_7);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(-1, 9, 711, 431));
        frame_9->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 127);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_9);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 250, 251, 41));
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
""));
        pushButton_3 = new QPushButton(frame_9);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 250, 241, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_4 = new QPushButton(frame_9);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 130, 251, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_5 = new QPushButton(frame_9);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 130, 241, 41));
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
        pushButton_6 = new QPushButton(frame_9);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 190, 261, 41));
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
        label_14 = new QLabel(frame_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(190, 10, 341, 51));
        label_14->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_15 = new QLabel(frame_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(530, 320, 151, 91));
        label_15->setPixmap(QPixmap(QString::fromUtf8("image/182141689_901413657425909_592955327907562813_n.png")));
        label_15->setScaledContents(true);
        winStack->addWidget(page_7);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        winStack->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BIENVENUE", nullptr));
        label_2->setText(QString());
        usernameBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        passwordBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        regButton->setText(QCoreApplication::translate("MainWindow", "SIGN UP", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "REGISTER", nullptr));
        uBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "USER NAME", nullptr));
        pBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        eBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "E-MAIL", nullptr));
        fBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "FIRST NAME", nullptr));
        mBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "MIDDLE NAME", nullptr));
        lBoxb->setPlaceholderText(QCoreApplication::translate("MainWindow", "LASTE NAME", nullptr));
        backButton2->setText(QCoreApplication::translate("MainWindow", "BACK TO LOGIN PAGE", nullptr));
        completeRegButton->setText(QCoreApplication::translate("MainWindow", "COMPLETE REGISTRATION", nullptr));
        uplButton->setText(QCoreApplication::translate("MainWindow", "UPLOAD PICTURE", nullptr));
        regLabel->setText(QCoreApplication::translate("MainWindow", "Please fill the form correctly.", nullptr));
        rpLabel->setText(QString());
        adminButton->setText(QCoreApplication::translate("MainWindow", "ADMIN PANEL", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "SIGN OUT", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "EDITE MY PROFILE", nullptr));
        delButton->setText(QCoreApplication::translate("MainWindow", "DELETE MY ACCOUNT", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Logged In", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Rank:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "E-mail:", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rankLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", " Gestion de l'entreprise", nullptr));
        label_258933->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Visitez nous sur notre page web", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Edit Profile", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Edit your details below. (avatar may not change until app relaunch)", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        uBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "USER NAME", nullptr));
        pBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        eBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "E-MAIL", nullptr));
        fBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "FIRST NAME", nullptr));
        mBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "MIDDLE NAME", nullptr));
        lBox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "LAST NAME", nullptr));
        uplButton_2->setText(QCoreApplication::translate("MainWindow", "CHANGE PICTURE", nullptr));
        backButton_2->setText(QCoreApplication::translate("MainWindow", "BACK TO MY PAGE", nullptr));
        editedButton->setText(QCoreApplication::translate("MainWindow", "SUBMIT CHANGES", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "ADMIN PANEL", nullptr));
        userBrowse->setText(QCoreApplication::translate("MainWindow", "ALL USERS", nullptr));
        adminBrowse->setText(QCoreApplication::translate("MainWindow", "ALL ADMINS", nullptr));
        pageButton->setText(QCoreApplication::translate("MainWindow", "GOTO MY PAGE", nullptr));
        delUButton->setText(QCoreApplication::translate("MainWindow", "DELETE ALL USERS", nullptr));
        delAButton->setText(QCoreApplication::translate("MainWindow", "DELETE ALL ADMINS", nullptr));
        backButton_5->setText(QCoreApplication::translate("MainWindow", "ROLLBACK ALL CHANGES", nullptr));
        editedButton_2->setText(QCoreApplication::translate("MainWindow", "SAVE CHANGES", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "There are no auto backups! Be sure of any alterations you make.", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Gestion boutique et commandes", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Gestion clients et carte-fid\303\251lit\303\251", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Gestion maintenances et mat\303\251riaux", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Gestion ingredients et produits ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Gestion personnels et departements ", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Menu Principal", nullptr));
        label_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
