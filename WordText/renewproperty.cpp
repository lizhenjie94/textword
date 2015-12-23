#include "renewproperty.h"
#include "ui_renewproperty.h"

RenewProperty::RenewProperty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenewProperty)
{
    ui->setupUi(this);
}

RenewProperty::~RenewProperty()
{
    delete ui;
}
