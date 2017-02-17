#include "sterling.h"
#include <iostream>
#include <iomanip>
using namespace std;

sterling make_sterling(int po, int sh, int pe)
{
	sterling temp;

	temp.pounds = po;
	temp.shillings = sh;
	temp.pence = pe;

	return temp;

}

sterling make_sterling(int pe)
{
	sterling temp;

	temp.pounds = pe / 240;
	pe %= 240;
	temp.shillings = pe / 12;
	temp.pence = pe % 12;

	return temp;
}

sterling add(sterling st1, sterling st2)
{
	int i1 = st1.pounds * 240 + st1.shillings * 12 + st1.pence;
	int i2 = st2.pounds * 240 + st2.shillings * 12 + st2.pence;

	return make_sterling(i1 + i2);
}

void print(sterling& st)
{
	cout << (char)156; cout << st.pounds << "." << st.shillings << "." << st.pence << endl;
}

void read(sterling* st)
{
	cout << "Enter Pounds:" << endl;
	cin >> st->pounds;

	cout << "Enter Shillings: " << endl;
	cin >> st->shillings;

	cout << "Enter Pence: " << endl;
	cin >> st->pence;
}



