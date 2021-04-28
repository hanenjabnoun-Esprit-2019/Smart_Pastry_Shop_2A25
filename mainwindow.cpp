#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gestion_boutique.h"
#include "gestion_materiels.h"
#include "gestion_des_clients.h"
#include <QPrinter>
#include<QFileDialog>
#include <QPainter>
#include <QPrintDialog>
#include <QPrinterInfo>
#include "connection.h"
#include <QMessageBox>
#include <QSqlRecord>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->winStack->setCurrentIndex(0);
   ui->stackedWidget->setCurrentIndex(1);
   ui->passwordBox->setEchoMode(QLineEdit::Password);
   ui->passwordBox->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
   ui->pBox->setEchoMode(QLineEdit::Password);
   ui->pBox->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
   ui->pBox_2->setEchoMode(QLineEdit::Password);
   ui->pBox_2->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    gestionboutique = new gestion_boutique(this);
          gestionboutique->show();
}

bool MainWindow::Login(QString u, QString p)
{
    ui->adminButton->setVisible(true);

    bool exists = false;

    QSqlQuery query;
    query.prepare("SELECT username FROM sys_users WHERE username = (:un) AND passwd = (:pw)");
   query.bindValue(":un", u);
    query.bindValue(":pw", p);

    if (query.exec())
    {
        if (query.next())
        {
            exists = true;
        }
    }

    return exists;
}

void MainWindow::on_loginButton_clicked()
{
    this->loggedIn = Login(ui->usernameBox->text(), ui->passwordBox->text());

    if(this->loggedIn)
    {
        this->username = ui->usernameBox->text();
        this->password = ui->passwordBox->text();

        ui->label_3->setText("");
        ui->winStack->setCurrentIndex(2);
    }
    else
    {
        ui->label_3->setText("Login failed: Invalid credentials!");
    }
}

void MainWindow::on_regButton_clicked()
{
    ui->uBox->setText(ui->usernameBox->text());
    ui->pBox->setText(ui->passwordBox->text());
    ui->winStack->setCurrentIndex(1);
}

void MainWindow::on_logoutButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                       "Login System", "Are you sure you want to logout?",
                                       QMessageBox::Yes|QMessageBox::No).exec())
    {
        this->loggedIn = false;
        ui->passwordBox->setText("");
        ui->label_3->setText("You signed out!");
        ui->winStack->setCurrentIndex(0);
    }
}

void MainWindow::on_completeRegButton_clicked()
{
    bool halt = false;

    if(ui->uBox->text() == "")
    {
        ui->uBox->setPlaceholderText("Username EMPTY!");
        halt = true;
    }

    if(ui->pBox->text() == "")
    {
        ui->pBox->setPlaceholderText("Password EMPTY!");
        halt = true;
    }

    if(ui->eBox->text() == "")
    {
        ui->eBox->setPlaceholderText("E-mail EMPTY!");
        halt = true;
    }

    if(ui->fBox->text() == "")
    {
        ui->fBox->setPlaceholderText("First Name EMPTY!");
        halt = true;
    }

    if(ui->mBox->text() == "")
    {
        ui->mBox->setPlaceholderText("Middle Name (optional)");
        halt = false;
    }

    if(ui->lBoxb->text() == "")
    {
        ui->lBoxb->setPlaceholderText("Last Name EMPTY!");
        halt = true;
    }

    QSqlQuery query;
    query.prepare("SELECT username FROM sys_users WHERE username = (:un)");
    query.bindValue(":un", ui->uBox->text());

    if(query.exec())
    {
        if(query.next())
        {
            ui->uBox->setText("");
            ui->uBox->setPlaceholderText("Choose a different Username!");
            halt = true;
        }
    }

    QSqlQuery query2;
    query2.prepare("SELECT email FROM sys_users WHERE email = (:em)");
    query2.bindValue(":em", ui->eBox->text());

    if(query2.exec())
    {
        if(query2.next())
        {
            ui->eBox->setText("");
            ui->eBox->setPlaceholderText("Use another E-mail!");
            halt = true;
        }
    }


    if(halt)
    {
        ui->regLabel->setText("Please correct your mistakes.");
    }
    else
    {
        /*if (this->picName != "")
        {
            QString to = this->picDir+"/"+ui->uBox->text();

            if (QFile::exists(to))
            {
                QFile::remove(to);
            }

            QFile::copy(this->picName, to);
            this->picName = "";*/
        }

        ui->regLabel->setText("");
        QSqlQuery iQuery;
        iQuery.prepare("INSERT INTO sys_users(username, passwd, fname, mname, lname, email)"\
                       "VALUES(:un, :pw, :fn, :mn, :ln, :em)");
        iQuery.bindValue(":un", ui->uBox->text());
        iQuery.bindValue(":pw", ui->pBox->text());
        iQuery.bindValue(":fn", ui->fBox->text());
        iQuery.bindValue(":mn", ui->mBox->text());
        iQuery.bindValue(":ln", ui->lBoxb->text());
        iQuery.bindValue(":em", ui->eBox->text());

        if(iQuery.exec())
        {
            ui->uBox->setText("");
            ui->pBox->setText("");
            ui->eBox->setText("");
            ui->fBox->setText("");
            ui->mBox->setText("");
            ui->lBoxb->setText("");
            ui->rpLabel->setText("<img src=\":user.png\" />");
            ui->label_3->setText("Registration Successful! You can now login.");
            ui->winStack->setCurrentIndex(0);
        }

}

void MainWindow::on_backButton2_clicked()
{
    ui->label_3->setText("");
    ui->winStack->setCurrentIndex(0);
}

void MainWindow::on_adminButton_clicked()
{
    ui->winStack->setCurrentIndex(4);
}

void MainWindow::on_editButton_clicked()
{
    QSqlQuery fetcher;
    fetcher.prepare("SELECT * FROM sys_users WHERE username = (:un) AND passwd = (:pw)");
    fetcher.bindValue(":un", this->username);
    fetcher.bindValue(":pw", this->password);
    fetcher.exec();

    int idUsername = fetcher.record().indexOf("username");
    int idPasswd = fetcher.record().indexOf("passwd");
    int idEmail = fetcher.record().indexOf("email");
    int idFname = fetcher.record().indexOf("fname");
    int idMname = fetcher.record().indexOf("mname");
    int idLname = fetcher.record().indexOf("lname");

    while (fetcher.next())
    {
        ui->uBox_2->setText(fetcher.value(idUsername).toString());
        ui->pBox_2->setText(fetcher.value(idPasswd).toString());
        ui->eBox_2->setText(fetcher.value(idEmail).toString());
        ui->fBox_2->setText(fetcher.value(idFname).toString());
        ui->mBox_2->setText(fetcher.value(idMname).toString());
        ui->lBox_2->setText(fetcher.value(idLname).toString());
    }
}

void MainWindow::on_delButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                       "Login System", "Are you sure you want to delete your account?",
                                       QMessageBox::Yes|QMessageBox::No).exec())
    {
       /* QString to = this->picDir+"/"+this->username;

        if (QFile::exists(to))
        {
            QFile::remove(to);
        }
*/
        QSqlQuery dQuery;
        dQuery.prepare("DELETE FROM sys_users WHERE username = (:un)");
        dQuery.bindValue(":un", this->username);

        if(dQuery.exec())
        {
            ui->usernameBox->setText("");
            ui->passwordBox->setText("");
            ui->label_3->setText("Account deleted!");
            ui->winStack->setCurrentIndex(0);
        }
    }
}

void MainWindow::on_editedButton_clicked()
{
    bool halt = false;

    if(ui->uBox_2->text() == "")
    {
        ui->uBox_2->setPlaceholderText("Username EMPTY!");
        halt = true;
    }

    if(ui->pBox_2->text() == "")
    {
        ui->pBox_2->setPlaceholderText("Password EMPTY!");
        halt = true;
    }

    if(ui->eBox_2->text() == "")
    {
        ui->eBox_2->setPlaceholderText("E-mail EMPTY!");
        halt = true;
    }

    if(ui->fBox_2->text() == "")
    {
        ui->fBox_2->setPlaceholderText("First Name EMPTY!");
        halt = true;
    }

    if(ui->mBox_2->text() == "")
    {
        ui->mBox_2->setPlaceholderText("Middle Name (optional)");
        halt = false;
    }

    if(ui->lBox_2->text() == "")
    {
        ui->lBox_2->setPlaceholderText("Last Name EMPTY!");
        halt = true;
    }

    QSqlQuery cQuery;
    cQuery.prepare("SELECT username FROM sys_users WHERE username = (:un)");
    cQuery.bindValue(":un", ui->uBox->text());

    if(cQuery.exec())
    {
        if(cQuery.next() && ui->uBox_2->text() != cQuery.value(0).toString())
        {
            ui->uBox_2->setText("");
            ui->uBox_2->setPlaceholderText("Choose a different Username!");
            halt = true;
        }
    }

    QSqlQuery cQuery2;
    cQuery2.prepare("SELECT email FROM sys_users WHERE email = (:em)");
    cQuery2.bindValue(":em", ui->eBox_2->text());

    if(cQuery2.exec())
    {
        if(cQuery2.next() && ui->eBox_2->text() != cQuery2.value(0).toString())
        {
            ui->eBox_2->setText("");
            ui->eBox_2->setPlaceholderText("Use another E-mail!");
            halt = true;
        }
    }


    if(halt)
    {
        ui->label_10->setText("Please correct your mistakes.");
    }
    else
    {
       /* if (this->picName != "")
        {
            QString to = this->picDir+"/"+ui->uBox_2->text();

            if (QFile::exists(to))
            {
                QFile::remove(to);
            }

            QFile::copy(this->picName, to);
            this->picName = "";
        }*/

        ui->label_10->setText("");
        QSqlQuery iQuery;
        iQuery.prepare("UPDATE sys_users SET username=(:un), passwd=(:pw), fname=(:fn), mname=(:mn), lname=(:ln), email=(:em) WHERE username=(:uno)");
        iQuery.bindValue(":un", ui->uBox_2->text());
        iQuery.bindValue(":pw", ui->pBox_2->text());
        iQuery.bindValue(":fn", ui->fBox_2->text());
        iQuery.bindValue(":mn", ui->mBox_2->text());
        iQuery.bindValue(":ln", ui->lBox_2->text());
        iQuery.bindValue(":em", ui->eBox_2->text());
        iQuery.bindValue(":uno", ui->uBox_2->text());

        if(iQuery.exec())
        {
            ui->winStack->setCurrentIndex(2);
        }

    }
}

void MainWindow::on_backButton_2_clicked()
{
     ui->winStack->setCurrentIndex(2);
}

void MainWindow::on_userBrowse_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_adminBrowse_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pageButton_clicked()
{
    ui->winStack->setCurrentIndex(2);
}

void MainWindow::on_delUButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                           "Login System", "Are you sure you want to erase all accounts?",
                                           QMessageBox::Yes|QMessageBox::No).exec())
    {
        QSqlQuery dQuery;
        dQuery.prepare("DELETE FROM sys_users WHERE rank !=1 AND rank != -1");

        if(dQuery.exec())
        {
            ui->label_13->setText("Query executed!");
        }
    }
}

void MainWindow::on_delAButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox(QMessageBox::Question,
                                           "Login System", "Are you sure you want to erase all administrators?"\
                                           "\n(This won't erase regular users and you)",
                                           QMessageBox::Yes|QMessageBox::No).exec())
    {
        QSqlQuery dQuery;
        dQuery.prepare("DELETE FROM sys_users WHERE rank != 1 AND username != \"" + this->username + "\"");

        if(dQuery.exec())
        {
            ui->label_13->setText("Query executed!");
        }
    }
}

void MainWindow::on_backButton_5_clicked()
{
    this->tblMdl->revertAll();
    this->tblMdl->database().rollback();
}

void MainWindow::on_editedButton_2_clicked()
{

    if(this->tblMdl->submitAll())
    {
        this->tblMdl->database().commit();
        ui->label_13->setText("Saved to database!");
    }
    else
    {
        this->tblMdl->database().rollback();
    }
}

void MainWindow::on_winStack_currentChanged(int arg1)
{
    if(arg1 == 3 && this->loggedIn)
    {
       /* if(QFile::exists(this->picDir+"/"+this->username))
        {
            ui->rpLabel_2->setText("<img src=\"file:///"+this->picDir+"/"+this->username+"\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
        }*/
    }

    if(arg1 == 2 && this->loggedIn)
    {
        /*if(QFile::exists(this->picDir+"/"+this->username))
        {
            ui->loggedPic->setText("<img src=\"file:///"+this->picDir+"/"+this->username+"\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
        }*/

        QSqlQuery fetcher;
        fetcher.prepare("SELECT * FROM sys_users WHERE username = (:un)");
        fetcher.bindValue(":un", this->username);
        fetcher.exec();

        int idFname = fetcher.record().indexOf("fname");
        int idMname = fetcher.record().indexOf("mname");
        int idLname = fetcher.record().indexOf("lname");
        int idRank = fetcher.record().indexOf("rank");
        int idEmail = fetcher.record().indexOf("email");

        QString fullname, email, rank;

        while (fetcher.next())
        {
            fullname = fetcher.value(idFname).toString();
            fullname += " " + fetcher.value(idMname).toString();
            fullname += " " + fetcher.value(idLname).toString();
            rank = fetcher.value(idRank).toString();
            email = fetcher.value(idEmail).toString();
        }
        if(rank == "-1")
        {
            ui->adminButton->setVisible(true);
        }
        if (rank== "1")
        {
          ui->adminButton->setVisible(false);
        }

        ui->nameLabel->setText(fullname);
        ui->rankLabel->setText(rank);
        ui->emailLabel->setText(email);
    }

    if(arg1 == 4 && this->loggedIn)
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
  ui->winStack->setCurrentIndex(5);
}

void MainWindow::on_pushButton_4_clicked()
{
    gestionmateriels = new gestion_materiels(this);
          gestionmateriels->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    gestionclient = new gestion_des_clients(this);
          gestionclient->show();
}
