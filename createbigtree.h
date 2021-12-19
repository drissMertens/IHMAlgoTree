#ifndef CREATEBIGTREE_H
#define CREATEBIGTREE_H

#include <QDialog>

namespace Ui {
class CreateBigTree;
}

class CreateBigTree : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBigTree(QWidget *parent = nullptr);
    ~CreateBigTree();

private slots:
    void on_closeBnt_clicked();

    void on_createBtree_clicked();

private:
    Ui::CreateBigTree *ui;
};

#endif // CREATEBIGTREE_H
