#include "solve.h"
#include "ui_solve.h"
#include "delete.h"
#include "entry.h"
#include "renew.h"
#include "anwser.h"
#include "mainwindow.h"

solve::solve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solve)
{
    ui->setupUi(this);

    connect(ui->btnDelete, SIGNAL(clicked(bool)), this, SLOT(openDelete()));
    connect(ui->btnEntry, SIGNAL(clicked(bool)), this, SLOT(openEntry()));
    connect(ui->btnQuery, SIGNAL(clicked(bool)), this, SLOT(openQuery()));
    connect(ui->btnRenew_2, SIGNAL(clicked(bool)), this, SLOT(openRenew()));
    connect(ui->btnCancel, SIGNAL(clicked(bool)), this, SLOT(openMain()));
}

solve::~solve()
{
    delete ui;
}

void solve::openDelete()
{
    Delete *w = new Delete;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}

void solve::openEntry()
{
    Entry *w = new Entry;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}

void solve::openRenew()
{
    Renew *w = new Renew;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}

void solve::openQuery()
{
    anwser *w = new anwser;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}

void solve::openMain()
{
    MainWindow *w = new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}
