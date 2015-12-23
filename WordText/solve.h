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

public slots:
    void openDelete();
    void openEntry();
    void openRenew();
    void openQuery();
    void openMain();

private:
    Ui::solve *ui;
};

#endif // SOLVE_H
