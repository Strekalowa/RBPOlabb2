#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void f();

double x;
double result;

int main()
{
	cout << "x: ";
	cin >> x;
	f();
	cout << "f(x): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}

void f()
{
	result = (4 - x * x) / 2;
}