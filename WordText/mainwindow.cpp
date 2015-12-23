#include "mainwindow.h"
#include <QLibrary>
// #include "ui_mainwindow.h"
#include "askfornum.h"
#include "solve.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnSolve, SIGNAL(clicked(bool)), this, SLOT(openSolve()));
    connect(ui->btnAskfornum, SIGNAL(clicked(bool)), this, SLOT(openAskfornum()));
}

void MainWindow::Addword()
{

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSolve()
{
    solve *w = new solve;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}

void MainWindow::openAskfornum()
{
    askfornum *w = new askfornum;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    close();
}
