#include<iostream>
using namespace std;

//Прототипы  => *.h  - файл
//Реализации => *.cpp - файл
//Принимаемые/Передаваемые параметры
//int add(int a=0, int b, int c=0);

/*
-------------------------------------
Шаблоны функций (Functions templates)
-------------------------------------
*/

#include"Print.h"
#include"Print.cpp"
#include"FillRand.h"
#include"Shift.h"
#include"Shift.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Stat.cpp"




void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions!" << endl;
	const int n = 5;
	int arr[n];
	//Заполняем массив случайными числами:
	//for (int i = 0; i < n; i++)
	//{
	//	arr[i] = rand();
	//	//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	//}
	FillRand(arr, n, 400, 500);
	//Выводим массив на экран:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);//Вызов функции (Function call) - исползование написанной ранее функции.
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(arr, n);
	Print(arr, n);
	//Сдвиг массива на заданное число элементов:
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	//Выводим сдвинутого массив на экран:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);

	//////////////////////////////////////////////////////////////////////

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);

	//////////////////////////////////////////////////////////////////////

	cout << "CHAR:\n";
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR);
	Print(c_arr, SIZE_CHAR);

	///////////////////////////////////////////////////////////////////

	cout << "FLOAT:" << endl;
	const int SIZE_FLOAT = 7;
	float f_arr[SIZE_FLOAT];
	FillRand(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "Сумма элементов массива: " << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "Среднее арифметическое: " << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);

}



