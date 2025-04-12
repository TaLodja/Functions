#pragma once
#include "stdafx.h"
#include "constants.h"

template<typename T>
void Print(T arr[], const int n);  // Прототип функции: выводит массив на экран
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);