#include <iostream>
using namespace std;

int Sum(int a=0, int b=0, int �=0);				// �������� ������� (���������� ������� - Function declaration)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a = 2; 
	int b = 3;
	int c = Sum(a, b, 11);				//����� ������� (������������� ������� - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << 4 << " + " << 5 << " = " << Sum(4, 5) << endl;
	cout << a << " - " << b << " = " << Difference(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a,b) << endl;
	cout << a << " / " << b << " = " << Quotient(a,b) << endl;
	cout << Sum() << endl;
}

int Sum(int a, int b, int c)		//���������� ������� (����������� ������� - Function Definition)
{
	int res = a + b + c;
	return res;
}

int Difference(int a, int b, int c) // Difference - ��������
{
	return a - b;
}

int Product(int a, int b) //Product - ������������
{
	return a * b;
}

double Quotient(int a, int b) //Quotient - �������
{
	return (double)a / b;
}