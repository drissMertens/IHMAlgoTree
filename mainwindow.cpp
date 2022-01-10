#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createlitlletree.h"
#include"createbigtree.h"
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/Ltree.PNG")); // Icône de la fenêtre


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_closeBnt_clicked()
{
    close();
}


void MainWindow::on_createLittleTree_clicked()
{
    CreateLitlleTree litlleTree;
    litlleTree.setModal(true);
    litlleTree.exec();

}


void MainWindow::on_createBigTree_clicked()
{
    CreateBigTree bigTree;
    bigTree.setModal(true);
    bigTree.exec();

}

