#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include "_Unit_.h"
#include "output.h"
#include "dismiss.h"
#include "createnewunit_ask.h"
#include "transfer_dialog.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_Label(QString str);
    void set_name_unit(std::string some) {corp.setName(some);}


private slots:
    void on_enter_name_of_corp_clicked();

    void on_add_clicked();

    int on_transfer_clicked();

    Output* on_show_struct_clicked();

    int on_dismiss_clicked();

private:
    Ui::MainWindow *ui;
    Unit corp;
    Output* close;
    Dismiss* close_dis;
    CreateNewUnit_Ask* close_ask;
    Transfer_dialog* close_trans;
};

#endif // MAINWINDOW_H
