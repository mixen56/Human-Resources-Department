#include "_Worker_.h"

using namespace std;
namespace HRD
{
	int Worker::info()
	{
		cout << ";Name - " << name;
		cout << "; Birth's year - " << year;
		cout << "; Post - " << post;
		cout << "; Education - " << educ;
		cout << "; Salary - " << salary;
		cout << "; Type - " << get_type() << endl;
		return 1;
	}

	int Worker::get_type()
	{
		if (type >= 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	Worker& Worker::ch_Post(char* new_post)
	{
		for (int i = 0; i < 50; ++i)
			post[i] = new_post[i];
		return *this;
	}

	Worker& Worker::ch_Salary(int new_salary)
	{
		salary = new_salary;
		return *this;
	}

}