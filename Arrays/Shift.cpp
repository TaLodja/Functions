#include "Shift.h"

void ShiftLeft(int arr[], const int n, int shift)
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
}
void ShiftLeft(double arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	//Сдвиг по строкам
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shift);
	}*/
	//Сквозной сдвиг
	ShiftLeft(arr[0], ROWS * COLS, shift); //Когда массив передается в качестве аргумента, передается только адрес начала массива (т.е. адрес первого элемента)
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{

	//Сдвиг по строкам
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shift);
	}*/
	//Сквозной сдвиг
	ShiftLeft(arr[0], ROWS * COLS, shift);
}
void ShiftRight(int arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
}
void ShiftRight(double arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - shift);
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - shift);
}