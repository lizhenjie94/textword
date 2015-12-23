#include "anwser.h"
#include "ui_anwser.h"

anwser::anwser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::anwser)
{
    ui->setupUi(this);
}

anwser::~anwser()
{
    delete ui;
}
