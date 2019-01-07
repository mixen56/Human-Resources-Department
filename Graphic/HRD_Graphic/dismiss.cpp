#include "dismiss.h"
#include "ui_dismiss.h"
#include <QPixmap>

void full_combo_box(Ui::Dismiss::Ui_Dismiss* ui, Unit* unit)
{
    for (MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        if(!it->second->get_type())//выбор должен исключить начальников подразделения
            ui->comboBox->addItem(QString::number(it->first));
        if(it->second->get_type())
            full_combo_box(ui, it->second->get_Unit());
    }
}

Dismiss::Dismiss(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dismiss)
{
    ui->setupUi(this);
}

Dismiss::Dismiss(Unit* some) :
       ui(new Ui::Dismiss)
{
    ui->setupUi(this);
    unit = some;
    full_combo_box(ui, unit);
    QPixmap pix(":resources/img/danger.png");
    int w = ui->image->width();
    int h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Dismiss::~Dismiss()
{
    delete ui;
}

int Dismiss::on_push_dismiss_clicked()
{
    int chiphr;
    chiphr = ui->comboBox->currentText().toInt();
    unit->del(chiphr);
    mane->QWidget::close();
    QWidget::close();
    return 1;
}
