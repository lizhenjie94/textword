#ifndef USEDATABASE_H
#define USEDATABASE_H
#include <QString>


class UseDatabase
{
public:
    UseDatabase(QString what);                                                          //what=new为新建
    QString db_Insert(QString Spell,QString Meaning,QString Cixing);                       //写入单词
    QString db_Delete(QString Spell);                                                      //删除单词
    QString db_Update(QString Spell,QString NewSpell,QString NewMeaning,QString NewCixing);//更新单词
    void db_TextWords(QString n[][3],int number);                                          //输出测试单词

};

#endif // USEDATABASE_H
