#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QMainWindow>
#include "_Unit_.h"

namespace Ui {
class WorkWindow;
}

class WorkWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkWindow(QWidget *parent = nullptr);
    ~WorkWindow();


private slots:
    void on_exit_clicked();

    void on_setname_clicked();

private:
    Ui::WorkWindow *ui;
    Unit* ptr;
};

#endif // WORKWINDOW_H
