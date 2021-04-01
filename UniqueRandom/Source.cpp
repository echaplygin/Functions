#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //Вывод массива на экран
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void UniqueRandom(int arr[], const int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	cout << "***************************************************************" << endl;
	cout << "Функция UniqueRandom - Вывод массива уникальных чисел: " << endl;
	UniqueRandom(arr, n);
	Print(arr, n);
	cout << "***************************************************************" << endl;

	
}