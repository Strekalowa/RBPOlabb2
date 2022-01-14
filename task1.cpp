

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "x: ";
	double x, o = 5;
	cin >> x;
	double f = (4 - x * x) / 2;
	double f2 = (4 - o * o) / 2;
	cout << "f(x): " << setprecision(5) << f << endl;
	cout << "f(x-const): " << setprecision(5) << f2 << endl;
	system("pause");
	return 0;


}