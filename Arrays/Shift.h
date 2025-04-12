#pragma once
#include "stdafx.h"
#include "constants.h"

template<typename T>
void ShiftLeft(T arr[], const int n, int shift); // Прототип функции: сдвигает массив на заданное число элементов влево
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template<typename T>
void ShiftRight(T arr[], const int n, int shift); // Прототип функции: сдвигает массив на заданное число элементов вправо
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
