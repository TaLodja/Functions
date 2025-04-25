#include <iostream>
#include <stdlib.h>
#include "DLL_FuncTemplates.h"

template <typename T>T matches(T arr[], int k, T val);

void UniqueRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
		} while (matches(arr, i, arr[i]));
	}
}
void UniqueRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			arr[i] = rand() % (int)(maxRand - minRand) + minRand;
			arr[i] /= 100;
		} while (matches(arr, i, arr[i]));
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			do
			{
				arr[i][j] = rand() % (maxRand - minRand) + minRand;
			} while (matches(arr[0], i * COLS + j, arr[i][j]));
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			do
			{
				arr[i][j] = rand() % (int)(maxRand - minRand) + minRand;
				arr[i][j] /= 100;

			} while (matches(arr[0], i * COLS + j, arr[i][j]));
		}
	}
}

template <typename T>T matches(T arr[], int k, T val)
{
	for (int i = 0; i < k; i++)
	{
		if (arr[i] == val) return 1;
	}
	return 0;
}

template <typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
template <typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
template <typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
template <typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) sum += arr[i][j];
	}
	return sum;
}
template <typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template <typename T>T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template <typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < min) min = arr[i][j];
	}
	return min;
}
template <typename T>T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template <typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > max) max = arr[i][j];
	}
	return max;
}
template <typename T>void ShiftLeft(T arr[], const int n, int shift)
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
template <typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	//По строкам
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shift);
	}*/
	//Сквозной
	ShiftLeft(arr[0], ROWS * COLS, shift);
}
template <typename T>void ShiftRight(T arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
}
template <typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	ShiftLeft(arr[0], ROWS * COLS, ROWS * COLS - shift);
}