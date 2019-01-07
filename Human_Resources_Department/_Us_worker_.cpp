#include "_Unit_.h"

using namespace std;
namespace HRD
{
	Us_worker::Us_worker(string name1, int year1, string post1, string educ1, int salary1)
	{
		name = name1;
		post = post1;
		educ = educ1;
		year = year1;
		salary = salary1;
		type = 0;
	}

	Us_worker::Us_worker(const Us_worker& st)
	{
		name = st.name;
		post = st.post;
		educ = st.educ;
		year = st.getYear();
		salary = st.getSalary();
		type = 0;
	}

	Main_worker Us_worker::level_up(Unit* up)
	{
		return Main_worker(name, year, post, educ, salary, up);
	}

	Us_worker& Us_worker::operator=(Worker& v)
	{
		name = v.getName();
		post = v.get_post();
		educ = v.getEduc();
		year = v.getYear();
		salary = v.getSalary();
		type = 0;
		return *this;
	}
}