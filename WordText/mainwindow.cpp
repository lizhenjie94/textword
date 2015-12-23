#include "mainwindow.h"
#include <QLibrary>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::Addword()
{

}


MainWindow::~MainWindow()
{
    delete ui;
}
