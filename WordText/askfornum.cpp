#include "askfornum.h"
#include "ui_askfornum.h"

#include <QPushButton>
#include <QRegExpValidator>
#include "text.h"
#include "mainwindow.h"

askfornum::askfornum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::askfornum)
{
    ui->setupUi(this);
    /*
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    QRegExp regExp("[1-9][0-9]{1,2}");
    ui->lineEdit->setValidator(new QRegExpsetValidator(redExp,this));

    connect(buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
    connect(buttonBox,SIGNAL(rejected()),this,SLOT(reject()));
    */

    connect(ui->btnOK, SIGNAL(clicked(bool)), this, SLOT(openText()));
    connect(ui->btnCancel, SIGNAL(clicked(bool)), this, SLOT(openMain()));
}

void askfornum::on_LineEdit_textChanged()
{
   // ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(LineEdit->hasAcceptableInput());
}

askfornum::~askfornum()
{
    delete ui;
}

void askfornum::openText()
{
    text* w = new text;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}

void askfornum::openMain()
{
    MainWindow *w = new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}
