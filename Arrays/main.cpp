#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "UniqueRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shift.h"

void main()
{
	setlocale(LC_ALL, "");
	
	//Одномерный массив с целочисленными значениями

	const int n = 10;
	int arr[n];
	//FillRand(arr, n); //Заполнение массива случайными числами	
	UniqueRand(arr, n);
	Print(arr, n); //Вывод исходного массива на экран
	Sort(arr, n); // Сортировка массива
	cout << "Массив после сортировки" << endl;
	Print(arr, n); // Вывод отсортированного массива на экран
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	cout << endl;
	int shift;
	cout << "Введите количество сдвигов: "; cin >> shift;
	ShiftLeft(arr, n, shift);
	cout << "Массив после " << shift << " сдвигов влево: " << endl;
	Print(arr, n);
	ShiftRight(arr, n, shift);
	cout << "Массив после " << shift << " сдвигов вправо (исходный массив): " << endl;
	Print(arr, n);
	cout << delimiter << endl;

	// Одномерный массив с вещественными значениями

	cout << delimiter << endl;
	const int SIZE = 10;
	double brr[SIZE];
	//FillRand(brr, SIZE);
	UniqueRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << "Массив после сортировки" << endl;
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	cout << endl;
	int shift_d;
	cout << "Введите количество сдвигов: "; cin >> shift_d;
	ShiftLeft(brr, SIZE, shift_d);
	cout << "Массив после " << shift_d << " сдвигов влево: " << endl;
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, shift_d);
	cout << "Массив после " << shift_d << " сдвигов вправо (исходный массив): " << endl;
	Print(brr, SIZE);
	cout << delimiter << endl;
	cout << delimiter << endl;

	//	Двумерный массив с целочисленными значениями
	
	cout << delimiter << endl;
	int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS, 0, 150);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	cout << "Массив после сортировки" << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << endl;
	int shift_2;
	cout << "Введите количество сдвигов: "; cin >> shift_2;
	ShiftLeft(i_arr_2, ROWS, COLS, shift_2);
	cout << "Массив после " << shift_2 << " сдвигов влево: " << endl;
	Print(i_arr_2, ROWS, COLS);
	ShiftRight(i_arr_2, ROWS, COLS, shift_2);
	cout << "Массив после " << shift_2 << " сдвигов вправо (исходный массив): " << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	//	Двумерный массив с вещественными значениями

	cout << delimiter << endl;
	double i_brr_2[ROWS][COLS];
	//FillRand(i_brr_2, ROWS, COLS);
	UniqueRand(i_brr_2, ROWS, COLS, 0, 150);
	Print(i_brr_2, ROWS, COLS);
	Sort(i_brr_2, ROWS, COLS);
	cout << "Массив после сортировки" << endl;
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << endl;
	int shift_2_d;
	cout << "Введите количество сдвигов: "; cin >> shift_2_d;
	ShiftLeft(i_brr_2, ROWS, COLS, shift_2_d);
	cout << "Массив после " << shift_2_d << " сдвигов влево: " << endl;
	Print(i_brr_2, ROWS, COLS);
	ShiftRight(i_brr_2, ROWS, COLS, shift_2_d);
	cout << "Массив после " << shift_2_d << " сдвигов вправо (исходный массив): " << endl;
	Print(i_brr_2, ROWS, COLS);
}