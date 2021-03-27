#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //заполняем массив случайными числами
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //Вывод массива на экран
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello functions!" << endl;
	const int n = 5;
	int arr[n];
	//for (int i = 0; i < n; i++)
	//{
	//	arr[i] = rand();
	//}
	FillRand(arr, n);
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << tab;
	//}
	//cout << endl;
	Print(arr, n);

	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//for (int i = 0; i < number_of_shifts; i++)
	//{
	//	int buffer = arr[0];
	//	for (int j = 0; j < n; j++)
	//	{
	//		arr[j] = arr[j + 1];
	//	}
	//	arr[n - 1] = buffer;

	//}
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << tab;
	//}
	//cout << endl;
	//cout << endl;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	///////////////////////////////////////////////////////////////

	const int m = 8;
	int brr[m];
	//for (int i = 0; i < m; i++)
	//{
	//	brr[i] = rand();
	//}
	FillRand(brr, m);

	//for (int i = 0; i < m; i++)
	//{
	//	cout << brr[i] << tab;
	//}
	//cout << endl;
	Print(brr, m);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//for (int i = 0; i < number_of_shifts; i++)
	//{
	//	int buffer = brr[0];
	//	for (int j = 0; j < m; j++)
	//	{
	//		brr[j] = brr[j + 1];
	//	}
	//	brr[m - 1] = buffer;
	//}
	ShiftLeft(brr, m, number_of_shifts);
	//for (int i = 0; i < m; i++)
	//{
	//	cout << brr[i] << tab;
	//}
	//cout << endl;
	Print(brr, m);






}