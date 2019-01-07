#include "_Unit_.h"

using namespace std;
namespace HRD
{
	Main_worker::Main_worker(string name1, int year1, string post1, string educ1, int salary1, Unit* up)
	{
		name = name1;
		post = post1;
		educ = educ1;
		year = year1;
		salary = salary1;
		type = 1;
		boss = up;
	}

	Main_worker* Worker::level_up(Unit* up, Main_worker *some)
	{
		some->boss = up;
		some->name = name;
		some->year = year;
		some->educ = educ;
		some->salary = salary;
		some->post = post;
		some->type = 1;
		return some;
	}
}