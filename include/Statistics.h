#pragma once
#include "stdafx.h"
#include "constants.h"

//Статистические функции: Sum, Avg, Min, Max
int Sum(int arr[], const int n); // Прототип функции: возвращает сумму элементов массива
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n); // Прототип функции: возвращает среднее арифметическое элементов массива
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[], const int n); // Прототип функции: возвращает минимальное значение в массиве
double MinValueIn(double arr[], const int n);
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[], const int n); // Прототип функции: возвращает максимальное значение в массиве
double MaxValueIn(double arr[], const int n);
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);