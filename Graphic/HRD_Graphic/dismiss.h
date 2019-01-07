#ifndef DISMISS_H
#define DISMISS_H

#include <QWidget>
#include "_Unit_.h"
#include "output.h"

namespace Ui {
class Dismiss;
}

class Dismiss : public QWidget
{
    Q_OBJECT

public:
    explicit Dismiss(QWidget *parent = nullptr);
    Dismiss(Unit*);
    void setObject(Output* some){mane = some;}
    ~Dismiss();

private slots:
    int on_push_dismiss_clicked();

private:
    Ui::Dismiss *ui;
    Unit* unit;
    Output* mane;
};

#endif // DISMISS_H
