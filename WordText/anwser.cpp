#include "anwser.h"
#include "ui_anwser.h"
#include "qsqltablemodel.h"
#include <QSqlQuery>
#include <QSqlDatabase>

anwser::anwser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::anwser)
{
    ui->setupUi(this);

    connect(ui->btnOK, SIGNAL(clicked(bool)), this, SLOT(close()));


    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("test.db");
    db.open();
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("words" );
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model-> select();
    ui->tableView->setModel(model);
    ui->tableView->show();
    db.close();
}

anwser::~anwser()
{
    delete ui;
}
