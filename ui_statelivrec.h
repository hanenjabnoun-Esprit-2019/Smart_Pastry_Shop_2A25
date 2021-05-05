/********************************************************************************
** Form generated from reading UI file 'statelivrec.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATELIVREC_H
#define UI_STATELIVREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_statelivrec
{
public:
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *statelivrec)
    {
        if (statelivrec->objectName().isEmpty())
            statelivrec->setObjectName(QString::fromUtf8("statelivrec"));
        statelivrec->resize(743, 487);
        horizontalFrame = new QFrame(statelivrec);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(0, 20, 711, 461));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        retranslateUi(statelivrec);

        QMetaObject::connectSlotsByName(statelivrec);
    } // setupUi

    void retranslateUi(QDialog *statelivrec)
    {
        statelivrec->setWindowTitle(QCoreApplication::translate("statelivrec", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statelivrec: public Ui_statelivrec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATELIVREC_H
