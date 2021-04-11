#include<iostream>
#include<ctime>
using namespace std;
#define tab "\t"
//#define POINTER_BASICS
//#define POINTER_AND_ARRAYS
void main()
{
	setlocale(LC_ALL, "");

#ifdef POINTER_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;// �������� ����� ���������� 'a' ����� ��� ������
	cout << pa << endl;// ������� ����� ���������� '�', ���������� � ��������� 'pa'
	cout << *pa << endl;// ��������������� ��������� 'pa' � �������� �������� �� ������

	int* pb; //������ ��������� ���������, ��� �������������.
	int b = 3;
	pb = &b;
	cout << *pb << endl;

#endif // POINTER_BASICS
#ifdef POINTER_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << tab;

	}
#endif
	int n = 5; // ������ �������
	cout << "������� ������� �������: "; cin >> n;
	int* arr = new int[n]; 
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
