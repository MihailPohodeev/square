#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Input length of 3 sides of triangle : ";
	int a, b, c;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2.0;
	cout << "Square of the triangle with sides : " << a << ", " << b << ", " << c << " : " << sqrt (p * (p - a) * (p - b) * (p - c)) << '\n';
}
