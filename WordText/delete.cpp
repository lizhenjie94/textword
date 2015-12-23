#include "delete.h"
#include "ui_delete.h"

Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
    buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    QRegExp regExp("[A-Za-z]{1,10}");
    LineEdit->setValidator(new QRegExpsetValidator(redExp,this));

    connect(buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
    connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));
}

void Delete::on_LineEdit_textChanged()
{
    buttonBox->button(QDialogButtonBox::Ok)->setEnabled(LineEdit->hasAcceptableInput());
}

Delete::~Delete()
{
    delete ui;
}
