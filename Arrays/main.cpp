#include "FillRand.h"
#include "UniqueRand.h"
#include "TemplatedArrayFunctions.h"
#include "TemplatedArrayFunctions.cpp"

void main()
{
	setlocale(LC_ALL, "");

	cout << "Одномерный массив с целочисленными значениями" << endl;

	cout << delimiter << endl;
	const int n = 10;
	int arr[n];
	//FillRand(arr, n); //Заполнение массива случайными числами	
	UniqueRand(arr, n); //Заполнение массива случайными уникальными числами	
	Print(arr, n); //Вывод исходного массива на экран
	Sort(arr, n); // Сортировка массива
	Print(arr, n); // Вывод отсортированного массива на экран
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(arr, n);
	/*int shift;
	cout << "Введите количество сдвигов: "; cin >> shift;
	ShiftLeft(arr, n, shift);
	cout << "Массив после " << shift << " сдвигов влево: " << endl;
	Print(arr, n);
	ShiftRight(arr, n, shift);
	cout << "Массив после " << shift << " сдвигов вправо (исходный массив): " << endl;
	Print(arr, n);*/
	cout << delimiter << endl;

	cout << "Одномерный массив с вещественными значениями" << endl;

	cout << delimiter << endl;
	const int SIZE = 10;
	double brr[SIZE];
	//FillRand(brr, SIZE);
	UniqueRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(brr, SIZE);
	/*int shift_d;
	cout << "Введите количество сдвигов: "; cin >> shift_d;
	ShiftLeft(brr, SIZE, shift_d);
	cout << "Массив после " << shift_d << " сдвигов влево: " << endl;
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, shift_d);
	cout << "Массив после " << shift_d << " сдвигов вправо (исходный массив): " << endl;
	Print(brr, SIZE);*/
	cout << delimiter << endl;

	cout << "Двумерный массив с целочисленными значениями" << endl;

	cout << delimiter << endl;
	int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	cout << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(i_arr_2, ROWS, COLS);
	/*int shift_2;
	cout << "Введите количество сдвигов: "; cin >> shift_2;
	ShiftLeft(i_arr_2, ROWS, COLS, shift_2);
	cout << "Массив после " << shift_2 << " сдвигов влево: " << endl;
	Print(i_arr_2, ROWS, COLS);
	ShiftRight(i_arr_2, ROWS, COLS, shift_2);
	cout << "Массив после " << shift_2 << " сдвигов вправо (исходный массив): " << endl;
	Print(i_arr_2, ROWS, COLS);*/
	cout << delimiter << endl;

	cout << "Двумерный массив с вещественными значениями" << endl;

	cout << delimiter << endl;
	double i_brr_2[ROWS][COLS];
	//FillRand(i_brr_2, ROWS, COLS);
	UniqueRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	Sort(i_brr_2, ROWS, COLS);
	cout << endl;
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(i_brr_2, ROWS, COLS);
	/*int shift_2_d;
	cout << "Введите количество сдвигов: "; cin >> shift_2_d;
	ShiftLeft(i_brr_2, ROWS, COLS, shift_2_d);
	cout << "Массив после " << shift_2_d << " сдвигов влево: " << endl;
	Print(i_brr_2, ROWS, COLS);
	ShiftRight(i_brr_2, ROWS, COLS, shift_2_d);
	cout << "Массив после " << shift_2_d << " сдвигов вправо (исходный массив): " << endl;
	Print(i_brr_2, ROWS, COLS);*/
}