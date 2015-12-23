#ifndef ANWSER_H
#define ANWSER_H

#include <QDialog>

namespace Ui {
class anwser;
}

class anwser : public QDialog
{
    Q_OBJECT

public:
    explicit anwser(QWidget *parent = 0);
    ~anwser();

private:
    Ui::anwser *ui;
};

#endif // ANWSER_H
