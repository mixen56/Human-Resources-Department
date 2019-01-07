#include "_Worker_.h"
using namespace HRD;

typedef struct el_tab
{
	int chiper;
	Worker* descriptor;
};

typedef struct tab
{
	int n;
	el_tab* workers;
};
