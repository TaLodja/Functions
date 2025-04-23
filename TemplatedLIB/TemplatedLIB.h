#pragma once

#include "constants.h"

namespace MathLIBArray
{
	class WorkArray
	{
	public:
		static void UniqueRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
		static void UniqueRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
		static void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
		static void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);

		template <typename T>static void Print(T arr[], const int n);
		template<typename T>static void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

		template <typename T>static void Sort(T arr[], const int n);
		template <typename T>static void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
		
		template <typename T>static void ShiftLeft(T arr[], const int n, int shift);
		template <typename T>static void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
		
		template <typename T>static void ShiftRight(T arr[], const int n, int shift);
		template <typename T>static void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);
	};
	class StatMathArray
	{
	public:
		template <typename T>static T Sum(T arr[], const int n);
		template <typename T>static T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

		template <typename T>static double Avg(T arr[], const int n);
		template <typename T>static double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

		template <typename T>static T MinValueIn(T arr[], const int n);
		template <typename T>static T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

		template <typename T>static T MaxValueIn(T arr[], const int n);
		template <typename T>static T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
	};
}