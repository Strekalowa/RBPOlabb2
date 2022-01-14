#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void f(const double& x, double& result);

int main()
{
	cout << "x: ";
	double x;
	cin >> x;
	double result;
	f(x, result);
	cout << "f(x): " << setprecision(5) << result << endl;
	system("pause");
	return 0;
}

void f(const double& x, double& result)
{
	result = (4 - x * x) / 2;
}