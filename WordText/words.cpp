#include "words.h"
#include "ui_words.h"

words::words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::words)
{
    ui->setupUi(this);
}

words::~words()
{
    delete ui;
}
