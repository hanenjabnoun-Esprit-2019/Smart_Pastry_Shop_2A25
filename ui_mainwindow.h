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
    QLabel *label_3;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *regButton;
    QWidget *page_2;
    QFrame *frame;
    QLabel *label_4;
    QLabel *rpLabel;
    QLabel *regLabel;
    QLineEdit *uBox;
    QLineEdit *pBox;
    QLineEdit *eBox;
    QLineEdit *fBox;
    QLineEdit *mBox;
    QLineEdit *lBoxb;
    QPushButton *backButton2;
    QPushButton *completeRegButton;
    QPushButton *uplButton;
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
    QFrame *frame_4;
    QLabel *loggedPic;
    QPushButton *pushButton_2;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        winStack = new QStackedWidget(centralwidget);
        winStack->setObjectName(QStringLiteral("winStack"));
        winStack->setGeometry(QRect(50, 10, 701, 391));
        winStack->setStyleSheet(QStringLiteral("background: #101010;"));
        Login = new QWidget();
        Login->setObjectName(QStringLiteral("Login"));
        frame_2 = new QFrame(Login);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 9, 691, 381));
        frame_2->setStyleSheet(QStringLiteral("background: #101010;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 181, 31));
        label->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 110, 131, 81));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 171, 16));
        label_3->setStyleSheet(QStringLiteral("color: #fefefe;"));
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName(QStringLiteral("usernameBox"));
        usernameBox->setGeometry(QRect(60, 180, 121, 20));
        usernameBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName(QStringLiteral("passwordBox"));
        passwordBox->setGeometry(QRect(60, 220, 113, 20));
        passwordBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(30, 270, 75, 23));
        loginButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        regButton = new QPushButton(frame_2);
        regButton->setObjectName(QStringLiteral("regButton"));
        regButton->setGeometry(QRect(140, 270, 75, 23));
        regButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        winStack->addWidget(Login);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame = new QFrame(page_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, -1, 691, 391));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 20, 241, 31));
        label_4->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        rpLabel = new QLabel(frame);
        rpLabel->setObjectName(QStringLiteral("rpLabel"));
        rpLabel->setGeometry(QRect(240, 90, 111, 111));
        regLabel = new QLabel(frame);
        regLabel->setObjectName(QStringLiteral("regLabel"));
        regLabel->setGeometry(QRect(70, 60, 151, 16));
        regLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        uBox = new QLineEdit(frame);
        uBox->setObjectName(QStringLiteral("uBox"));
        uBox->setGeometry(QRect(50, 100, 113, 20));
        uBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pBox = new QLineEdit(frame);
        pBox->setObjectName(QStringLiteral("pBox"));
        pBox->setGeometry(QRect(50, 150, 113, 20));
        pBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        eBox = new QLineEdit(frame);
        eBox->setObjectName(QStringLiteral("eBox"));
        eBox->setGeometry(QRect(50, 210, 113, 20));
        eBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        fBox = new QLineEdit(frame);
        fBox->setObjectName(QStringLiteral("fBox"));
        fBox->setGeometry(QRect(450, 100, 113, 20));
        fBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        mBox = new QLineEdit(frame);
        mBox->setObjectName(QStringLiteral("mBox"));
        mBox->setGeometry(QRect(450, 160, 113, 20));
        mBox->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lBoxb = new QLineEdit(frame);
        lBoxb->setObjectName(QStringLiteral("lBoxb"));
        lBoxb->setGeometry(QRect(450, 230, 113, 20));
        lBoxb->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        backButton2 = new QPushButton(frame);
        backButton2->setObjectName(QStringLiteral("backButton2"));
        backButton2->setGeometry(QRect(40, 310, 131, 23));
        backButton2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        completeRegButton = new QPushButton(frame);
        completeRegButton->setObjectName(QStringLiteral("completeRegButton"));
        completeRegButton->setGeometry(QRect(470, 310, 141, 23));
        completeRegButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        uplButton = new QPushButton(frame);
        uplButton->setObjectName(QStringLiteral("uplButton"));
        uplButton->setGeometry(QRect(240, 220, 111, 23));
        uplButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        winStack->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame_3 = new QFrame(page);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(9, 9, 691, 381));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        adminButton = new QPushButton(frame_3);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setGeometry(QRect(530, 80, 121, 23));
        adminButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        logoutButton = new QPushButton(frame_3);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(530, 120, 121, 23));
        logoutButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        editButton = new QPushButton(frame_3);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(530, 160, 121, 23));
        editButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        delButton = new QPushButton(frame_3);
        delButton->setObjectName(QStringLiteral("delButton"));
        delButton->setGeometry(QRect(530, 200, 121, 23));
        delButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #aaa;\n"
"Color: #101010;"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 0, 251, 41));
        label_5->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 170, 47, 13));
        label_6->setStyleSheet(QLatin1String("color: #c33;\n"
"font-weight: bold;"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 210, 47, 13));
        label_7->setStyleSheet(QLatin1String("color: #c33;\n"
"font-weight: bold;"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 250, 47, 13));
        label_8->setStyleSheet(QLatin1String("color: #c33;\n"
"font-weight: bold;"));
        nameLabel = new QLabel(frame_3);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(150, 170, 47, 13));
        rankLabel = new QLabel(frame_3);
        rankLabel->setObjectName(QStringLiteral("rankLabel"));
        rankLabel->setGeometry(QRect(150, 210, 47, 13));
        emailLabel = new QLabel(frame_3);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setGeometry(QRect(140, 250, 47, 13));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(50, 60, 120, 80));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        loggedPic = new QLabel(frame_4);
        loggedPic->setObjectName(QStringLiteral("loggedPic"));
        loggedPic->setGeometry(QRect(20, 15, 71, 51));
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 250, 121, 23));
        pushButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #aaa;\n"
"Color: #101010;"));
        winStack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(9, 9, 691, 381));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 20, 261, 31));
        label_9->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        label_10 = new QLabel(frame_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 70, 341, 16));
        label_10->setStyleSheet(QStringLiteral("color: #fefefe;"));
        label_11 = new QLabel(frame_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(260, 120, 111, 91));
        uBox_2 = new QLineEdit(frame_5);
        uBox_2->setObjectName(QStringLiteral("uBox_2"));
        uBox_2->setGeometry(QRect(40, 110, 113, 20));
        uBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        pBox_2 = new QLineEdit(frame_5);
        pBox_2->setObjectName(QStringLiteral("pBox_2"));
        pBox_2->setGeometry(QRect(40, 160, 113, 20));
        pBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        eBox_2 = new QLineEdit(frame_5);
        eBox_2->setObjectName(QStringLiteral("eBox_2"));
        eBox_2->setGeometry(QRect(40, 210, 113, 20));
        eBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        fBox_2 = new QLineEdit(frame_5);
        fBox_2->setObjectName(QStringLiteral("fBox_2"));
        fBox_2->setGeometry(QRect(480, 110, 113, 20));
        fBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        mBox_2 = new QLineEdit(frame_5);
        mBox_2->setObjectName(QStringLiteral("mBox_2"));
        mBox_2->setGeometry(QRect(480, 160, 113, 20));
        mBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lBox_2 = new QLineEdit(frame_5);
        lBox_2->setObjectName(QStringLiteral("lBox_2"));
        lBox_2->setGeometry(QRect(480, 210, 113, 20));
        lBox_2->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        uplButton_2 = new QPushButton(frame_5);
        uplButton_2->setObjectName(QStringLiteral("uplButton_2"));
        uplButton_2->setGeometry(QRect(240, 240, 121, 23));
        uplButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        backButton_2 = new QPushButton(frame_5);
        backButton_2->setObjectName(QStringLiteral("backButton_2"));
        backButton_2->setGeometry(QRect(20, 290, 111, 23));
        backButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        editedButton = new QPushButton(frame_5);
        editedButton->setObjectName(QStringLiteral("editedButton"));
        editedButton->setGeometry(QRect(530, 300, 121, 23));
        editedButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        winStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        frame_6 = new QFrame(page_4);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(9, 9, 691, 381));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 20, 191, 31));
        label_12->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        userBrowse = new QPushButton(frame_6);
        userBrowse->setObjectName(QStringLiteral("userBrowse"));
        userBrowse->setGeometry(QRect(40, 140, 101, 23));
        userBrowse->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        adminBrowse = new QPushButton(frame_6);
        adminBrowse->setObjectName(QStringLiteral("adminBrowse"));
        adminBrowse->setGeometry(QRect(40, 180, 101, 23));
        adminBrowse->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        pageButton = new QPushButton(frame_6);
        pageButton->setObjectName(QStringLiteral("pageButton"));
        pageButton->setGeometry(QRect(40, 230, 101, 23));
        pageButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        horizontalLayoutWidget = new QWidget(frame_6);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 621, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        delUButton = new QPushButton(horizontalLayoutWidget);
        delUButton->setObjectName(QStringLiteral("delUButton"));
        delUButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(delUButton);

        delAButton = new QPushButton(horizontalLayoutWidget);
        delAButton->setObjectName(QStringLiteral("delAButton"));
        delAButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(delAButton);

        backButton_5 = new QPushButton(horizontalLayoutWidget);
        backButton_5->setObjectName(QStringLiteral("backButton_5"));
        backButton_5->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(backButton_5);

        editedButton_2 = new QPushButton(horizontalLayoutWidget);
        editedButton_2->setObjectName(QStringLiteral("editedButton_2"));
        editedButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(editedButton_2);

        stackedWidget = new QStackedWidget(frame_6);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(189, 79, 441, 191));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        frame_7 = new QFrame(page_5);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(-1, -1, 451, 201));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_7);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(35, 10, 371, 181));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        frame_8 = new QFrame(page_6);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(9, 9, 411, 171));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame_8);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 10, 361, 151));
        stackedWidget->addWidget(page_6);
        label_13 = new QLabel(frame_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 290, 331, 16));
        label_13->setStyleSheet(QStringLiteral("color: #fefefe;"));
        winStack->addWidget(page_4);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        frame_9 = new QFrame(page_7);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(19, 9, 671, 371));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_9);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 150, 75, 23));
        winStack->addWidget(page_7);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        winStack->setCurrentIndex(5);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        usernameBox->setPlaceholderText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        passwordBox->setPlaceholderText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        loginButton->setText(QApplication::translate("MainWindow", "SIGN IN", Q_NULLPTR));
        regButton->setText(QApplication::translate("MainWindow", "SIGN UP", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "REGISTER", Q_NULLPTR));
        rpLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        regLabel->setText(QApplication::translate("MainWindow", "Please fill the form correctly.", Q_NULLPTR));
        uBox->setPlaceholderText(QApplication::translate("MainWindow", "USER NAME", Q_NULLPTR));
        pBox->setPlaceholderText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        eBox->setPlaceholderText(QApplication::translate("MainWindow", "E-MAIL", Q_NULLPTR));
        fBox->setPlaceholderText(QApplication::translate("MainWindow", "FIRST NAME", Q_NULLPTR));
        mBox->setPlaceholderText(QApplication::translate("MainWindow", "MIDDLE NAME", Q_NULLPTR));
        lBoxb->setPlaceholderText(QApplication::translate("MainWindow", "LASTE NAME", Q_NULLPTR));
        backButton2->setText(QApplication::translate("MainWindow", "BACK TO LOGIN PAGE", Q_NULLPTR));
        completeRegButton->setText(QApplication::translate("MainWindow", "COMPLETE REGISTRATION", Q_NULLPTR));
        uplButton->setText(QApplication::translate("MainWindow", "UPLOAD PICTURE", Q_NULLPTR));
        adminButton->setText(QApplication::translate("MainWindow", "ADMIN PANEL", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("MainWindow", "SIGN OUT", Q_NULLPTR));
        editButton->setText(QApplication::translate("MainWindow", "EDITE MY PROFILE", Q_NULLPTR));
        delButton->setText(QApplication::translate("MainWindow", "DELETE MY ACCOUNT", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Logged In", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Rank:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "E-mail:", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        rankLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        emailLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        loggedPic->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", " Gestion de l'entreprise", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Edit Profile", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Edit your details below. (avatar may not change until app relaunch)", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        uBox_2->setPlaceholderText(QApplication::translate("MainWindow", "USER NAME", Q_NULLPTR));
        pBox_2->setPlaceholderText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        eBox_2->setPlaceholderText(QApplication::translate("MainWindow", "E-MAIL", Q_NULLPTR));
        fBox_2->setPlaceholderText(QApplication::translate("MainWindow", "FIRST NAME", Q_NULLPTR));
        mBox_2->setPlaceholderText(QApplication::translate("MainWindow", "MIDDLE NAME", Q_NULLPTR));
        lBox_2->setPlaceholderText(QApplication::translate("MainWindow", "LAST NAME", Q_NULLPTR));
        uplButton_2->setText(QApplication::translate("MainWindow", "CHANGE PICTURE", Q_NULLPTR));
        backButton_2->setText(QApplication::translate("MainWindow", "BACK TO MY PAGE", Q_NULLPTR));
        editedButton->setText(QApplication::translate("MainWindow", "SUBMIT CHANGES", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "ADMIN PANEL", Q_NULLPTR));
        userBrowse->setText(QApplication::translate("MainWindow", "ALL USERS", Q_NULLPTR));
        adminBrowse->setText(QApplication::translate("MainWindow", "ALL ADMINS", Q_NULLPTR));
        pageButton->setText(QApplication::translate("MainWindow", "GOTO MY PAGE", Q_NULLPTR));
        delUButton->setText(QApplication::translate("MainWindow", "DELETE ALL USERS", Q_NULLPTR));
        delAButton->setText(QApplication::translate("MainWindow", "DELETE ALL ADMINS", Q_NULLPTR));
        backButton_5->setText(QApplication::translate("MainWindow", "ROLLBACK ALL CHANGES", Q_NULLPTR));
        editedButton_2->setText(QApplication::translate("MainWindow", "SAVE CHANGES", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "There are no auto backups! Be sure of any alterations you make.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "button aziz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
