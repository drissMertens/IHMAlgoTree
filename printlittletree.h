#ifndef PRINTLITTLETREE_H
#define PRINTLITTLETREE_H

#include <QMainWindow>
#include"createlitlletree.h"

namespace Ui {
class PrintLittleTree;
}

class PrintLittleTree : public CreateLitlleTree
{
    Q_OBJECT

public:
    explicit PrintLittleTree(QWidget *parent = nullptr);
    ~PrintLittleTree();

private:
    Ui::PrintLittleTree *ui;
};

#endif // PRINTLITTLETREE_H
