#ifndef DELETE_H
#define DELETE_H

#include <QDialog>

namespace Ui {
class Delete;
}

class Delete : public QDialog
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = 0);
    ~Delete();

private:
    Ui::Delete *ui;

private slots:
    void on_LineEdit_textChanged();
};

#endif // DELETE_H
