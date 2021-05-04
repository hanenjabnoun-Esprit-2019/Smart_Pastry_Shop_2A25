QT       += core gui
QT       +=  printsupport
QT       +=multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    boutique.cpp \
    carte.cpp \
    client.cpp \
    commande.cpp \
    connection.cpp \
    departement.cpp \
    gestion_boutique.cpp \
    gestion_des_clients.cpp \
    gestion_ingredient.cpp \
    gestion_materiels.cpp \
    ingredient.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    materiel.cpp \
    notif.cpp \
    personnel.cpp \
    personnels.cpp \
    produit.cpp \
    qcustomplot.cpp \
    seconddialog.cpp \
    smtp.cpp \
    smtp2.cpp \
    tableprinter.cpp

HEADERS += \
    boutique.h \
    carte.h \
    client.h \
    commande.h \
    connection.h \
    departement.h \
    gestion_boutique.h \
    gestion_des_clients.h \
    gestion_ingredient.h \
    gestion_materiels.h \
    ingredient.h \
    maintenance.h \
    mainwindow.h \
    materiel.h \
    notif.h \
    personnel.h \
    personnels.h \
    produit.h \
    qcustomplot.h \
    seconddialog.h \
    smtp.h \
    smtp2.h \
    tableprinter.h

FORMS += \
    gestion_boutique.ui \
    gestion_des_clients.ui \
    gestion_ingredient.ui \
    gestion_materiels.ui \
    mainwindow.ui \
    personnels.ui \
    seconddialog.ui
TRANSLATIONS = english.ts
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
QT+= sql
