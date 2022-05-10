#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	double a = -0.6, b = 5.3; 
	double z, t;


	if (a < b)
		z = sqrt(abs(a * a - b * b));
	else
		z = 1 - 2 * cos(a) * sin(b);

	if (z < b)
		t = pow((z+a*a*b),1/3);
	else if (z == b)
		t = 1+log(z)+cos(a*a*b);
	else
		t = 1/(cos(z*a));

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "z = " << z << endl;
	cout << "t = " << t << endl;
}