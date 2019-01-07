#ifndef _Worker_
#include <iostream>
#define _Worker_
#include <string>
#define nullptr NULL;


using namespace std;
namespace HRD
{
	class Unit;
	class Main_worker;

	class Worker
	{
	protected:
		string name;
		int year;
		string post;
		string educ;
		int salary;
		int type; //1+ - main, 0- - usual
	public:
		virtual Unit* get_Unit() = 0;
		virtual Worker* clone() const = 0;
		string getName() const { return name; }
		int getYear() const { return year; }
		string getEduc() const { return educ; }
		int info();
		int get_type();
		string get_post() const { return post; }
		Worker& ch_Post(char*);
		int getSalary() const { return salary; }
		Worker& ch_Salary(int);
		Main_worker* level_up(Unit*, Main_worker*);
	};
}
#endif
