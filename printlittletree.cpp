#include "printlittletree.h"
#include "ui_printlittletree.h"

PrintLittleTree::PrintLittleTree(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PrintLittleTree)
{
    ui->setupUi(this);
}

PrintLittleTree::~PrintLittleTree()
{
    delete ui;
}
