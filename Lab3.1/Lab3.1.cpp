#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double a;
	double y;
	double b;

	cout << "x = "; cin >> x;

	a = ((2 + x)/pow(x, 2))+1;


	if (x < 0)
		b = pow(x, 3) - 2*pow(x, 4);
	if (x >= 0 && x <= 2)
		b = pow(abs(x) + exp(x), 3);
	if (x > 2)
		b = 4 * cos(pow(x, 2) - 2);

	y = a + b;

	cout << endl;
	cout << "1) y = " << y << endl;

	if (x < 0)
		b = pow(x, 3) - 2 * pow(x, 4);
	else
		if (x >= 0 && x <= 2)
			b = pow(abs(x) + exp(x), 3);
		else
			b = 4 * cos(pow(x, 2) - 2);
	y = a + b;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}