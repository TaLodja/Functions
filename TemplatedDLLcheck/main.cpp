#include "stdafx.h"
#include "DLL_FuncTemplates.h"
#include "DLL_FuncTemplates.cpp"

#define delimiter "\n-----------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");

	// Одномерный массив с целочисленными значениями

	const int n = 10;
	int arr[n];
	UniqueRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	std::cout << "Сумма элементов массива: " << Sum(arr, n) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << std::endl;
	std::cout << delimiter << std::endl;
	std::cout << "Исходный массив: " << std::endl;
	Print(arr, n);
	int shift;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift;
	ShiftLeft(arr, n, shift);
	std::cout << "Массив после " << shift << " сдвигов влево: " << std::endl;
	Print(arr, n);
	ShiftRight(arr, n, shift);
	std::cout << "Массив после " << shift << " сдвигов вправо (исходный массив): " << std::endl;
	Print(arr, n);
	std::cout << delimiter << std::endl;

	// Одномерный массив с вещественными значениями

	const int SIZE = 10;
	double brr[SIZE];
	UniqueRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	std::cout << "Сумма элементов массива: " << Sum(brr, SIZE) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << std::endl;
	std::cout << delimiter << std::endl;
	std::cout << "Исходный массив: " << std::endl;
	Print(brr, SIZE);
	int shift_d;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift_d;
	ShiftLeft(brr, SIZE, shift_d);
	std::cout << "Массив после " << shift_d << " сдвигов влево: " << std::endl;
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, shift_d);
	std::cout << "Массив после " << shift_d << " сдвигов вправо (исходный массив): " << std::endl;
	Print(brr, SIZE);
	std::cout << delimiter << std::endl;

	//	Двумерный массив с целочисленными значениями

	int i_arr_2[ROWS][COLS];
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	std::cout << std::endl;
	Print(i_arr_2, ROWS, COLS);
	std::cout << "Сумма всех элементов массива: " << Sum(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << delimiter << std::endl;
	std::cout << "Исходный массив: " << std::endl;
	Print(i_arr_2, ROWS, COLS);
	int shift_2;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift_2;
	ShiftLeft(i_arr_2, ROWS, COLS, shift_2);
	std::cout << "Массив после " << shift_2 << " сдвигов влево: " << std::endl;
	Print(i_arr_2, ROWS, COLS);
	ShiftRight(i_arr_2, ROWS, COLS, shift_2);
	std::cout << "Массив после " << shift_2 << " сдвигов вправо (исходный массив): " << std::endl;
	Print(i_arr_2, ROWS, COLS);
	std::cout << delimiter << std::endl;

	//	Двумерный массив с вещественными значениями

	std::cout << delimiter << std::endl;
	double i_brr_2[ROWS][COLS];
	UniqueRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	Sort(i_brr_2, ROWS, COLS);
	std::cout << std::endl;
	Print(i_brr_2, ROWS, COLS);
	std::cout << "Сумма всех элементов массива: " << Sum(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << Avg(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MinValueIn(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MaxValueIn(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << delimiter << std::endl;
	std::cout << "Исходный массив: " << std::endl;
	Print(i_brr_2, ROWS, COLS);
	int shift_2_d;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift_2_d;
	ShiftLeft(i_brr_2, ROWS, COLS, shift_2_d);
	std::cout << "Массив после " << shift_2_d << " сдвигов влево: " << std::endl;
	Print(i_brr_2, ROWS, COLS);
	ShiftRight(i_brr_2, ROWS, COLS, shift_2_d);
	std::cout << "Массив после " << shift_2_d << " сдвигов вправо (исходный массив): " << std::endl;
	Print(i_brr_2, ROWS, COLS);
}