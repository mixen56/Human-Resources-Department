#ifndef _Unit_
//#include "Structs.h"
//#include <map>
#include "mymap.h"
#include "_Worker_.h"
//#include <iostream>
#define _Unit_

using namespace std;
using namespace HRD;
namespace HRD
{
	class Us_worker;
	class Main_worker;

	class Unit
	{
	private:
		string name;
		mymap <int, Worker*> tab;
	public:
		Unit() { ; }
		//Unit(const Unit&);
		Unit& setName(string nam) { name = nam; return *this; }
		Unit& add_worker(int, Worker*, string);
		Worker* add_unit(Worker*, Unit*, Main_worker* for_add);
		Worker* add_unit_trans(Worker*, Unit*, Main_worker* for_add);
		Worker* find(int chifr);
		Unit* find(string);
		Unit& del(int);
		string getName() { return name; }
		friend std::ostream & operator <<(std::ostream &, const Unit &);
		bool empty() { return tab.empty(); }
		Unit* backunit(Unit*);
		Worker* main(Unit*);
		int chifrr(Worker*, Unit*);
		virtual Unit *clone() const { return new Unit(*this); }
		int output(int);
	};

	class Main_worker : public Worker
	{
	private:
		Unit* boss;
	public:
		Main_worker() { type = 1; }
		Main_worker(string name, int year, string post, string educ, int salary, Unit*);
		virtual Main_worker *clone() const { return new Main_worker(*this); }
		friend Us_worker;
		friend Worker;
		Unit* get_Unit() { return boss; }
	};

	class Us_worker : public Worker
	{
	public:
		Us_worker() { type = 0; }
		Us_worker(string name, int year, string post, string educ, int salary);
		virtual Us_worker *clone() const { return new Us_worker(*this); }
		Us_worker(const Us_worker&);
		Main_worker level_up(Unit*);
		virtual Unit* get_Unit() { return nullptr; }
		Us_worker& operator=(Worker& v);
	};
}
#endif
