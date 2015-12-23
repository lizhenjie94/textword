#include "entry.h"
#include "ui_entry.h"

Entry::Entry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entry)
{
    ui->setupUi(this);
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(close()));
}

Entry::~Entry()
{
    delete ui;
}
