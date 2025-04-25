#pragma once

#include "constants.h"

namespace MathLIBArray
{
	class WorkArray
	{
	public:
		static void UniqueRand(int arr[], const int n, int minRand = 0, int maxRand = 100);  // Прототип функции: заполняет массив уникальными случайными числами
		static void UniqueRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
		static void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
		static void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);

		static void Print(double arr[], const int n);  // Прототип функции: выводит массив на экран
		static void Print(int arr[], const int n);
		static void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
		static void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

		static void Sort(int arr[], const int n);  // Прототип функции: сортирует массив
		static void Sort(double arr[], const int n);
		static void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
		static void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
	
		static void ShiftLeft(int arr[], const int n, int shift); // Прототип функции: сдвигает массив на заданное число элементов влево
		static void ShiftLeft(double arr[], const int n, int shift);
		static void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
		static void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

		static void ShiftRight(int arr[], const int n, int shift); // Прототип функции: сдвигает массив на заданное число элементов вправо
		static void ShiftRight(double arr[], const int n, int shift);
		static void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
		static void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
	};
	class StatMathArray
	{
	public:
		static int Sum(int arr[], const int n); // Прототип функции: возвращает сумму элементов массива
		static double Sum(double arr[], const int n);
		static int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
		static double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

		static double Avg(int arr[], const int n); // Прототип функции: возвращает среднее арифметическое элементов массива
		static double Avg(double arr[], const int n);
		static double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
		static double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

		static int MinValueIn(int arr[], const int n); // Прототип функции: возвращает минимальное значение в массиве
		static double MinValueIn(double arr[], const int n);
		static int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
		static double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

		static int MaxValueIn(int arr[], const int n); // Прототип функции: возвращает максимальное значение в массиве
		static double MaxValueIn(double arr[], const int n);
		static int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
		static double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
	};
}



