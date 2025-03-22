#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);  // �������� �������: ��������� ������ ���������� �������
void Print(int arr[], const int n);  // �������� �������: ������� ������ �� �����
void Sort(int arr[], const int n);  // �������� �������: ��������� ������
int Sum(int arr[], const int n); // �������� �������: ���������� ����� ��������� �������
double Avg(int arr[], const int n); // �������� �������: ���������� ������� �������������� ��������� �������
int MinValueIn(int arr[], const int n); // �������� �������: ���������� ����������� �������� � �������
int MaxValueIn(int arr[], const int n); // �������� �������: ���������� ������������ �������� � �������
void ShiftLeft(int arr[], const int n); // �������� �������: �������� ������ �� �������� ����� ��������� �����
void ShiftRight(int arr[], const int n); // �������� �������: �������� ������ �� �������� ����� ��������� ������

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	FillRand(arr, n); //���������� ������� ���������� �������	
	Print(arr, n); //����� ��������� ������� �� �����
	Sort(arr, n); // ���������� �������
	Print(arr, n); // ����� ���������������� ������� �� �����
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(arr, n) << endl;
	ShiftLeft(arr, n);
	ShiftRight(arr, n);	
}

void FillRand(int arr[], const int n) //������� ���������� ��������������� ����� � ��������� �� 0 �� 32 767.
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n) //������� ������� ������ �� �����
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n) //������� ��������� ������
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	int sum = Sum(arr, n);
	return (double)sum / n;
}
int MinValueIn(int arr[], const int n)
{
	int MIN = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[0]) MIN = arr[i];
	}
	return MIN;
}
int MaxValueIn(int arr[], const int n)
{
	int MAX = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[0]) MAX = arr[i];
	}
	return MAX;
}
void ShiftLeft(int arr[], const int n)
{
	int shift;
	cout << "������� ���������� ������� �����: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[0];
		for (int j = 0; j < n-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[n - 1] = temp;
	}
	cout << "���������� ������ ����� ������ ����� �� " << shift << " ���������: " << endl;
	Print(arr, n);
}
void ShiftRight(int arr[], const int n)
{
	int shift;
	cout << "������� ���������� ������� ������: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int temp = arr[n-1];
		for (int j = n-1; j > 0; j--)
		{
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
	cout << "���������� ������ ����� ������ ������ �� " << shift << " ���������: " << endl;;
	Print(arr, n);
}