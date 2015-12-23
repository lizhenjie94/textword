#ifndef ASKFORNUM_H
#define ASKFORNUM_H

#include <QDialog>

namespace Ui {
class askfornum;
}

class askfornum : public QDialog
{
    Q_OBJECT

public:
    explicit askfornum(QWidget *parent = 0);
    ~askfornum();

private:
    Ui::askfornum *ui;

private slots:
    void on_LineEdit_textChanged();
};

#endif // ASKFORNUM_H
