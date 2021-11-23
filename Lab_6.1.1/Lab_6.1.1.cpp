// Lab_6.1.1.cpp
// < Онишків Остап >
// Лабораторна робота No 6.1.1
// Пошук елементів одновимірного масиву ітераційним способом
// Варіант 5

#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void Create(int *arr,const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 50. * rand() / RAND_MAX - 20;
	}
}

void Show(int *arr,const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
}


int Sum(int *arr,const int SIZE)
{
	int S = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i]>0 && arr[i]%2==0)
		{
			S += arr[i];
		}
	}
	return S;
}

int count(int* arr, const int SIZE)
{
	int n=0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
		{
			n++;
		}
	}
	return n;
}

void change(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0)
		{
			arr[i] = 0;
		}
	}
}

int main()
{
	int S, n;
	srand((unsigned)time(NULL));

	const int SIZE = 25;
	int arr[SIZE];

	Create(arr, SIZE);
	Show(arr, SIZE);
	cout << "S = " << Sum(arr, SIZE) << endl;
	cout << "n = " << count(arr, SIZE) << endl;
	change(arr, SIZE);
	Show(arr, SIZE);

	return 0;
}
