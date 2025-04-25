#pragma once

#include "constants.h"

#ifdef DLL_FUNCTEMPLATES_EXPORTS
#define DLL_FUNCTEMPLATES_API _declspec(dllexport)
#else
#define DLL_FUNCTEMPLATES_API _declspec(dllimport)
#endif

DLL_FUNCTEMPLATES_API void UniqueRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
DLL_FUNCTEMPLATES_API void UniqueRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
DLL_FUNCTEMPLATES_API void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
DLL_FUNCTEMPLATES_API void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template <typename T>DLL_FUNCTEMPLATES_API void Print(T arr[], const int n);
template <typename T>DLL_FUNCTEMPLATES_API void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>DLL_FUNCTEMPLATES_API void Sort(T arr[], const int n);
template <typename T>DLL_FUNCTEMPLATES_API void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>DLL_FUNCTEMPLATES_API void ShiftLeft(T arr[], const int n, int shift);
template <typename T>DLL_FUNCTEMPLATES_API void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template <typename T>DLL_FUNCTEMPLATES_API void ShiftRight(T arr[], const int n, int shift);
template <typename T>DLL_FUNCTEMPLATES_API void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template <typename T>DLL_FUNCTEMPLATES_API T Sum(T arr[], const int n);
template <typename T>DLL_FUNCTEMPLATES_API T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>DLL_FUNCTEMPLATES_API double Avg(T arr[], const int n);
template <typename T>DLL_FUNCTEMPLATES_API double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>DLL_FUNCTEMPLATES_API T MinValueIn(T arr[], const int n);
template <typename T>DLL_FUNCTEMPLATES_API T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>DLL_FUNCTEMPLATES_API T MaxValueIn(T arr[], const int n);
template <typename T>DLL_FUNCTEMPLATES_API T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);