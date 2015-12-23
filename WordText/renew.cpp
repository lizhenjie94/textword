#include "renew.h"
#include "ui_renew.h"

Renew::Renew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Renew)
{
    ui->setupUi(this);
    buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    QRegExp regExp("[A-Za-z]{1,10}");
    LineEdit->setValidator(new QRegExpsetValidator(redExp,this));

    connect(buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
    connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));
}

void Renew::on_LineEdit_textChanged()
{
    buttonBox->button(QDialogButtonBox::Ok)->setEnabled(LineEdit->hasAcceptableInput());
}

Renew::~Renew()
{
    delete ui;
}
