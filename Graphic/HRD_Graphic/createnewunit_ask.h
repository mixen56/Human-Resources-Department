#ifndef CREATENEWUNIT_ASK_H
#define CREATENEWUNIT_ASK_H

#include <QWidget>
#include "_Unit_.h"
//#include "mainwindow.h"
#include "output.h"

namespace Ui {
class CreateNewUnit_Ask;
}

class CreateNewUnit_Ask : public QWidget
{
    Q_OBJECT

public:
    explicit CreateNewUnit_Ask(QWidget *parent = nullptr);
    CreateNewUnit_Ask(Unit* some);
    ~CreateNewUnit_Ask();
    void setptr(Unit* some){unit = some;}
    void setObject(Output* some){mane = some;}

private slots:
       bool on_add_worker_clicked();

       void on_create_unit_clicked();

       void on_not_create_unit_clicked();

private:
    Ui::CreateNewUnit_Ask *ui;
    Unit* unit;
    Output* mane;
};

#endif // CREATENEWUNIT_ASK_H
