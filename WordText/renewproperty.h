#ifndef RENEWPROPERTY_H
#define RENEWPROPERTY_H

#include <QDialog>

namespace Ui {
class RenewProperty;
}

class RenewProperty : public QDialog
{
    Q_OBJECT

public:
    explicit RenewProperty(QWidget *parent = 0);
    ~RenewProperty();

private:
    Ui::RenewProperty *ui;
};

#endif // RENEWPROPERTY_H
