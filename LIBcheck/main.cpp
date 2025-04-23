#include <iostream>

#include "..//LIB_Functions/LIB_Functions.h"

#define delimiter "____________________________________________________________________________________"

void main()
{
	setlocale(LC_ALL, "");
	//Одномерный массив с целочисленными значениями

	const int n = 10;
	int arr[n];
	MathLIBArray::WorkArray::UniqueRand(arr, n); //Заполнение массива уникальными случайными числами
	MathLIBArray::WorkArray::Print(arr, n); //Вывод исходного массива на экран
	MathLIBArray::WorkArray::Sort(arr, n); // Сортировка массива
	std::cout << "Массив после сортировки" << std::endl;
	MathLIBArray::WorkArray::Print(arr, n); // Вывод отсортированного массива на экран
	std::cout << "Сумма элементов массива: " << MathLIBArray::StatMathArray::Sum(arr, n) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << MathLIBArray::StatMathArray::Avg(arr, n) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MathLIBArray::StatMathArray::MinValueIn(arr, n) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MathLIBArray::StatMathArray::MaxValueIn(arr, n) << std::endl;
	std::cout << std::endl;
	int shift;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift;
	MathLIBArray::WorkArray::ShiftLeft(arr, n, shift);
	std::cout << "Массив после " << shift << " сдвигов влево: " << std::endl;
	MathLIBArray::WorkArray::Print(arr, n);
	MathLIBArray::WorkArray::ShiftRight(arr, n, shift);
	std::cout << "Массив после " << shift << " сдвигов вправо (исходный массив): " << std::endl;
	MathLIBArray::WorkArray::Print(arr, n);
	std::cout << delimiter << std::endl;

	// Одномерный массив с вещественными значениями

	const int SIZE = 10;
	double brr[SIZE];
	//FillRand(brr, SIZE);
	MathLIBArray::WorkArray::UniqueRand(brr, SIZE);
	MathLIBArray::WorkArray::Print(brr, SIZE);
	MathLIBArray::WorkArray::Sort(brr, SIZE);
	std::cout << "Массив после сортировки" << std::endl;
	MathLIBArray::WorkArray::Print(brr, SIZE);
	std::cout << "Сумма элементов массива: " << MathLIBArray::StatMathArray::Sum(brr, SIZE) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << MathLIBArray::StatMathArray::Avg(brr, SIZE) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MathLIBArray::StatMathArray::MinValueIn(brr, SIZE) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MathLIBArray::StatMathArray::MaxValueIn(brr, SIZE) << std::endl;
	std::cout << std::endl;
	int shift_d;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift_d;
	MathLIBArray::WorkArray::ShiftLeft(brr, SIZE, shift_d);
	std::cout << "Массив после " << shift_d << " сдвигов влево: " << std::endl;
	MathLIBArray::WorkArray::Print(brr, SIZE);
	MathLIBArray::WorkArray::ShiftRight(brr, SIZE, shift_d);
	std::cout << "Массив после " << shift_d << " сдвигов вправо (исходный массив): " << std::endl;
	MathLIBArray::WorkArray::Print(brr, SIZE);
	std::cout << delimiter << std::endl;
	std::cout << delimiter << std::endl;

	//	Двумерный массив с целочисленными значениями

	int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	MathLIBArray::WorkArray::UniqueRand(i_arr_2, ROWS, COLS, 0, 150);
	MathLIBArray::WorkArray::Print(i_arr_2, ROWS, COLS);
	MathLIBArray::WorkArray::Sort(i_arr_2, ROWS, COLS);
	std::cout << "Массив после сортировки" << std::endl;
	MathLIBArray::WorkArray::Print(i_arr_2, ROWS, COLS);
	std::cout << "Сумма всех элементов массива: " << MathLIBArray::StatMathArray::Sum(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << MathLIBArray::StatMathArray::Avg(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MathLIBArray::StatMathArray::MinValueIn(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MathLIBArray::StatMathArray::MaxValueIn(i_arr_2, ROWS, COLS) << std::endl;
	std::cout << std::endl;
	int shift_2;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift_2;
	MathLIBArray::WorkArray::ShiftLeft(i_arr_2, ROWS, COLS, shift_2);
	std::cout << "Массив после " << shift_2 << " сдвигов влево: " << std::endl;
	MathLIBArray::WorkArray::Print(i_arr_2, ROWS, COLS);
	MathLIBArray::WorkArray::ShiftRight(i_arr_2, ROWS, COLS, shift_2);
	std::cout << "Массив после " << shift_2 << " сдвигов вправо (исходный массив): " << std::endl;
	MathLIBArray::WorkArray::Print(i_arr_2, ROWS, COLS);
	std::cout << delimiter << std::endl;

	//	Двумерный массив с вещественными значениями

	double i_brr_2[ROWS][COLS];
	//FillRand(i_brr_2, ROWS, COLS);
	MathLIBArray::WorkArray::UniqueRand(i_brr_2, ROWS, COLS, 0, 150);
	MathLIBArray::WorkArray::Print(i_brr_2, ROWS, COLS);
	MathLIBArray::WorkArray::Sort(i_brr_2, ROWS, COLS);
	std::cout << "Массив после сортировки" << std::endl;
	MathLIBArray::WorkArray::Print(i_brr_2, ROWS, COLS);
	std::cout << "Сумма всех элементов массива: " << MathLIBArray::StatMathArray::Sum(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << "Среднее арифметическое элементов массива: " << MathLIBArray::StatMathArray::Avg(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << "Минимальное значение в массиве: " << MathLIBArray::StatMathArray::MinValueIn(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << "Максимальное значение в массиве: " << MathLIBArray::StatMathArray::MaxValueIn(i_brr_2, ROWS, COLS) << std::endl;
	std::cout << std::endl;
	int shift_2_d;
	std::cout << "Введите количество сдвигов: "; std::cin >> shift_2_d;
	MathLIBArray::WorkArray::ShiftLeft(i_brr_2, ROWS, COLS, shift_2_d);
	std::cout << "Массив после " << shift_2_d << " сдвигов влево: " << std::endl;
	MathLIBArray::WorkArray::Print(i_brr_2, ROWS, COLS);
	MathLIBArray::WorkArray::ShiftRight(i_brr_2, ROWS, COLS, shift_2_d);
	std::cout << "Массив после " << shift_2_d << " сдвигов вправо (исходный массив): " << std::endl;
	MathLIBArray::WorkArray::Print(i_brr_2, ROWS, COLS);
}