#pragma once
#include "stdafx.h"
#include "constants.h"

void UniqueRand(int arr[], const int n, int minRand = 0, int maxRand = 100);  // Прототип функции: заполняет массив уникальными случайными числами
void UniqueRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);
