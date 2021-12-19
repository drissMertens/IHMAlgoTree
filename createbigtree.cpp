#include "createbigtree.h"
#include "ui_createbigtree.h"

CreateBigTree::CreateBigTree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBigTree)
{
    ui->setupUi(this);
}

CreateBigTree::~CreateBigTree()
{
    delete ui;
}

void CreateBigTree::on_closeBnt_clicked()
{
    close();
}


void CreateBigTree::on_createBtree_clicked()
{

}

