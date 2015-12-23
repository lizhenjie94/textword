#include "usedatabase.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <ctime>


/*
 * 函数名：UseDatabase
 * 输入：QString what（what=new为新建的数据库，会新建表；否则不会）
 * 输出：无
 * 注意：无
 * 功能：准备数据库，（若为新建数据库，则新建表）
*/
UseDatabase::UseDatabase(QString what)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("test.db");
    db.open();
    if(what=="new")
    {
        db.exec("create table words("
                "spell varchar(20) primary key NOT NULL,"
                "meaning varchar(100) NOT NULL,"
                "cixing varchar(10) NOT NULL);");
    }
    db.close();
}/*UseDatabase*/


/*
 * 函数名：Insert
 * 输入：QString Spell（拼写）,QString Meaning（意思）,QString Cixing（词性）
 * 输出：成功或失败
 * 注意：无
 * 功能：插入单词信息
*/
QString UseDatabase::db_Insert(QString Spell,QString Meaning,QString Cixing)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("test.db");
    db.open();
    QSqlQuery query = db.exec("select * from words");
    while(query.next())
    {
        if(query.value("spell").toString() == Spell)
        {
            db.close();
            return "fail";
        }
    }
    db.exec("insert into words values('" + Spell + "','" + Meaning + "','" + Cixing +"')");
    db.close();
    return "succeed";
}/*Insert*/


/*
 * 函数名：Delete
 * 输入：QString Spell（拼写）
 * 输出：成功或失败
 * 注意：无
 * 功能：删除单词
*/
QString UseDatabase::db_Delete(QString Spell)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("test.db");
    db.open();
    QSqlQuery query = db.exec("select * from words");
    while(query.next())
    {
        if(query.value("spell").toString() == Spell)
        {
            db.exec("delete from words where spell = '" + Spell + "'");
            db.close();
            return "succeed";
        }
    }

    db.close();
    return "fail";
}


/*
 * 函数名：Update
 * 输入：QString Spell（拼写）,QString NewSpell（新拼写）,QString NewMeaning（新意思）,QString NewCixing（新词性）
 * 输出：成功或失败
 * 注意：若某项不更新，输入NULL
 * 功能：更新单词信息
*/
QString UseDatabase::db_Update(QString Spell,QString NewSpell,QString NewMeaning,QString NewCixing)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("test.db");
    db.open();
    QSqlQuery query = db.exec("select * from words");
    bool flag=false;
    while(query.next())
    {
        if(query.value("spell").toString() == Spell)
        {
            if(NewMeaning !=NULL)//更新meaning
            {
                query.exec("update words set meaning = '" + NewMeaning + "'");
                flag=true;
            }
            if(NewCixing!=NULL)//更新cixing
            {
                query.exec("update words set cixing = '" + NewCixing + "'");
                flag=true;
            }
            if(NewSpell!=NULL)//更新spell
            {
                query.exec("update words set spell = '" + NewSpell + "'");
                flag=true;
            }
            if(flag==true)
            {
                db.close();
                return "succeed";
            }
            else
            {
                db.close();
                return "NoRenewals";//没有更新
            }
        }
    }
    db.close();
    return "fail";
}/*Update*/



/*
 * 函数名：TextWords
 * 输入：QString n[][3]（空的数组，用于写入测试单词）,int number（测试单词数）
 * 输出：无
 * 注意：输入的QString n[][3]需要先分配内存，如QString (*n)[3]=new QString [1][3];
 * 功能：测试单词输出
*/
void UseDatabase::db_TextWords(QString n[][3],int number)
{
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("test.db");
    db.open();
    srand((int)time(NULL));
    int x=0;
    do
    {
        QSqlQuery query = db.exec("select * from words");
        int i = rand()%query.size()+1;
        for(int j=0;j<i;j++)
        {
            query.next();
        }
        n[x][0]= query.value("spell").toString();
        n[x][1]= query.value("meaning").toString();
        n[x][2]= query.value("cixing").toString();
        x++;
    }while(x<number);

    db.close();
}/*TextWords*/







