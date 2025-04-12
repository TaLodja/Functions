#pragma once
#include "stdafx.h"
#include "constants.h"

template<typename T>
T Sum(T arr[], const int n); // Прототип функции: возвращает сумму элементов массива
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n); // Прототип функции: возвращает среднее арифметическое элементов массива
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(T arr[], const int n); // Прототип функции: возвращает минимальное значение в массиве
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T arr[], const int n); // Прототип функции: возвращает максимальное значение в массиве
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

