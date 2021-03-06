// Human_Resources_Department.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "_Unit_.h"
#include "_Worker_.h"
#include <iostream>
#include <stdio.h>

using namespace HRD;
using namespace std;

const char *MENU[] = { "0. Quit", "1. Recruit employee" , "2. Transfer of an employee to another post", "3. Dismiss employee", "4. Show list of a unit" };
const int NOP = sizeof(MENU) / sizeof(MENU[0]);

string getString(string* some)
{
	const char* emrg = " ";
	do
	{
		cout << emrg;
		getline(cin, *some);
		emrg = "Repeat enter, please:";
	} while (!cin.good());
	return *some;
}

/*int getInt(int *add)
{
	int n = 0;
	do
	{
		n = scanf_s("%d", add);
		if (n == 0)
		{
			printf("ERROR: Enter integer.\n");
			scanf_s("%*c[^\n]");
		}
	} while (n == 0);
	if (n > 0) scanf_s("%*c");
	return n < 0 ? 0 : 1;
}*/

int get_Int(int *some)
{
	const char* emrg = " ";
	do
	{
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(100, '\n');
		}
		cout << emrg << endl;
		cin >> *some;
		emrg = "Repeat enter, please";
	} while (!cin.good());
	cin.ignore();
	return *some;
}

int getYear(int *some)
{
	const char* emrg = " ";
	do
	{
		cout << emrg << endl;
		cout << "Enter birth's year of employee, please:" << endl;
		*some = get_Int(some);
		emrg = "Impossible, repeat please";
	} while (*some < 1800);
	return *some;
}

int get_Salary(int *some)
{
	const char* emrg = " ";
	do
	{
		cout << emrg << endl;
		cout << "Enter salary of employee, please:" << endl;
		*some = get_Int(some);
		emrg = "Impossible, repeat please";
	} while (*some < 0);
	return *some;
}

int dialog()
{
	int res;
	int i;
	do {
		std::cout << "MENU: \n" << std::endl;
		for (i = 0; i < NOP; i++)
			puts(MENU[i]);
		printf("Choose an option: \n");
        if (!get_Int(&res)) res = 0;
		if (res > NOP || res < 0) printf("Please, choose from given options!\n");
	} while (res > NOP || res < 0);
	return res;
}

Unit* recruit(Unit *unit)
{
	Main_worker for_add;
	int ans;
	Unit nev;
	string new_comp;
	const char* emrg = " ";
	do
	{
		cout << emrg << endl;
		cout << "Create a new unit? This worker will be a chief of a new unit!\n Enter 1 for positive answer, and 0 for negative" << endl;
		ans = get_Int(&ans);
		emrg = "Repeat enter, please";
	} while (ans != 0 && ans != 1);
	emrg = " ";

	static string aim_nam;
	static string nam, pos, edu;
	int salar, yea, chifr;

	cout << "Enter employee's name:" << endl;
	nam = getString(&nam);
	yea = getYear(&yea);
	cout << "Enter employee's post:" << endl;
	pos = getString(&pos);
	cout << "Enter employee's education:" << endl;
	edu = getString(&edu);
	salar = get_Salary(&salar);
	Us_worker n_w(nam, yea, pos, edu, salar);
	/*do
	{
		chifr = rand() % 10000;
	} while (unit->find(chifr));*/

	if (ans == 1)
	{
		do
		{
			chifr = rand() % 10000 + 11000;
		} while (unit->find(chifr));

		cout << "New employee will be a head of this unit" << endl;
		cout << "Enter name of a new unit" << endl;
		new_comp = getString(&new_comp);
		nev = nev.setName(new_comp);
		do
		{
			cout << emrg << endl;
			cout << "Enter name of unit, where you want add a new employee" << endl;
			aim_nam = getString(&aim_nam);
			emrg = "nonexisting unit";
		} while (!unit->find(aim_nam));
		emrg = " ";
		unit->add_worker(chifr, unit->add_unit(&n_w, &nev, &for_add), aim_nam);
	}
	else
	{
		//cout << "Enter name of unit, where you want add a new employee" << endl;
		do
		{
			chifr = rand() % 10000;
		} while (unit->find(chifr));
		do
		{
			cout << emrg << endl;
			cout << "Enter name of unit, where you want add a new employee" << endl;
			aim_nam = getString(&aim_nam);
			emrg = "nonexisting unit";
		} while (!unit->find(aim_nam));
		emrg = " ";
		unit->add_worker(chifr, &n_w, aim_nam);
	}
	return unit;
}

Unit* levelup_leveldown(Unit *unit)
{
	if (unit->empty())
	{
		cout << "Unit is empty" << endl;
		return unit;
	}
	Main_worker for_add;
	Unit* main_unit = nullptr; //указатель на структуру, где выбранный работник босс, если босс
	Worker* worker; //выбранный работник по введенному шифру
	Worker* new_main_worker; //новый будущий главный работник через баз.класс
	Us_worker new_main_us_worker; //преобразованный в обычного работника новый будуший из базового
	Unit new_unit; // новый юнит
	string aim_nam, new_comp; //имена, в какой юнит добавляется сотрудник и нового юнит
	Unit* old_for_new_unit;// юнит, где теперь новый начальник
	string old_for_new;//название юнита выше
	Worker* ma_work;//начальник выбранного юнита, когда ищется начальник
	Us_worker ma_worker; //начальник выбранного юнита, когда ищется начальник, добавляется в мап как обычный сотрудник
	Worker* old_main; // старый начальник aim_nam пункта 3 безщ создания юнита
	Us_worker old_mainer; // преобразованный выше
	int chiphr, type, sec_chiphr;
	int ans;
	const char* emrg = " ";

	do
	{
		cout << emrg << endl;
		cout << "Enter chipher of emplyee" << endl;
		chiphr = get_Int(&chiphr);
		worker = unit->find(chiphr);
		emrg = "Nonexistent chipher, repeat";
	} while (!worker);
	emrg = " ";

	type = worker->get_type();
	if (type)
	{
		main_unit = worker->get_Unit();
	}
	Us_worker u_worker(worker->getName(), worker->getYear(), worker->get_post(), worker->getEduc(), worker->getSalary()); //преобразованная копия в обычного работника выбранного работника

	cout << "Create a new unit? This worker will be a chief of a new unit!\n Enter 1 for positive answer, and 0 for negative" << endl;
	do
	{
		cout << emrg << endl;
		cin >> ans;
		cin.clear();
		cin.ignore();
		emrg = "Repeat enter, please";
	} while (ans != 0 && ans != 1);
	emrg = " ";

	if (ans)
	{
		cout << "New employee will be a head of this unit" << endl;
		cout << "Enter name of unit, where you want add this employee" << endl;
		do
		{
			cout << emrg << endl;
			aim_nam = getString(&aim_nam);
			emrg = "This unit doesn't exist, repeat, please";
		} while (!unit->find(aim_nam));
		emrg = " ";
		cout << "Enter name of a new unit" << endl;
		new_comp = getString(&new_comp);
		new_unit = new_unit.setName(new_comp);

		do
		{
			sec_chiphr = rand() % 10000 + 11000;
		} while (unit->find(sec_chiphr));

		unit->add_worker(sec_chiphr, unit->add_unit(&u_worker, &new_unit, &for_add), aim_nam);
		//unit->add_unit(&u_worker, &new_unit, &for_add);

		if (type)//был выбран начальник, значит, нужно найти ему замену
		{
			int chip;
			do
			{
				cout << emrg << endl;
				cout << "Enter chipher of the new head of this unit: " << worker->get_Unit()->getName() << " (don't choose head of a unit)" << endl;
				chip = get_Int(&chip);
				new_main_worker = unit->find(chip);
				emrg = "Nonexistent chipher or head of a unit, repeat";
			} while (!new_main_worker || new_main_worker->get_type());
			emrg = " ";

			new_main_us_worker = *new_main_worker;
			do
			{
				sec_chiphr = rand() % 10000 + 11000;
			} while (unit->find(sec_chiphr));
			//unit->add_unit(&new_main_us_worker, main_unit, &for_add);
			unit->add_worker(sec_chiphr, unit->add_unit_trans(&new_main_us_worker, main_unit, &for_add), unit->backunit(main_unit)->getName());
			unit->del(chip);
		}
		unit->del(chiphr);
	}
	else
	{
		cout << "Change type of employee? (1-yes, 0-no)" << endl;
		do
		{
			cout << emrg << endl;
			ans = get_Int(&ans);
			if (!cin.good())
			{
				cin.clear();
				cin.ignore();
			}
			emrg = "Incorrect enter, repeat";
		} while (ans != 1 && ans != 0);
		emrg = " ";
		if (ans)//поменять тип работника
		{
			if (type)//если главный
			{
				cout << "Enter unit for transfering of an employee" << endl;
				do
				{
					cout << emrg << endl;
					aim_nam = getString(&aim_nam);
					if (!cin.good())
					{
						cin.clear();
						cin.ignore();
					}
					emrg = "This unit doesn't exist, repeat, please";
				} while (!unit->find(aim_nam));
				emrg = " ";
				do
				{
					sec_chiphr = rand() % 10000;
				} while (unit->find(sec_chiphr));
				unit->add_worker(sec_chiphr, &u_worker, aim_nam);
				//unit->del(chiphr);
				int chip;
				cout << "Enter chipher of the new head of this unit (don't choose head of a unit)" << endl;
				do
				{
					cout << emrg << endl;
					chip = get_Int(&chip);
					new_main_worker = unit->find(chip);
					emrg = "Nonexistent chipher or head of a unit, repeat";
				} while (!new_main_worker || new_main_worker->get_type());
				emrg = " ";
				new_main_us_worker = *new_main_worker;

				do
				{
					sec_chiphr = rand() % 10000 + 11000;
				} while (unit->find(sec_chiphr));
				//unit->add_unit(&new_main_us_worker, main_unit, &for_add);
				unit->add_worker(sec_chiphr, unit->add_unit_trans(&new_main_us_worker, main_unit, &for_add), unit->backunit(main_unit)->getName());
				unit->del(chiphr);
				unit->del(chip);
			}
			else//если обычынй
			{
				cout << "Enter unit, where this worker will be cheaf " << endl;
				do
				{
					cout << emrg << endl;
					old_for_new = getString(&old_for_new);
					if (!cin.good())
					{
						cin.clear();
						cin.ignore();
					}
					emrg = "This unit doesn't exist or this unit can't have a chief, repeat, please";
					old_for_new_unit = unit->find(old_for_new);
				} while (!old_for_new_unit || (old_for_new_unit == unit));
				emrg = " ";
				ma_work = unit->main(old_for_new_unit);
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
				//unit->add_unit_trans(&u_worker, old_for_new_unit, &for_add);
			}
		}
		else//не менять тип работника
		{
			if (type)//если главный
			{
				cout << "Enter unit, where this worker will be cheaf" << endl;
				do
				{
					cout << emrg << endl;
					aim_nam = getString(&aim_nam);
					if (!cin.good())
					{
						cin.clear();
						cin.ignore();
					}
					emrg = "This unit doesn't exist or this unit can't have a chief, repeat, please";
					old_for_new_unit = unit->find(aim_nam);
				} while (!old_for_new_unit || (old_for_new_unit == unit));
				emrg = " ";
				cout << "Places of heads will be changed" << endl;

				do
				{
					sec_chiphr = rand() % 10000 + 11000;
				} while (unit->find(sec_chiphr));

				old_main = unit->main(old_for_new_unit);
				old_mainer = *old_main;
				unit->add_worker(sec_chiphr, unit->add_unit_trans(&old_mainer, worker->get_Unit(), &for_add), unit->backunit(worker->get_Unit())->getName());
				//unit->add_unit_trans(&old_mainer, worker->get_Unit(), &for_add);
				do
				{
					sec_chiphr = rand() % 10000 + 11000;
				} while (unit->find(sec_chiphr));

				unit->add_worker(sec_chiphr, unit->add_unit_trans(&u_worker, old_main->get_Unit(), &for_add), unit->backunit(old_main->get_Unit())->getName());
				//unit->add_unit_trans(&u_worker, old_main->get_Unit(), &for_add);
				unit->del(chiphr);
				unit->del(unit->chifrr(old_main, unit->backunit(old_main->get_Unit())));
			}
			else//если обычынй
			{
				cout << "Enter unit for transfering of an employee" << endl;
				do
				{
					cout << emrg << endl;
					aim_nam = getString(&aim_nam);
					if (!cin.good())
					{
						cin.clear();
						cin.ignore();
					}
					emrg = "This unit doesn't exist, repeat, please";
				} while (!unit->find(aim_nam));
				emrg = " ";
				do
				{
					sec_chiphr = rand() % 10000;
				} while (unit->find(sec_chiphr));
				unit->add_worker(sec_chiphr, &u_worker, aim_nam);
				unit->del(chiphr);
			}
		}
	}
	return unit;
}

Unit* dismiss(Unit* unit)
{
	int chiphr;
	const char* ermg = " ";
	if (unit->empty())
	{
		cout << "Unit is empty" << endl;
		return unit;
	}

	cout << "Enter chipher of employee for deismissing or 0 for cancel" << endl;
	do
	{
		cout << ermg << endl;
		chiphr = get_Int(&chiphr);
		ermg = "Choose existing chipher, you can't dismiss part of tree";
	} while ((!unit->find(chiphr) || (unit->find(chiphr))->get_type()) && chiphr);
	if (!chiphr)
	{
		cout << "you entered cancel" << endl;
		return unit;
	}
	unit->del(chiphr);
	return unit;
}

Unit* output(Unit* unit)
{
	unit->output(0);
	return unit;
}

Unit* (*fptr[])(Unit*) = { NULL, recruit, levelup_leveldown, dismiss, output };

int main()
{
	string nam;
	Unit corp;
	cout << "Enter name of your organisation, please" << endl;
	nam = getString(&nam);
	corp.setName(nam);
	int dr;
	while (dr = dialog())
		if (!fptr[dr](&corp))
			break;
	return 0;
}

