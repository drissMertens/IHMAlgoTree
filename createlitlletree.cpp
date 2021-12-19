#include "createlitlletree.h"
#include "ui_createlitlletree.h"
#include <QDebug>
#include<QMessageBox>

CreateLitlleTree::CreateLitlleTree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateLitlleTree)
{
    ui->setupUi(this);
    //on init tous les elements de notre arbres a 0 ds un premier temp
    nlvl0 = 0;
    n1Glvl1 = 0;   // == noeuds Gauche numero 1 du niveau 1
    n2Clvl1 = 0;
    n3Dlvl1 = 0;

    n1Glvl2 = 0;
    n2Dlvl2 = 0;
    n3Glvl2 = 0;
    n4Dlvl2 = 0;
    n5Glvl2 = 0;
    n6Dlvl2 = 0;

    n1Glvl3 = 0;
    n2Dlvl3 = 0;
    n3Glvl3 = 0;
    n4Dlvl3 = 0;
    n5Glvl3 = 0;
    n6Dlvl3 = 0;
    n7Glvl3 = 0;
    n8Dlvl3 = 0;
    n9Glvl3 = 0;
    n10Dlvl3 = 0;
    n11Glvl3 = 0;
    n12Dlvl3 = 0;



}

CreateLitlleTree::~CreateLitlleTree()
{
    delete ui;
}

void CreateLitlleTree::on_closeBnt_clicked()
{
    close();
}


void CreateLitlleTree::on_CreateLtree_clicked()
{
    //a la validation on va enregistrer les valeurs des noeuds de notre arbre avec des conditions particuliere pour assurer l'enregistrement d'un arbres valide
    bool ok;

   if(ui->nlvl0->text().toInt(&ok)== 0 ||  ui->n1Glvl1->text().toInt(&ok)==0 || ui->n2Clvl1->text().toInt(&ok) ==0 || ui->n3Dlvl1->text().toInt(&ok) ==0 )
   {
       qDebug()<<"error of lvl 0";
       QMessageBox::critical(this, "error", "Verifier bien le noyaux et les noeuds lvl 1 ne doivent pas etre = à 0");
   }
   else
   {
        //origine

        nlvl0 = ui->nlvl0->text().toInt(&ok);

        //lvl1

        n1Glvl1 = ui->n1Glvl1->text().toInt(&ok);
        n2Clvl1 = ui->n2Clvl1->text().toInt(&ok);
        n3Dlvl1 = ui->n2Clvl1->text().toInt(&ok);

        //lvl 2 et lvl 3 liée car si le noeud n1 lvl 2 vaut 0 alors ses enfants qui sont n1 et n2 gauche et droite vaudrons 0

        if(ui->n1Glvl2->text().toInt(&ok) == 0){n1Glvl3 = 0;n2Dlvl3 =0;}
        else{ n1Glvl2 = ui->n1Glvl2->text().toInt(&ok);
              n1Glvl3 = ui->n1Glvl3->text().toInt(&ok);
              n2Dlvl3 = ui->n2Dlvl3->text().toInt(&ok);}

        if(ui->n2Dlvl2->text().toInt(&ok) == 0){n3Glvl3 = 0;n4Dlvl3 =0;}
        else{ n2Dlvl2 = ui->n2Dlvl2->text().toInt(&ok);
              n3Glvl3 = ui->n3Glvl3->text().toInt(&ok);
              n4Dlvl3 = ui->n4Dlvl3->text().toInt(&ok);}

        if(ui->n3Glvl2->text().toInt(&ok) == 0){n5Glvl3 = 0;n6Dlvl3 =0;}
        else{ n3Glvl2 = ui->n3Glvl2->text().toInt(&ok);
              n5Glvl3 = ui->n5Glvl3->text().toInt(&ok);
              n6Dlvl3 = ui->n6Dlvl3->text().toInt(&ok);}

        if(ui->n4Dlvl2->text().toInt(&ok) == 0){n7Glvl3 = 0;n8Dlvl3 =0;}
        else{ n4Dlvl2 = ui->n4Dlvl2->text().toInt(&ok);
              n7Glvl3 = ui->n7Glvl3->text().toInt(&ok);
              n8Dlvl3 = ui->n8Dlvl3->text().toInt(&ok);}

        if(ui->n5Glvl2->text().toInt(&ok) == 0){n9Glvl3 = 0;n10Dlvl3 =0;}
        else{ n5Glvl2 = ui->n5Glvl2->text().toInt(&ok);
              n9Glvl3 = ui->n9Glvl3->text().toInt(&ok);
              n10Dlvl3 = ui->n10Dlvl3->text().toInt(&ok);}

        if(ui->n6Dlvl2->text().toInt(&ok) == 0){n11Glvl3 = 0;n12Dlvl3 =0;}
        else{ n6Dlvl2 = ui->n6Dlvl2->text().toInt(&ok);
              n11Glvl3 = ui->n11Glvl3->text().toInt(&ok);
              n12Dlvl3 = ui->n12Dlvl3->text().toInt(&ok);}


    }
        //cache les saisie
        ui->nlvl0->hide();

        ui->n1Glvl1->hide();
        ui->n2Clvl1->hide();
        ui->n3Dlvl1->hide();

        ui->n1Glvl2->hide();
        ui->n2Dlvl2->hide();
        ui->n3Glvl2->hide();
        ui->n4Dlvl2->hide();
        ui->n5Glvl2->hide();
        ui->n6Dlvl2->hide();

        ui->n1Glvl3->hide();
        ui->n2Dlvl3->hide();
        ui->n3Glvl3->hide();
        ui->n4Dlvl3->hide();
        ui->n5Glvl3->hide();
        ui->n6Dlvl3->hide();
        ui->n7Glvl3->hide();
        ui->n8Dlvl3->hide();
        ui->n9Glvl3->hide();
        ui->n10Dlvl3->hide();
        ui->n11Glvl3->hide();
        ui->n12Dlvl3->hide();


        //montre les var de l'arbre
        ui->vlvl0->setText(QString::number(nlvl0));

        ui->v1Glvl1->setText(QString::number(n1Glvl1));
        ui->v2Clvl1->setText(QString::number(n2Clvl1));
        ui->v3Dlvl1->setText(QString::number(n3Dlvl1));

        ui->v1Glvl2->setText(QString::number(n1Glvl2));
        ui->v2Dlvl2->setText(QString::number(n2Dlvl2));
        ui->v3Glvl2->setText(QString::number(n3Glvl2));
        ui->v4Dlvl2->setText(QString::number(n4Dlvl2));
        ui->v5Glvl2->setText(QString::number(n5Glvl2));
        ui->v6Dlvl2->setText(QString::number(n6Dlvl2));

        ui->v1Glvl3->setText(QString::number(n1Glvl3));
        ui->v2Dlvl3->setText(QString::number(n2Dlvl3));
        ui->v3Glvl3->setText(QString::number(n3Glvl3));
        ui->v4Dlvl3->setText(QString::number(n4Dlvl3));
        ui->v5Glvl3->setText(QString::number(n5Glvl3));
        ui->v6Dlvl3->setText(QString::number(n6Dlvl3));
        ui->v7Glvl3->setText(QString::number(n7Glvl3));
        ui->v8Dlvl3->setText(QString::number(n8Dlvl3));
        ui->v9Glvl3->setText(QString::number(n9Glvl3));
        ui->v10Dlvl3->setText(QString::number(n10Dlvl3));
        ui->v11Glvl3->setText(QString::number(n11Glvl3));
        ui->v12Dlvl3->setText(QString::number(n12Dlvl3));


        ui->CreateLtree->setEnabled(false);
        ui->groupBox_5->setEnabled(true);
}


void CreateLitlleTree::on_pushButton_clicked()
{
   //methode parcours en largeur

    ui->label_5->setText( ui->vlvl0->text() + "," +  ui->v1Glvl1->text() + "," + ui->v2Clvl1->text() + "," + ui->v3Dlvl1->text() + "," +  ui->v1Glvl2->text() + "," + ui->v2Dlvl2->text() + "," +  ui->v3Glvl2->text() + ","
                        + ui->v4Dlvl2->text()+","+  ui->v5Glvl2->text()+","+  ui->v6Dlvl2->text()+","+  ui->v1Glvl3->text()+","+ ui->v2Dlvl3->text()+","+ ui->v3Glvl3->text()+","+  ui->v4Dlvl3->text()+ ","+
                          ui->v5Glvl3->text()+","+  ui->v6Dlvl3->text()+","+ ui->v7Glvl3->text()+","+  ui->v8Dlvl3->text()+","+  ui->v9Glvl3->text()+","+ ui->v10Dlvl3->text()+","+ ui->v11Glvl3->text()+","+
                          ui->v12Dlvl3->text());
}


void CreateLitlleTree::on_getPrefixe_clicked()
{
    //methode parcourd Préfixe
   //ui->label_5->setText( ui->vlvl0->text() +","+ui->v1Glvl1->text()+","+ ui->v1Glvl2->text()+","+ ui->v1Glvl3->text()+","+ )

}

