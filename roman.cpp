#include <iostream>

using namespace std;

struct roman
{
	int digit;
	int palm;
	int cubit;

};

roman make_Roman(int di, int pa, int cu);
roman make_Roman(int di);
roman add(roman ro1, roman ro2);
void print(roman& ro);

roman make_Roman(int di, int pa, int cu)
{
	roman length;

	length.digit = di;
	length.palm = pa;
	length.cubit = cu;

	return length;
}

roman make_Roman(int di)
{
	roman length;

	length.cubit = di / 24;
	di %= 24;
	length.palm = di / 4;
	length.digit = di % 4;

	return length;
}

roman add(roman ro1, roman ro2)
{
	int i1 = ro1.cubit * 24 + ro1.palm * 4 + ro1.digit;
	int i2 = ro2.cubit * 24 + ro2.palm * 4 + ro2.digit;

	return make_Roman(i1 + i2);
}

void print(roman& ro)
{
	cout << ro.cubit << " cubits, " << ro.palm << " palms, and " << ro.digit << " digits." << endl;
}

void read(roman* ro)
{
	cout << "Enter cubits:" << endl;
	cin >> ro->cubit;

	cout << "Enter palms:" << endl;
	cin >> ro->palm;

	cout << "Enter digits:" << endl;
	cin >> ro->digit;
}

/*int main()
{
	roman ro1;
	read(&ro1);

	roman ro2;
	read(&ro2);

	roman ro3 = add(ro1, ro2);
	print(ro3);

	return 0;
}*/