#include "mainwindow.h"
#include <QApplication>
#include <usedatabase.h>
#include <QSqlDatabase>
#include <QDebug>
#include "words.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase::addDatabase("QSQLITE");
    words w;
    w.show();
    //UseDatabase Word("old");

    return a.exec();
}
/*
    QSqlQuery quer = db.exec("select * from words order by spell");
    while(quer.next())
    {
        qDebug() << quer.value("spell").toString()
                 << quer.value("meaning").toString()
                 << quer.value("cixing").toString();
    }
*/
