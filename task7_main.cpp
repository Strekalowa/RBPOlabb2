#include <iostream>
#include <iomanip>

using namespace std;
void f();
double x;
double result;
void main()
{
	printf(" x:");
	scanf("%lf", &x);
	f();
	printf("Значение функции при пользовательском значении x = %.4lf, равна %.4f\n", x, result);
}
