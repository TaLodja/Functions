#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);  // Прототип функции: заполняет массив случайными числами
void Print(int arr[], const int n);  // Прототип функции: выводит массив на экран
void Sort(int arr[], const int n);  // Прототип функции: сортирует массив
int Sum(int arr[], const int n); // Прототип функции: возвращает сумму элементов массива
double Avg(int arr[], const int n); // Прототип функции: возвращает среднее арифметическое элементов массива
int MinValueIn(int arr[], const int n); // Прототип функции: возвращает минимальное значение в массиве
int MaxValueIn(int arr[], const int n); // Прототип функции: возвращает максимальное значение в массиве
void ShiftLeft(int arr[], const int n, const int shift); // Прототип функции: сдвигает массив на заданное число элементов влево
void ShiftRight(int arr[], const int n, const int shift); // Прототип функции: сдвигает массив на заданное число элементов вправо

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	FillRand(arr, n); //Заполнение массива случайными числами	
	Print(arr, n); //Вывод исходного массива на экран
	Sort(arr, n); // Сортировка массива
	Print(arr, n); // Вывод отсортированного массива на экран
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	
	cout << "\n\n\n" << endl;
	const int SIZE = 10;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	cout << "\n" << endl;
	
	Print(brr, SIZE);
	int shift;
	cout << "Введите колиество сдвигов: "; cin >> shift;
	ShiftLeft(brr, SIZE, shift);
	Print(brr, SIZE);
	cout << "\n" << endl;
	ShiftRight(brr, SIZE, shift);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n) //функция возвращает псевдослучайное число в диапазоне от 0 до 32 767.
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n) //функция выводит массив на экран
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n) //функция сортирует массив
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	/*int sum = Sum(arr, n);
	return (double)sum / n;*/
	return (double)Sum(arr, n) / n;
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void ShiftLeft(int arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
	/*int shift;
	cout << "Введите количество сдвигов влево: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[0];
		for (int j = 0; j < n-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[n - 1] = temp;
	}
	cout << "предыдущий массив после сдвига влево на " << shift << " элементов: " << endl;
	Print(arr, n);*/
}
void ShiftRight(int arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n-1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = buffer;
	}
	/*int shift;
	cout << "Введите количество сдвигов вправо: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[n-1];
		for (int j = n-1; j > 0; j--)
		{
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
	cout << "Предыдцщий массив после сдвига вправо на " << shift << " элементов: " << endl;;
	Print(arr, n);*/
}