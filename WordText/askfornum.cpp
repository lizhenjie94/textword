#include "askfornum.h"
#include "ui_askfornum.h"

#include <QPushButton>
#include <QRegExpValidator>

askfornum::askfornum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::askfornum)
{
    ui->setupUi(this);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    QRegExp regExp("[1-9][0-9]{1,2}");
    ui->lineEdit->setValidator(new QRegExpsetValidator(redExp,this));

    connect(buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
    connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));
}

void askfornum::on_LineEdit_textChanged()
{
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(LineEdit->hasAcceptableInput());
}

askfornum::~askfornum()
{
    delete ui;
}
