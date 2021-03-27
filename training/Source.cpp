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
int  Sum(int arr[], const int n)
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
	return (double)Sum(arr, n) / n;
}
int  minValueIn(int arr[], const int n)
{
	int j = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < j)
			j = arr[i];
	}
	return j;
}
int  maxValueIn(int arr[], const int n)
{
	int j = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > j)
			j = arr[i];
	}
	return j;
}
void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int j = n-2; j >= 0; j--)
		{
			arr[j+1] = arr[j];
		}
		arr[0] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
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
	cout << "Массив №1" << endl;
	FillRand(arr, n);
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << tab;
	//}
	//cout << endl;
	Print(arr, n);

	int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
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
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение элемента в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение элемента в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Отсортированный массив: " << endl;
	Sort(arr, n);
	Print(arr, n);


	///////////////////////////////////////////////////////////////

	const int m = 8;
	int brr[m];
	//for (int i = 0; i < m; i++)
	//{
	//	brr[i] = rand();
	//}
	cout << "Массив №2" << endl;
	FillRand(brr, m);

	//for (int i = 0; i < m; i++)
	//{
	//	cout << brr[i] << tab;
	//}
	//cout << endl;
	Print(brr, m);

	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
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
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, m) << endl;
	cout << "Минимальное значение элемента в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение элемента в массиве: " << maxValueIn(brr, m) << endl;
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
		ShiftRight(brr, m, number_of_shifts);
	Print(brr, m);
	cout << "Отсортированный массив: " << endl;
	Sort(brr, m);
	Print(brr, m);






}