#include "Shift.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	//Сдвиг по строкам
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shift);
	}*/
	//Сквозной сдвиг
	ShiftLeft(arr[0], ROWS * COLS, shift); //Когда массив передается в качестве аргумента, передается только адрес массива (т.е. адрес первого элемента)
}
template<typename T>
void ShiftRight(T arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
}
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - shift);
}