#ifndef OUTPUT_H
#define OUTPUT_H

#include <QWidget>
#include "_Unit_.h"
//#include "mainwindow.h"
#include "ui_output.h"

namespace Ui {
class Output;
}

class Output : public QWidget
{
    Q_OBJECT

public:
    explicit Output(QWidget *parent = nullptr);
    Output(Unit*);
    //void setObject(MainWindow* some) {mane = some;}
    void full_tree();
    void full_tree(Unit*, QTreeWidgetItem*);
    ~Output();

private slots:
    void on_push_close_clicked();

private:
    Ui::Output *ui;
    Unit* unit;

};

#endif // OUTPUT_H
