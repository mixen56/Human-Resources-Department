#include "createnewunit_ask.h"
#include "ui_createnewunit_ask.h"

void full_combo_box_aim_unit(Ui::CreateNewUnit_Ask::Ui_CreateNewUnit_Ask* ui, Unit* unit)
{
    ui->combo_old_unit->addItem(QString::fromStdString(unit->getName()));
    for (MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        if(it->second->get_type())
        {
            full_combo_box_aim_unit(ui, it->second->get_Unit());
        }
    }
}

CreateNewUnit_Ask::CreateNewUnit_Ask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateNewUnit_Ask)
{
    ui->setupUi(this);
    //full_combo_box_aim_unit(ui, unit);
}

CreateNewUnit_Ask::CreateNewUnit_Ask(Unit* some) :
    ui(new Ui::CreateNewUnit_Ask)
{
    ui->setupUi(this);
    unit = some;
    full_combo_box_aim_unit(ui, unit);
}

CreateNewUnit_Ask::~CreateNewUnit_Ask()
{
    delete ui;
}

bool CreateNewUnit_Ask::on_add_worker_clicked()
{
    Main_worker for_add;
    int ans;
    Unit nev;
    std::string new_comp;

    if(ui->create_unit->isChecked())
    {
        ui->label_emrg_create->setText("Обратите внимание, данный сотрудник будет главой нового отдела");
        ans = 1;
    }
    if(ui->not_create_unit->isChecked())
    {
        ui->label_emrg_create->setText("Не создавать новый отдел");
        ans = 0;
    }
    if(!ui->create_unit->isChecked() && !ui->not_create_unit->isChecked())
    {
        ui->label_emrg_create->setText("Выберите из представленных вариантов");
        return 0;
    }

    static std::string aim_nam;
    static std::string nam, pos, edu;
    int salar, yea, chifr;

    nam = ui->line_name->text().toStdString();
    yea = ui->spin_year->value();
    pos = ui->line_post->text().toStdString();
    edu = ui->line_educ->text().toStdString();
    salar = ui->spin_salary->value();

    aim_nam = ui->combo_old_unit->currentText().toStdString();
    if(!unit->find(aim_nam))
    {
        ui->emrg_old_unit->setText("nonexisting unit");
        return 0;
    }
    Us_worker n_w(nam, yea, pos, edu, salar);

    if (ans == 1)
    {
        do
        {
            chifr = rand() % 10000 + 11000;
        } while (unit->find(chifr));

        new_comp = ui->line_new_unit->text().toStdString();
        nev = nev.setName(new_comp);
        unit->add_worker(chifr, unit->add_unit(&n_w, &nev, &for_add), aim_nam);
    }
    else
    {
        do
        {
            chifr = rand() % 10000;
        } while (unit->find(chifr));
        unit->add_worker(chifr, &n_w, aim_nam);
    }

    mane->QWidget::close();
    QWidget::close();
    //mane->show();
    return 1;
}

void CreateNewUnit_Ask::on_create_unit_clicked()
{
    ui->label_emrg_create->setText("Обратите внмание, данный сотрудник будет главой нового отдела");
}

void CreateNewUnit_Ask::on_not_create_unit_clicked()
{
    ui->label_emrg_create->setText("Новый отдел создаваться не будет");
}
