#include "score.h"
#include "ui_score.h"

score::score(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::score)
{
    ui->setupUi(this);

    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(openMain()));
    connect(ui->btnExit, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
}

score::~score()
{
    delete ui;
}

void score::openMain()
{
    MainWindow *w = new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}
