#include "transfer_dialog.h"
#include "ui_transfer_dialog.h"
#include "empty_unit.h"

void full_combo_box(Ui::Transfer_dialog::Ui_Transfer_dialog* ui, Unit* unit)
{
    for (MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        ui->combo_chipher_first->addItem(QString::number(it->first));
        if(it->second->get_type())
        {
            full_combo_box(ui, it->second->get_Unit());
        }
    }
}

void Transfer_dialog::full_combo_box_new_chief(Ui::Transfer_dialog* ui, Unit* unit)
{
    for (MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        if((it->first != get_choos_chipher()) && !it->second->get_type())//выбор должен исключить выбранный шифр и начальников подразделения
            ui->combo_new_chief ->addItem(QString::number(it->first));
        if(it->second->get_type())
        {
            full_combo_box_new_chief(ui, it->second->get_Unit());
        }
    }
}

void full_combo_box_aim_unit(Ui::Transfer_dialog::Ui_Transfer_dialog* ui, Unit* unit)
{
    ui->combo_aim_unit->addItem(QString::fromStdString(unit->getName()));
    for (MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        if(it->second->get_type())
        {
            full_combo_box_aim_unit(ui, it->second->get_Unit());
        }
    }
}

void full_combo_box_aim_new_chief_unit(Ui::Transfer_dialog::Ui_Transfer_dialog* ui, Unit* unit, bool key)
{
    if(key)
         ui->combo_aim_new_chief->addItem(QString::fromStdString(unit->getName()));
    for (MyIterator<int, Worker*> it = unit->start(); it != unit->finish(); ++it)
    {
        if(it->second->get_type())
        {
           full_combo_box_aim_new_chief_unit(ui, it->second->get_Unit(), 1);
        }
    }
}

Transfer_dialog::Transfer_dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Transfer_dialog)
{
    ui->setupUi(this);

    full_combo_box(ui, unit);
    full_combo_box_aim_unit(ui, unit);
    full_combo_box_new_chief(ui, unit);
    full_combo_box_aim_new_chief_unit(ui, unit, 0);

    ui->check_change_type->hide();
    ui->radio_create_unit->hide();
    ui->radio_not_create_unit->hide();
    ui->label_info->hide();//информация
    ui->label_aim_unit->hide();//ввод целевого юнита
    ui->combo_aim_unit->hide();//ввод целевого юнита
    ui->label_new_unit->hide();//ввод нового юнита
    ui->line_new_unit->hide();//ввод нового юнита
    ui->label_new_chief->hide();//ввод шифра нового начальника отделения
    ui->combo_new_chief->hide();//ввод шифра нового начальника отделения
    ui->label_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->combo_aim_new_chief->hide();//юнит, где выбранный будет шефом

}

Transfer_dialog::Transfer_dialog(Unit* some) :
    ui(new Ui::Transfer_dialog)
{
    ui->setupUi(this);

    unit = some;
    full_combo_box(ui, unit);
    full_combo_box_aim_unit(ui, unit);
    full_combo_box_new_chief(ui, unit);
    full_combo_box_aim_new_chief_unit(ui, unit, 0);

    ui->check_change_type->hide();
    ui->radio_create_unit->hide();
    ui->radio_not_create_unit->hide();
    ui->label_info->hide();//информация
    ui->label_aim_unit->hide();//ввод целевого юнита
    ui->combo_aim_unit->hide();//ввод целевого юнита
    ui->label_new_unit->hide();//ввод нового юнита
    ui->line_new_unit->hide();//ввод нового юнита
    ui->label_new_chief->hide();//ввод шифра нового начальника отделения
    ui->combo_new_chief->hide();//ввод шифра нового начальника отделения
    ui->label_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->combo_aim_new_chief->hide();//юнит, где выбранный будет шефом
    menyat = false;
}

Transfer_dialog::~Transfer_dialog()
{
    delete ui;
}

int Transfer_dialog::on_Transfer_clicked()
{
    Main_worker for_add;
    Unit* main_unit; //��������� �� ���������, ��� ��������� �������� ����, ���� ����
    Worker* worker; //��������� �������� �� ���������� �����
    Worker* new_main_worker; //����� ������� ������� �������� ����� ���.�����
    Us_worker new_main_us_worker; //��������������� � �������� ��������� ����� ������� �� ��������
    Unit new_unit; // ����� ����
    string aim_nam, new_comp; //�����, � ����� ���� ����������� ��������� � ������ ����
    Unit* old_for_new_unit;// ����, ��� ������ ����� ���������
    string old_for_new;//�������� ����� ����
    Worker* ma_work;//��������� ���������� �����, ����� ������ ���������
    Us_worker ma_worker; //��������� ���������� �����, ����� ������ ���������, ����������� � ��� ��� ������� ���������
    Worker* old_main; // ������ ��������� aim_nam ������ 3 ���� �������� �����
    Us_worker old_mainer; // ��������������� ����
    int chiphr, sec_chiphr;

    chiphr = ui->combo_chipher_first->currentText().toInt();
    worker = unit->find(chiphr);

    if (glav)
    {
        main_unit = worker->get_Unit();
    }
    Us_worker u_worker(worker->getName(), worker->getYear(), worker->get_post(), worker->getEduc(), worker->getSalary()); //��������������� ����� � �������� ��������� ���������� ���������

    if(!ui->radio_create_unit && !ui->radio_not_create_unit)
    {
        ui->label_info->setText("Создать отдел?");
        return 0;
    }

    if (soz)
    {
        aim_nam = ui->combo_aim_unit->currentText().toStdString();
        new_comp = ui->line_new_unit->text().toStdString();
        new_unit = new_unit.setName(new_comp);

        do
        {
            sec_chiphr = rand() % 10000 + 11000;
        } while (unit->find(sec_chiphr));

        unit->add_worker(sec_chiphr, unit->add_unit(&u_worker, &new_unit, &for_add), aim_nam);

        if (glav)
        {
            int chip;
            chip = ui->combo_new_chief->currentText().toInt();
            new_main_worker = unit->find(chip);

            new_main_us_worker = *new_main_worker;
            do
            {
                sec_chiphr = rand() % 10000 + 11000;
            } while (unit->find(sec_chiphr));
            unit->del(chip);
            unit->add_worker(sec_chiphr, unit->add_unit_trans(&new_main_us_worker, main_unit, &for_add), unit->backunit(main_unit)->getName());

        }
        unit->del(chiphr);
    }
    else
    {
        if (menyat)
        {
            if (glav)
            {
                aim_nam = ui->combo_aim_unit->currentText().toStdString();
                do
                {
                    sec_chiphr = rand() % 10000;
                } while (unit->find(sec_chiphr));

                unit->add_worker(sec_chiphr, &u_worker, aim_nam);
                int chip;
                chip = ui->combo_new_chief->currentText().toInt();
                new_main_worker = unit->find(chip);
                new_main_us_worker = *new_main_worker;

                do
                {
                    sec_chiphr = rand() % 10000 + 11000;
                } while (unit->find(sec_chiphr));
                unit->add_worker(sec_chiphr, unit->add_unit_trans(&new_main_us_worker, main_unit, &for_add), unit->backunit(main_unit)->getName());
                unit->del(chiphr);
                unit->del(chip);
            }
            else
            {
                old_for_new = ui->combo_aim_new_chief->currentText().toStdString();
                old_for_new_unit = unit->find(old_for_new);

                ma_work = unit->main_chief(old_for_new_unit);
                ma_worker = *ma_work;
                do
                {
                    sec_chiphr = rand() % 10000;
                } while (unit->find(sec_chiphr));
                unit->add_worker(sec_chiphr, &ma_worker, unit->backunit(old_for_new_unit)->getName());
                do
                {
                    sec_chiphr = rand() % 10000 + 11000;
                } while (unit->find(sec_chiphr));

                unit->add_worker(sec_chiphr, unit->add_unit_trans(&u_worker, old_for_new_unit, &for_add), unit->backunit(old_for_new_unit)->getName());
                unit->del(unit->chifrr(ma_work, unit->backunit(old_for_new_unit)));
                unit->del(chiphr);
            }
        }
        else//не менять тип
        {
            if (glav)
            {
                aim_nam = ui->combo_aim_new_chief->currentText().toStdString();
                old_for_new_unit = unit->find(aim_nam);

                do
                {
                    sec_chiphr = rand() % 10000 + 11000;
                } while (unit->find(sec_chiphr));

                old_main = unit->main_chief(old_for_new_unit);
                old_mainer = *old_main;
                if(chiphr == unit->chifrr(old_main))
                    return 0;

                unit->add_worker(sec_chiphr, unit->add_unit_trans(&old_mainer, worker->get_Unit(), &for_add), unit->backunit(worker->get_Unit())->getName());
                do
                {
                    sec_chiphr = rand() % 10000 + 11000;
                } while (unit->find(sec_chiphr));

                unit->add_worker(sec_chiphr, unit->add_unit_trans(&u_worker, old_main->get_Unit(), &for_add), unit->backunit(old_main->get_Unit())->getName());
                unit->del(chiphr);
                unit->del(unit->chifrr(old_main, unit->backunit(old_main->get_Unit())));
            }
            else
            {
                aim_nam = ui->combo_aim_unit->currentText().toStdString();

                do
                {
                    sec_chiphr = rand() % 10000;
                } while (unit->find(sec_chiphr));
                unit->add_worker(sec_chiphr, &u_worker, aim_nam);
                unit->del(chiphr);
            }
        }
    }
    QWidget::close();
    mane->QWidget::close();
    return 1;
}


void Transfer_dialog::on_radio_create_unit_clicked()
{
    //прячем ненужное
    ui->label_new_chief->hide();//ввод шифра нового начальника отделения
    ui->combo_new_chief->hide();//ввод шифра нового начальника отделения
    ui->label_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->combo_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->check_change_type->hide();

    soz = 1;
    ui->label_info->setText("Выбранный работник будет начальником нового отдела");
    ui->label_info->show();//информация
    ui->label_aim_unit->show();//ввод целевого юнита
    ui->combo_aim_unit->show();//ввод целевого юнита
    ui->label_new_unit->show();//ввод нового юнита
    ui->line_new_unit->show();//ввод нового юнита

    if(glav)
    {
        ui->label_new_chief->show();//ввод шифра нового начальника отделения
        ui->combo_new_chief->show();//ввод шифра нового начальника отделения
    }
}

void Transfer_dialog::on_radio_not_create_unit_clicked()
{
    //прячем ненужное
    ui->label_new_unit->hide();//ввод нового юнита
    ui->line_new_unit->hide();//ввод нового юнита
    ui->label_aim_unit->hide();//ввод целевого юнита
    ui->combo_aim_unit->hide();//ввод целевого юнита
    ui->label_new_chief->hide();//ввод шифра нового начальника отделения
    ui->combo_new_chief->hide();//ввод шифра нового начальника отделения
    ui->label_info->hide();//места начальников поменяются
    ui->label_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->combo_aim_new_chief->hide();//юнит, где выбранный будет шефом
    //ui->check_change_type->setChecked(0);//добавляем чек-кнопку, очищаем
    ui->check_change_type->show();

    soz = 0;
    if(glav)
    {
        if(menyat)
        {
             ui->label_aim_unit->show();//ввод целевого юнита
             ui->combo_aim_unit->show();//ввод целевого юнита
             ui->label_new_chief->show();//ввод шифра нового начальника отделения
             ui->combo_new_chief->show();//ввод шифра нового начальника отделения
        }
        else
        {
            ui->label_info->setText("Места начальников поменяются");
            ui->label_info->show();//места начальников поменяются
            ui->label_aim_new_chief->show();//юнит, где выбранный будет шефом
            ui->combo_aim_new_chief->show();//юнит, где выбранный будет шефом
        }
    }
    else
    {
        if(menyat)
        {
            ui->label_aim_new_chief->show();//юнит, где выбранный будет шефом
            ui->combo_aim_new_chief->show();//юнит, где выбранный будет шефом
        }
        else
        {
            ui->label_aim_unit->show();//ввод целевого юнита
            ui->combo_aim_unit->show();//ввод целевого юнита
        }
    }
}

void Transfer_dialog::on_combo_chipher_first_activated(const QString &arg1)
{
    //прячем то, что должно открываться по мере заполнения анкеты
    ui->label_info->hide();//информация
    ui->label_aim_unit->hide();//ввод целевого юнита
    ui->combo_aim_unit->hide();//ввод целевого юнита
    ui->label_new_unit->hide();//ввод нового юнита
    ui->line_new_unit->hide();//ввод нового юнита
    ui->label_new_chief->hide();//ввод шифра нового начальника отделения
    ui->combo_new_chief->hide();//ввод шифра нового начальника отделения
    ui->label_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->combo_aim_new_chief->hide();//юнит, где выбранный будет шефом
    ui->check_change_type->hide();

    //очищаем радиокнопки
    ui->radio_create_unit->setChecked(0);
    ui->radio_not_create_unit->setChecked(0);
    //ui->check_change_type->setChecked(0);

    //включаем радиокнопки
    //ui->check_change_type->show();
    ui->radio_create_unit->show();
    ui->radio_not_create_unit->show();

    //запоминаем выбранный шифр, чтобы потом правильно заполнить комбобокс с выбором нового начальника
    choos_chipher = ui->combo_chipher_first->currentText().toInt();
    if(unit->find(choos_chipher)->get_type())//если выбран главный сотрудник
        glav = 1;
    else
    {//если не главный
        glav = 0;
    }
}

void Transfer_dialog::on_push_cancel_clicked()
{
    QWidget::close();
    mane->QWidget::close();
}

void Transfer_dialog::on_check_change_type_stateChanged(int arg1)
{
    if(menyat == true)
        menyat = false;
    else
    {
        menyat = true;
    }
    if(ui->radio_create_unit->isChecked())
        on_radio_create_unit_clicked();
    if(ui->radio_not_create_unit->isChecked())
        on_radio_not_create_unit_clicked();
}
