#include "gestion_ingredient.h"
#include "ui_gestion_ingredient.h"
#include"ingredient.h"
#include"produit.h"
#include<QString>
#include <QMessageBox>
#include <QTextStream>
#include <QSqlQuery>
#include<QtDebug>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QDate>
#include <QTranslator>

gestion_ingredient::gestion_ingredient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_ingredient)
{
    ui->setupUi(this);
    ui->tab_ingredient->setModel(I.afficher());
       ui->tabproduit->setModel(P.afficher());
}

gestion_ingredient::~gestion_ingredient()
{
    delete ui;
}

void gestion_ingredient::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void gestion_ingredient::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void gestion_ingredient::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void gestion_ingredient::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void gestion_ingredient::on_addemploye_2_clicked()
{
ui->stackedWidget_3->setCurrentIndex(0);
}
void gestion_ingredient::on_reportemploye_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}

void gestion_ingredient::on_pushButton_8_clicked()
{
   ui->stackedWidget_3->setCurrentIndex(2);
}

void gestion_ingredient::on_employeelist_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(3);
}






void gestion_ingredient::on_ajouter_i_clicked()
{
    int id=ui->idi->text().toInt();
    QString nom=ui->nomi->text();
    int quantite=ui->qti->text().toInt();



Ingredient I (id,nom,quantite);
     bool test=I.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"


                                 "Click Cancel to exit."), QMessageBox::Cancel);
     ui->tab_ingredient->setModel(I.afficher());}
         else
                  QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("ajout non effectuer.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_ingredient::on_supprimer_i_clicked()
{
    Ingredient I1;
     I1.setid(ui->ig_d->text().toInt());
     bool test=I1.supprimer(I1.getid());
     QMessageBox msgbox;

     if(test)
        { msgbox.setText("succes de supprssion.");
         ui->tab_ingredient->setModel(I.afficher());
     }
     else
         msgbox.setText("echec de suppression");
     msgbox.exec();

}

void gestion_ingredient::on_modifier_i_clicked()
{
    int id=ui->id_m->text().toInt();
 QString nom=ui->nom_m->text();
 int quantite=ui->qt_m->text().toInt();

                  Ingredient Ig (id,nom,quantite);

         bool test = Ig.modifingredient(id,nom,quantite);


         if(test)

         {
              ui->tab_ingredient->setModel(Ig.afficher());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("ingredient modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("ingredient non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}



void gestion_ingredient::on_tab_ingredient_clicked(const QModelIndex &index)
{
    ui->id_m->setText( ui->tab_ingredient->model()->data(ui->tab_ingredient->model()->index(ui->tab_ingredient->selectionModel()->currentIndex().row(),0)).toString() );
     ui->nom_m->setText( ui->tab_ingredient->model()->data(ui->tab_ingredient->model()->index(ui->tab_ingredient->selectionModel()->currentIndex().row(),1)).toString() );
      ui->qt_m->setText( ui->tab_ingredient->model()->data(ui->tab_ingredient->model()->index(ui->tab_ingredient->selectionModel()->currentIndex().row(),2)).toString() );

}


void gestion_ingredient::on_addemploye_clicked()
{
 ui->stackedWidget_2->setCurrentIndex(0);
}

void gestion_ingredient::on_reportemploye_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void gestion_ingredient::on_pushButton_4_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void gestion_ingredient::on_employeelist_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}

void gestion_ingredient::on_ajouter_produit_clicked()
{
  QString nom=ui->lineEdit_nom->text();
  QString description=ui->lineEdit_description->text();
  QString quantite=ui->lineEdit_quantite->text();
  int id=ui->lineEdit_id->text().toInt();

  Produit p(nom,description,quantite,id);
  bool test=p.ajouter();
  if(test)
  { ui->tabproduit->setModel(p.afficher());

      QMessageBox::information(nullptr, QObject::tr("ok"),
                  QObject::tr("ajout effectuer.\n"


                              "Click Cancel to exit."), QMessageBox::Cancel);
 }
      else
               QMessageBox::critical(nullptr, QObject::tr("not ok"),
                           QObject::tr("ajout non effectuer.\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);

}

void gestion_ingredient::on_pushButton_7_clicked()
{

 Produit P1;
 P1.setID(ui->lineEdit_IDs->text().toInt());
 bool test=P1.supprimer(P1.getID());
 QMessageBox msgbox;

 if(test)
    { msgbox.setText("succes de supprssion.");
     ui->tabproduit->setModel(P.afficher());
 }
 else
     msgbox.setText("echec de suppression");
 msgbox.exec();

}

void gestion_ingredient::on_modifierProduit_clicked()
{
    int id=ui->lineEdit->text().toInt();
 QString nom=ui->lineEdit_name->text();
 QString quantite=ui->lineEdit_quantite2->text();
 QString description=ui->lineEdit_2->text();
                 Produit P (nom,description,quantite,id);

         bool test = P.modifierproduit(nom,description,quantite,id);
         if(test)

         {
               ui->tabproduit->setModel(P.afficher());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("produit modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("produit non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}






void gestion_ingredient::on_tabproduit_clicked(const QModelIndex &index)
{
    ui->lineEdit->setText( ui->tabproduit->model()->data(ui->tabproduit->model()->index(ui->tabproduit->selectionModel()->currentIndex().row(),0)).toString() );
     ui->lineEdit_name->setText( ui->tabproduit->model()->data(ui->tabproduit->model()->index(ui->tabproduit->selectionModel()->currentIndex().row(),1)).toString() );
     ui->lineEdit_2->setText( ui->tabproduit->model()->data(ui->tabproduit->model()->index(ui->tabproduit->selectionModel()->currentIndex().row(),2)).toString() );
     ui->lineEdit_quantite2->setText( ui->tabproduit->model()->data(ui->tabproduit->model()->index(ui->tabproduit->selectionModel()->currentIndex().row(),3)).toString() );


}


void gestion_ingredient::on_pushButton_3_clicked()
{

}

void gestion_ingredient::on_pushButton_9_clicked()
{
    QString critere=ui->comboBox->currentText();
    QString mode;
    if (ui->checkBox->checkState()==false)
{
         mode="DESC";
}
     else if(ui->checkBox_2->checkState()==false)
     {
         mode="ASC";
     }

     ui->tabproduit->setModel(P.trie(critere,mode));
}

void gestion_ingredient::on_pdf_clicked()
{
    QTableView tab_ingredient;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry ;
     qry.prepare("SELECT * FROM Produit");
     qry.exec();
     Modal->setQuery(qry);
    tab_ingredient.setModel(Modal);





     QString strStream;
     QTextStream out(&strStream);

     const int rowCount =tab_ingredient.model()->rowCount();
     const int columnCount =tab_ingredient.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les Ingredients")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_ingredient.isColumnHidden(column))
             out << QString("<th>%1</th>").arg( tab_ingredient.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_ingredient.isColumnHidden(column)) {
                     QString data =  tab_ingredient.model()->data( tab_ingredient.model()->index(row, column)).toString().simplified();
                     out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                 }
             }
             out << "</tr>\n";
         }
         out <<  "</table>\n"
                 "<br><br>"


         "</body>\n"
         "</html>\n";

     QTextDocument *document = new QTextDocument();
     document->setHtml(strStream);

     QPrinter printer;

     QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
     if (dialog->exec() == QDialog::Accepted) {
         document->print(&printer);
     }

     delete document;
}

void gestion_ingredient::on_lineEdit_3_textChanged(const QString &arg1)
{
    if(ui->lineEdit_3->text() == "")
        {
            ui->tab_ingredient->setModel(I.afficher());
        }
        else
        {
             ui->tab_ingredient->setModel(I.rechercher(ui->lineEdit_3->text()));
        }

}



void gestion_ingredient::on_pushButton_10_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}
