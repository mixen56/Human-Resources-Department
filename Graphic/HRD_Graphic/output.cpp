#include "output.h"
#include "ui_output.h"

void Output::full_tree()
{
    for(MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        QTreeWidgetItem *topLevel = new QTreeWidgetItem(ui->treeWidget);
        ui->treeWidget->addTopLevelItem(topLevel);
        topLevel->setText(0, QString::number(it->first));
        topLevel->setText(1, QString::fromStdString(it->second->getName()));
        topLevel->setText(2, QString::number(it->second->getYear()));
        topLevel->setText(3, QString::fromStdString(it->second->getEduc()));
        topLevel->setText(4, QString::fromStdString(it->second->get_post()));
        topLevel->setText(5, QString::number(it->second->getSalary()));
        if(it->second->get_type())
        {
            topLevel->setText(6, QString::fromStdString(it->second->get_Unit()->getName()));
            full_tree(it->second->get_Unit(), topLevel);
        }
    }
}

void Output::full_tree(Unit* corp, QTreeWidgetItem* batya)
{
    for(MyIterator<int, Worker*> it = corp->start(); it != corp->finish(); ++it)
    {
        QTreeWidgetItem *topLevel = new QTreeWidgetItem(batya);
        //ui->treeWidget->addTopLevelItem(batya);
        topLevel->setText(0, QString::number(it->first));
        topLevel->setText(1, QString::fromStdString(it->second->getName()));
        topLevel->setText(2, QString::number(it->second->getYear()));
        topLevel->setText(3, QString::fromStdString(it->second->getEduc()));
        topLevel->setText(4, QString::fromStdString(it->second->get_post()));
        topLevel->setText(5, QString::number(it->second->getSalary()));
        if(it->second->get_type())
        {
            topLevel->setText(6, QString::fromStdString(it->second->get_Unit()->getName()));
            full_tree(it->second->get_Unit(), topLevel);
        }

    }
}

Output::Output(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Output)
{
    ui->setupUi(this);
}

Output::Output(Unit* some) :
    ui(new Ui::Output)
{
    ui->setupUi(this);
    unit = some;
    full_tree();
}

Output::~Output()
{
    delete ui;
}

void Output::on_push_close_clicked()
{
    //mane->close_output();
    QWidget::close();
}
