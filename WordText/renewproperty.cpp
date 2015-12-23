#include "renewproperty.h"
#include "ui_renewproperty.h"

RenewProperty::RenewProperty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenewProperty)
{
    ui->setupUi(this);

    connect(ui->btnCancel, SIGNAL(clicked(bool)), this, SLOT(close()));
}

RenewProperty::~RenewProperty()
{
    delete ui;
}
