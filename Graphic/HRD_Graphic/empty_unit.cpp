#include "empty_unit.h"
#include "ui_empty_unit.h"

Empty_unit::Empty_unit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Empty_unit)
{
    ui->setupUi(this);
}

Empty_unit::~Empty_unit()
{
    delete ui;
}

void Empty_unit::on_pushButton_clicked()
{
    QWidget::close();
    mane->show();
}
