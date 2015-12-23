#include "text.h"
#include "ui_text.h"
#include "mainwindow.h"
#include "score.h"

text::text(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::text)
{
    ui->setupUi(this);

    connect(ui->btnOK, SIGNAL(clicked(bool)), this, SLOT(openScore()));
    connect(ui->btnCancel, SIGNAL(clicked(bool)), this, SLOT(openMain()));
}

text::~text()
{
    delete ui;
}

void text::openMain()
{
    MainWindow *w = new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}

void text::openScore()
{
    score *w = new score;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}
