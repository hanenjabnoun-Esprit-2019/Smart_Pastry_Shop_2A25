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
    commande.cpp \
    connection.cpp \
    gestion_boutique.cpp \
    gestion_materiels.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    materiel.cpp \
    notif.cpp

HEADERS += \
    boutique.h \
    commande.h \
    connection.h \
    gestion_boutique.h \
    gestion_materiels.h \
    maintenance.h \
    mainwindow.h \
    materiel.h \
    notif.h

FORMS += \
    gestion_boutique.ui \
    gestion_materiels.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
QT+= sql
