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

	cout << "Please enter the first coefficienct of the quadratic equation: ";
	cin >> a;

	cout << "Now, enter the second coefficient in the equation: ";
	cin >> b;

	cout << "Finally, enter the last coefficient in the equation: ";
	cin >> c;

	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

	cout << "The first root of the equation is " << x1 << " and the second root is " << x2;
	return 0;
}