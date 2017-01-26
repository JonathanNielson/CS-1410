/*
*
* Solution to Programming Test #1
* Written by Jonathan Nielson on 1/25/2017
*
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P;
	double i;
	double g;
	double n;
	double F;

	cout << "First off, please enter a value for P:" << endl;
	cin >> P;

	cout << "Second, please enter a value for i:" << endl;
	cin >> i;

	cout << "Now enter a value for g:" << endl;
	cin >> g;

	cout << "Finally, please enter a value for n:" << endl;
	cin >> n;

	F = P * ((1 - pow((1 + g), n) * pow((1 + i), n)) / (i - g));

	cout << "Based on the provided numbers, the value of F is: " << F << endl;

	return 0;
}