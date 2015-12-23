#ifndef RENEW_H
#define RENEW_H

#include <QDialog>

namespace Ui {
class Renew;
}

class Renew : public QDialog
{
    Q_OBJECT

public:
    explicit Renew(QWidget *parent = 0);
    ~Renew();

public slots:
    void openRenewproperty();

private:
    Ui::Renew *ui;

private slots:
    void on_LineEdit_textChanged();
};

#endif // RENEW_H
