#ifndef CREATELITLLETREE_H
#define CREATELITLLETREE_H

#include <QDialog>

namespace Ui {
class CreateLitlleTree;
}

class CreateLitlleTree : public QDialog
{
    Q_OBJECT

public:
    explicit CreateLitlleTree(QWidget *parent = nullptr);
    ~CreateLitlleTree();

private slots:
    void on_closeBnt_clicked();

    void on_CreateLtree_clicked();

    void on_pushButton_clicked();

    void on_getPrefixe_clicked();

private:
    Ui::CreateLitlleTree *ui;
    int nlvl0;
    int n1Glvl1;   // == noeuds Gauche numero 1 du niveau 1
    int n2Clvl1;
    int n3Dlvl1;

    int n1Glvl2;
    int n2Dlvl2;
    int n3Glvl2;
    int n4Dlvl2;
    int n5Glvl2;
    int n6Dlvl2;

    int n1Glvl3;
    int n2Dlvl3;
    int n3Glvl3;
    int n4Dlvl3;
    int n5Glvl3;
    int n6Dlvl3;
    int n7Glvl3;
    int n8Dlvl3;
    int n9Glvl3;
    int n10Dlvl3;
    int n11Glvl3;
    int n12Dlvl3;
};

#endif // CREATELITLLETREE_H
