#include "entering_name_unit.h"
#include "ui_entering_name.h"

Entering_name_unit::Entering_name_unit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entering_name_unit)
{
    ui->setupUi(this);
}

Entering_name_unit::~Entering_name_unit()
{
    delete ui;
}

