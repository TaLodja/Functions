#include <iostream>
using namespace std;

int Sum(int a=0, int b=0, int с=0);				// Прототип функции (Объявление функции - Function declaration)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a = 2; 
	int b = 3;
	int c = Sum(a, b, 11);				//Вызов функции (Использование функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << 4 << " + " << 5 << " = " << Sum(4, 5) << endl;
	cout << a << " - " << b << " = " << Difference(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a,b) << endl;
	cout << a << " / " << b << " = " << Quotient(a,b) << endl;
	cout << Sum() << endl;
}

int Sum(int a, int b, int c)		//Реализация функции (определение функции - Function Definition)
{
	int res = a + b + c;
	return res;
}

int Difference(int a, int b, int c) // Difference - Разность
{
	return a - b;
}

int Product(int a, int b) //Product - Произведение
{
	return a * b;
}

double Quotient(int a, int b) //Quotient - Частное
{
	return (double)a / b;
}