#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double V;
	double S;
	double r;
	double h;

	cout << "Please enter the radius of the cone: ";
	cin >> r;

	cout << "Now, enter the height of the cone: ";
	cin >> h;

	V = (M_PI*r*r*h) / 3.0;
	S = M_PI*r*r + M_PI*r*sqrt(r*r + h*h);

	cout << "The cone's volume is: " << V << endl;
	cout << "The cone's surface area is: " << S << endl;
	return 0;
}