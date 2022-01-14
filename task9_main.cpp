#include "strekalova.h"

int main()
{
	cout << "x: ";
	cin >> strekalova::x;
	strekalova::f();
	cout << "f(x): " << setprecision(5) << strekalova::result << endl;
	system("pause");
	return 0;
}
