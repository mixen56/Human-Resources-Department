#ifndef EMPTY_UNIT_H
#define EMPTY_UNIT_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Empty_unit;
}

class Empty_unit : public QWidget
{
    Q_OBJECT

public:
    explicit Empty_unit(QWidget *parent = nullptr);
    ~Empty_unit();
    void setObject(MainWindow* some){mane = some;}

private slots:
    void on_pushButton_clicked();


private:
    Ui::Empty_unit *ui;
    MainWindow* mane;
};

#endif // EMPTY_UNIT_H
