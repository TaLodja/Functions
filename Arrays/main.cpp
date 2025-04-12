#include <iostream>
using namespace std;

#define delimiter "\n-----------------------------------------\n"
const int ROWS = 10;
const int COLS = 10;
int buff_h[COLS];
double buff_h_d[COLS];
int buff_v[ROWS];
double buff_v_d[ROWS];

void FillRand(int arr[], const int n);  // Прототип функции: заполняет массив случайными числами
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand=0, int maxRand=100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRand = 100);

template<typename T>
void Print(T arr[], const int n);  // Прототип функции: выводит массив на экран
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);  // Прототип функции: сортирует массив
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS, char dir);
//void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS, char dir);

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

template<typename T>
void ShiftLeft(T arr[], const int n, int shift); // Прототип функции: сдвигает массив на заданное число элементов влево
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template<typename T>
void ShiftRight(T arr[], const int n, int shift); // Прототип функции: сдвигает массив на заданное число элементов вправо
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void main()
{
	setlocale(LC_ALL, "");
	
	// Одномерный массив с целочисленными значениями

	const int n = 10;
	int arr[n];
	FillRand(arr, n); //Заполнение массива случайными числами	
	Print(arr, n); //Вывод исходного массива на экран
	Sort(arr, n); // Сортировка массива
	Print(arr, n); // Вывод отсортированного массива на экран
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(arr, n);
	int shift;
	cout << "Введите количество сдвигов: "; cin >> shift;
	ShiftLeft(arr, n, shift);
	cout << "Массив после " << shift << " сдвигов влево: " << endl;
	Print(arr, n);
	ShiftRight(arr, n, shift);
	cout << "Массив после " << shift << " сдвигов вправо (исходный массив): " << endl;
	Print(arr, n);
	cout << delimiter << endl;

	// Одномерный массив с вещественными значениями

	const int SIZE = 10;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(brr, SIZE);
	int shift_d;
	cout << "Введите количество сдвигов: "; cin >> shift_d;
	ShiftLeft(brr, SIZE, shift_d);
	cout << "Массив после " << shift_d << " сдвигов влево: " << endl;
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, shift_d);
	cout << "Массив после " << shift_d << " сдвигов вправо (исходный массив): " << endl;
	Print(brr, SIZE);
	cout << delimiter << endl;

	//	Двумерный массив с целочисленными значениями
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//char dir;
	//cout << "Введите направление сортировки двумерного массива:\n\'v\' - сортировака в столбце по возрастанию;\n\'h\' - сортировка в строке по возрастанию" << endl; cin >> dir;
	Sort(i_arr_2, ROWS, COLS);
	cout << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(i_arr_2, ROWS, COLS);
	int shift_2;
	cout << "Введите количество сдвигов: "; cin >> shift_2;
	ShiftLeft(i_arr_2, ROWS, COLS, shift_2);
	cout << "Массив после " << shift_2 << " сдвигов влево: " << endl;
	Print(i_arr_2, ROWS, COLS);
	ShiftRight(i_arr_2, ROWS, COLS, shift_2);
	cout << "Массив после " << shift_2 << " сдвигов вправо (исходный массив): " << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	//	Двумерный массив с вещественными значениями

	cout << delimiter << endl;
	double i_brr_2[ROWS][COLS];
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	Sort(i_brr_2, ROWS, COLS);
	cout << endl;
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма всех элементов массива: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	cout << "Исходный массив: " << endl;
	Print(i_brr_2, ROWS, COLS);
	int shift_2_d;
	cout << "Введите количество сдвигов: "; cin >> shift_2_d;
	ShiftLeft(i_brr_2, ROWS, COLS, shift_2_d);
	cout << "Массив после " << shift_2_d << " сдвигов влево: " << endl;
	Print(i_brr_2, ROWS, COLS);
	ShiftRight(i_brr_2, ROWS, COLS, shift_2_d);
	cout << "Массив после " << shift_2_d << " сдвигов вправо (исходный массив): " << endl;
	Print(i_brr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n) //функция возвращает псевдослучайное число в диапазоне от 0 до 32 767.
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand-minRand)+minRand;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand, double maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
template<typename T>
void Print(T arr[], const int n)	 //функция выводит массив на экран
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
template<typename T>
void Sort(T arr[], const int n) //функция сортирует массив
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iteration = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//arr[i] - выбранный элемент;
			//arr[j] - перебираемый элемент;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k==i ? j+1 : 0; l < COLS; l++)
				{
					iteration++;
					//Если перебираемый элемент меньше, чем выбранный, меняем их местами
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Количество итераций: " << iteration << endl;
	cout << "Количество обменов: " << exchanges << endl;
	/*switch (dir)
	{
	case 'v':
		for (int j = 0; j < COLS; j++)
		{

			for (int i = 0; i < ROWS; i++)
			{
				buff_v[i] = arr[i][j];
			}
			Sort(buff_v, ROWS);
			for (int i = 0; i < ROWS; i++)
			{
				arr[i][j] = buff_v[i];
			}
		}
		break;
	case 'h':
		for (int i = 0; i < ROWS; i++)
		{
			
			for (int j = 0; j < COLS; j++)
			{
				buff_h[j] = arr[i][j];
			}
			Sort(buff_h, COLS);
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = buff_h[j];
			}
		}
	}*/
}
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j=0; j<COLS; j++) sum += arr[i][j];
	}
	return sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}
template<typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j <COLS; j++)
		if (arr[i][j] < min) min = arr[i][j];
	}
	return min;
}
template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > max) max = arr[i][j];
	}
	return max;
}
template<typename T>
void ShiftLeft(T arr[], const int n, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	//Сдвиг по строкам
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shift); 
	}*/
	//Сквозной сдвиг
	ShiftLeft(arr[0], ROWS * COLS, shift); //Когда массив передается в качестве аргумента, передается только адрес массива (т.е. адрес первого элемента)
}
template<typename T>
void ShiftRight(T arr[], const int n, int shift)
{
	ShiftLeft(arr, n, n - shift);
	/*for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n-1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = buffer;
	}*/
}
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			T buffer_i = arr[i - 1][COLS - 1];
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = buffer_i;
		}
		arr[0][0] = buffer;
	}
}