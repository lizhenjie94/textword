#ifndef SOLVE_H
#define SOLVE_H

#include <QDialog>

namespace Ui {
class solve;
}

class solve : public QDialog
{
    Q_OBJECT

public:
    explicit solve(QWidget *parent = 0);
    ~solve();

private:
    Ui::solve *ui;
};

#endif // SOLVE_H
