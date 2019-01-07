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
			throw exception("unit doesn't exist or this emloyee exist, addition is impossible");
		return *this;
	}

	Worker* Unit::add_unit(Worker* person, Unit* unit, Main_worker* for_add)
	{
		if (find(unit->name))
			throw exception("unit exists, addition is impossible");
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
		MyIterator<int, Worker*> it = tab.begin();
		for (it; it != tab.end(); ++it)
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
		MyIterator<int, Worker*> it = tab.begin();
		for (it; it != tab.end(); ++it)
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
		MyIterator<int, Worker*> it = tab.begin();
		for (it; it != tab.end(); ++it)
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
		MyIterator<int, Worker*> it = tab.begin();
		for (it; it != tab.end(); ++it)
		{
			if (it->second->get_type() == 1)
				if (it->second->get_Unit() == now)
					return this;
				else
					if ((it->second->get_Unit())->backunit(now))
						return (it->second->get_Unit())->backunit(now);
		}
		return nullptr;
	}

	Worker* Unit::main(Unit* naim)//определить начальнка юнита naim
	{
		MyIterator<int, Worker*> it = backunit(naim)->tab.begin();//ВЫЛЕТ
		for (it; it != backunit(naim)->tab.end(); ++it)
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
		MyIterator<int, Worker*> it = naim->tab.begin();
		for (it; it != naim->tab.end(); ++it)
		{
			if (it->second == some)
				return it->first;
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
		MyIterator<int, Worker*> it = st.tab.begin();
		for (it; it != st.tab.end(); ++it)
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
		MyIterator<int, Worker*> it = tab.begin();
		for (it; it != tab.end(); ++it)
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
