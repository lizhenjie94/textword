#ifndef SCORE_H
#define SCORE_H

#include <QDialog>

namespace Ui {
class score;
}

class score : public QDialog
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = 0);
    ~score();

private:
    Ui::score *ui;
};

#endif // SCORE_H
