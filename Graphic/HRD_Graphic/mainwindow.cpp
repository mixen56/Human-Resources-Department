#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "enter_name.h"
#include "createnewunit_ask.h"
#include "transfer_dialog.h"
#include "empty_unit.h"
#include "output.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
     ui->setupUi(this);
     close = nullptr;
     close_dis = nullptr;
     close_ask = nullptr;
     close_trans = nullptr;
    // QPixmap pix(":resources/img/unit.png");
    // int w = ui->label_img->width();
    // int h = ui->label_img->height();
    // ui->label_img->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_Label(QString str)
{
    ui->label->setText(str);
}

void MainWindow::on_enter_name_of_corp_clicked()
{
    Enter_Name *win = new Enter_Name;
    //win->setStyleSheet("QWidget { background-color: rgb(223,255,241); }");
    //w.setStyleSheet("QMainWindow { background-color: rgb(223,255,241); }");
    win->setptr(&corp);
    win->setObject(this);
    win->show();
    hide();
}

void MainWindow::on_add_clicked()
{
    Output* wind;
    wind = on_show_struct_clicked();
    if(close_ask != nullptr)
        close_ask->QWidget::close();
    CreateNewUnit_Ask *win = new CreateNewUnit_Ask(&corp);
    win->setObject(wind);
    close_ask = win;
    win->show();
}

int MainWindow::on_transfer_clicked()
{
    if (corp.empty())//если таблица пуста
    {
        Empty_unit *win = new Empty_unit;
        win->setObject(this);
        win->show();
        QWidget::close();
        return 0;
    }
    Output* wind;
    wind = on_show_struct_clicked();
    if(close_trans != nullptr)
        close_trans->QWidget::close();
    Transfer_dialog *win = new Transfer_dialog(&corp);
    win->setObject(wind);
    close_trans = win;
    win->show();
    return 1;
}

Output* MainWindow::on_show_struct_clicked()
{
    if(close != nullptr)
        close->QWidget::close();
    Output *win = new Output(&corp);
    close = win;
    //win->setObject(this);
    win->show();
    return win;
}

int MainWindow::on_dismiss_clicked()
{
    if (corp.empty())//если таблица пуста
    {
        Empty_unit *win = new Empty_unit;
        win->setObject(this);
        win->show();
        QWidget::close();
        return 0;
    }
    Output* wind;
    wind = on_show_struct_clicked();
    if(close_dis != nullptr)
        close_dis->QWidget::close();
    Dismiss *win = new Dismiss(&corp);
    win->setObject(wind);
    close_dis = win;
    win->show();
    return 1;
}
