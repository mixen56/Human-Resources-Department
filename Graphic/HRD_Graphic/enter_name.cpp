#include "enter_name.h"
#include "ui_enter_name.h"

Enter_Name::Enter_Name(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Enter_Name)
{
    ui->setupUi(this);
}

Enter_Name::~Enter_Name()
{
    delete ui;
}

void Enter_Name::on_setnameofunit_clicked()
{
    ptr->setName(ui->enternameofunit->text().toStdString());
    mane->set_Label(QString::fromStdString(ptr->getName()));
    QWidget::close();
    mane->show();
}
