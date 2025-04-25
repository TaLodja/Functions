#pragma once

#include "constants.h"

#ifdef DLL_FUNCOVERLOAD_EXPORTS
#define DLL_FUNCOVERLOAD_API _declspec(dllexport)
#else
#define DLL_FUNCOVERLOAD_API _declspec(dllimport)
#endif

DLL_FUNCOVERLOAD_API void UniqueRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
DLL_FUNCOVERLOAD_API void UniqueRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
DLL_FUNCOVERLOAD_API void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
DLL_FUNCOVERLOAD_API void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);

DLL_FUNCOVERLOAD_API void Print(double arr[], const int n);
DLL_FUNCOVERLOAD_API void Print(int arr[], const int n);
DLL_FUNCOVERLOAD_API void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
DLL_FUNCOVERLOAD_API void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

DLL_FUNCOVERLOAD_API void Sort(int arr[], const int n);
DLL_FUNCOVERLOAD_API void Sort(double arr[], const int n);
DLL_FUNCOVERLOAD_API void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
DLL_FUNCOVERLOAD_API void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

DLL_FUNCOVERLOAD_API void ShiftLeft(int arr[], const int n, int shift);
DLL_FUNCOVERLOAD_API void ShiftLeft(double arr[], const int n, int shift);
DLL_FUNCOVERLOAD_API void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
DLL_FUNCOVERLOAD_API void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

DLL_FUNCOVERLOAD_API void ShiftRight(int arr[], const int n, int shift);
DLL_FUNCOVERLOAD_API void ShiftRight(double arr[], const int n, int shift);
DLL_FUNCOVERLOAD_API void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
DLL_FUNCOVERLOAD_API void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

DLL_FUNCOVERLOAD_API int Sum(int arr[], const int n);
DLL_FUNCOVERLOAD_API double Sum(double arr[], const int n);
DLL_FUNCOVERLOAD_API int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
DLL_FUNCOVERLOAD_API double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

DLL_FUNCOVERLOAD_API double Avg(int arr[], const int n);
DLL_FUNCOVERLOAD_API double Avg(double arr[], const int n);
DLL_FUNCOVERLOAD_API double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
DLL_FUNCOVERLOAD_API double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

DLL_FUNCOVERLOAD_API int MinValueIn(int arr[], const int n);
DLL_FUNCOVERLOAD_API double MinValueIn(double arr[], const int n);
DLL_FUNCOVERLOAD_API int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
DLL_FUNCOVERLOAD_API double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

DLL_FUNCOVERLOAD_API int MaxValueIn(int arr[], const int n);
DLL_FUNCOVERLOAD_API double MaxValueIn(double arr[], const int n);
DLL_FUNCOVERLOAD_API int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
DLL_FUNCOVERLOAD_API double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);