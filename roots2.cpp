/*
*
* Lab #2 Solution: roots2.cpp
* Written by Jonathan Nielson on 1/26/2017
*
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double x1;
	double x2;
	double real;
	double imag;
	double dis;

	cout << "Please enter the first coefficienct of the quadratic equation: ";
	cin >> a;

	if (a == 0)
	{
		cout << "0 is not a valid value for a. Exiting the program..." << endl;
		exit(0);
	}

	cout << "Now, enter the second coefficient in the equation: ";
	cin >> b;

	cout << "Finally, enter the last coefficient in the equation: ";
	cin >> c;

	dis = (b*b - (4 * a*c));

	if (dis >= 0)
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

		cout << "The first root of the equation is " << x1 << " and the second root is " << x2 << endl;
	}

	else
	{
		real = (-b / (2 * a));
		imag = sqrt(-dis) / (2 * a);

		cout << "The first root, x1, of the equation is " << real << " + " << imag << "i" << endl;
		cout << "The second root, x2, of the equation is " << real << " - " << imag << "i" << endl;
	}

	

	
	return 0;
}