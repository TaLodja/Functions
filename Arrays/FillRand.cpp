#include "FillRand.h"

void FillRand(int arr[], const int n, int minRand, int maxRand) //функция возвращает псевдослучайное число в диапазоне от 0 до 32 767.
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, double minRand, double maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (int)(maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand, double maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (int)(maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}
