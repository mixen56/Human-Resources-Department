#ifndef ENTER_NAME_H
#define ENTER_NAME_H

#include <QWidget>
#include "_Unit_.h"
#include "mainwindow.h"

namespace Ui {
class Enter_Name;
}

class Enter_Name : public QWidget
{
    Q_OBJECT

public:
    explicit Enter_Name(QWidget *parent = nullptr);
    ~Enter_Name();
    void setptr(Unit* some) {ptr = some;}
    void setObject(MainWindow* some){mane = some;}

private slots:
    void on_setnameofunit_clicked();

private:
    Ui::Enter_Name *ui;
    Unit* ptr;
    MainWindow* mane;
};

#endif // ENTER_NAME_H
