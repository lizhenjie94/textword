#ifndef ENTRY_H
#define ENTRY_H

#include <QDialog>

namespace Ui {
class Entry;
}

class Entry : public QDialog
{
    Q_OBJECT

public:
    explicit Entry(QWidget *parent = 0);
    ~Entry();

private:
    Ui::Entry *ui;
};

#endif // ENTRY_H
