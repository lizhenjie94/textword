#include "solve.h"
#include "ui_solve.h"

solve::solve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solve)
{
    ui->setupUi(this);
}

solve::~solve()
{
    delete ui;
}
