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
	printf("�������� ������� ��� ���������������� �������� x = %.4lf, ����� %.4f\n", x, result);
}
