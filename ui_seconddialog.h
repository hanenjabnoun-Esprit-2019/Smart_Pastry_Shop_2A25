/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_secondDialog
{
public:
    QPushButton *afficher;
    QCustomPlot *customPlot;
    QPushButton *pushButton;

    void setupUi(QDialog *secondDialog)
    {
        if (secondDialog->objectName().isEmpty())
            secondDialog->setObjectName(QString::fromUtf8("secondDialog"));
        secondDialog->resize(724, 418);
        secondDialog->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 127);"));
        afficher = new QPushButton(secondDialog);
        afficher->setObjectName(QString::fromUtf8("afficher"));
        afficher->setGeometry(QRect(600, 170, 101, 31));
        afficher->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"background-image:url(:/Desktop/multimedia/white.png);"));
        customPlot = new QCustomPlot(secondDialog);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(20, 60, 551, 271));
        customPlot->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(secondDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 230, 75, 23));

        retranslateUi(secondDialog);

        QMetaObject::connectSlotsByName(secondDialog);
    } // setupUi

    void retranslateUi(QDialog *secondDialog)
    {
        secondDialog->setWindowTitle(QCoreApplication::translate("secondDialog", "Dialog", nullptr));
        afficher->setText(QCoreApplication::translate("secondDialog", "afficher", nullptr));
        pushButton->setText(QCoreApplication::translate("secondDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondDialog: public Ui_secondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
