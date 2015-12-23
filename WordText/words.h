#ifndef WORDS_H
#define WORDS_H

#include <QDialog>

namespace Ui {
class words;
}

class words : public QDialog
{
    Q_OBJECT

public:
    explicit words(QWidget *parent = 0);
    ~words();

private:
    Ui::words *ui;
};

#endif // WORDS_H
