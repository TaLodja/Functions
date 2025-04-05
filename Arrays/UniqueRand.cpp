#include "UniqueRand.h"
#include "FillRand.h"

int matches(int arr[], int k, int val);
int matches(double arr[], int k, double val);

void UniqueRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
		}
		while (matches(arr, i, arr[i]));
	}
}
void UniqueRand(double arr[], const int n, double minRand, double maxRand)
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
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand, double maxRand)
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

int matches(int arr[], int k, int val)
{
	for (int i = 0; i < k; i++)
	{
		if (arr[i] == val) return 1;
	}
	return 0;
}
int matches(double arr[], int k, double val)
{
	for (int i = 0; i < k; i++)
	{
		if (arr[i] == val) return 1;
	}
	return 0;
}