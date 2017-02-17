#include "sterling.h"
#include <iostream>
using namespace std;

int main()
{
	sterling st;
	read(&st);

	sterling ts;
	read(&ts);

	sterling u = add(st, ts);
	print(u);

	return 0;

}