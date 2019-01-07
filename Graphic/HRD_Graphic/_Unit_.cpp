#include "_Unit_.h"


using namespace std;
namespace HRD
{
	/*Unit::Unit(const Unit& nw)
	{
		nw.name = name;
	}*/

	Unit& Unit::add_worker(int chifr, Worker* person, string unit)
	{
		Unit* place;
		Worker* worker;
		Worker* clone(person->clone());
		worker = find(chifr);
		place = find(unit); //возвращаться должен указатель на юнит
		if (place && !worker)
			place->tab.insert(pair <int, Worker*>(chifr, clone));
		else
            throw exception();
		return *this;
	}

	Worker* Unit::add_unit(Worker* person, Unit* unit, Main_worker* for_add)
	{
		if (find(unit->name))
            throw exception();
		else
		{
			person = person->level_up(unit->clone(), for_add);//делает обычного сотрудника главным в юните 
		}
		return person;
	}

	Worker* Unit::add_unit_trans(Worker* person, Unit* unit, Main_worker* for_add)
	{
		person = person->level_up(unit->clone(), for_add);//делает обычного сотрудника главным в юните 
		return person;
	}

	Worker* Unit::find(int chifr)
	{
        for (MyIterator<int, Worker*> it = tab.begin(); it != tab.end(); ++it)
		{
			if (it->first == chifr)
				return it->second;
			if (it->second->get_type() == 1)
				if ((it->second->get_Unit())->find(chifr))
					return (it->second->get_Unit())->find(chifr);
		}
		return nullptr;
	}

	Unit* Unit::find(string unit)
	{
		if (name == unit)
			return this;
        for (MyIterator<int, Worker*> it = tab.begin(); it != tab.end(); ++it)
		{
			Worker* man = it->second; //потом, возможно придется переделать без *
			if (man->get_type() == 1)
				if ((man->get_Unit())->find(unit))
					return (man->get_Unit())->find(unit);
		}
		return nullptr;
	}

	Unit& Unit::del(int chifr)
	{
        for (MyIterator<int, Worker*> it = tab.begin(); it != tab.end(); ++it)
		{
			if (it->first == chifr)
			{
				tab.erase(it);
				break;
			}
			Worker* worker = it->second;
			if (worker->get_type() == 1)
				(worker->get_Unit())->del(chifr);
		}
		return *this;
	}

	Unit* Unit::backunit(Unit* now)//юнит перед этим
	{
        for (MyIterator<int, Worker*> it = tab.begin(); it != tab.end(); ++it)
		{
			if (it->second->get_type() == 1)
            {
				if (it->second->get_Unit() == now)
					return this;
                else
                {
                    if ((it->second->get_Unit())->backunit(now))
                        return (it->second->get_Unit())->backunit(now);
                }
            }
        }
		return nullptr;
	}

    Worker* Unit::main_chief(Unit* naim)//определить начальнка юнита naim
	{
        for (MyIterator<int, Worker*> it = backunit(naim)->tab.begin(); it != backunit(naim)->tab.end(); ++it)
		{
			if (it->second->get_type())
			{
				if (it->second->get_Unit() == naim)
					return it->second;
			}
		}
		return nullptr;
	}

	int Unit::chifrr(Worker* some, Unit* naim)
	{
        for (MyIterator<int, Worker*> it = naim->tab.begin(); it != naim->tab.end(); ++it)
		{
			if (it->second == some)
				return it->first;
		}
		return 0;
	}

    int Unit::chifrr(Worker* some)
    {
        for (MyIterator<int, Worker*> it = tab.begin(); it != tab.end(); ++it)
        {
            if (it->second == some)
                return it->first;
            if(it->second->get_type())
                if(it->second->get_Unit()->chifrr(some))
                    return it->second->get_Unit()->chifrr(some);
        }
        return 0;
    }

	ostream & operator <<(std::ostream &s, const Unit &st)
	{
		cout << "Unit name: " << st.name << endl;
		if (st.tab.empty())
		{
			cout << "Table is empty" << endl;
			return s;
		}
        for (MyIterator<int, Worker*> it = st.tab.begin(); it != st.tab.end(); ++it)
		{
			cout << "chipher - " << it->first;
			it->second->info();
			if (it->second->get_type() == 1)
			{
				cout << "	" << *it->second->get_Unit() << endl;
			}
		}
		return s;
	}

	int Unit::output(int i)
	{
		//cout << endl;
		for (int a = 0; a < i; a++)
			cout << "     ";
		cout << "Unit name: " << name << endl;
		if (tab.empty())
		{
			for (int a = 0; a < i; a++)
				cout << "     ";
			cout << "Table is empty" << endl;
			return 0;
		}
        for (MyIterator<int, Worker*> it = tab.begin(); it != tab.end(); ++it)
		{
			for (int a = 0; a < i; a++)
				cout << "     ";
			cout << "chipher - " << it->first;
			it->second->info();
			i++;
			if (it->second->get_type() == 1)
			{
				it->second->get_Unit()->output(i);
			}
			i--;
		}
		return 1;
	}

}
/*
using namespace HRD;

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
}*/

