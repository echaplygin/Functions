#include<iostream>
using namespace std;

//���������  => *.h  - ����
//���������� => *.cpp - ����
//�����������/������������ ���������
//int add(int a=0, int b, int c=0);

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);//�������� ������� ��� ���������� ������� (Function declaration)
void Print(double arr[], const int n);//�������� ������� ��� ���������� ������� (Function declaration)
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
int  Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int  minValueIn(int arr[], const int n);
int  maxValueIn(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions!" << endl;
	const int n = 5;
	int arr[n];
	//��������� ������ ���������� �������:
	//for (int i = 0; i < n; i++)
	//{
	//	arr[i] = rand();
	//	//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767.
	//}
	FillRand(arr, n, 400, 500);
	//������� ������ �� �����:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);//����� ������� (Function call) - ������������ ���������� ����� �������.
	cout << "����� ��������� �������:" << Sum(arr, n) << endl;
	cout << "������� ��������������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "��������������� ������: " << endl;
	Sort(arr, n);
	Print(arr, n);
	//����� ������� �� �������� ����� ���������:
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	//������� ���������� ������ �� �����:
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
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767.
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������:
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767.
	}
}


void Print(int arr[], const int n)//���������� ������� ��� ����������� ������� (Function definition)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)//���������� ������� ��� ����������� ������� (Function definition)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)	//�������� �������� �������� ����� ���������
{
	for (int i = 0; i < number_of_shifts; i++)	//���� ���� �������� ������ �� number_of_shifts ���������
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int number_of_shifts)	//�������� �������� �������� ����� ���������
{
	for (int i = 0; i < number_of_shifts; i++)	//���� ���� �������� ������ �� number_of_shifts ���������
	{
		double buffer = arr[0];
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
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� 'i' �������� �������, � ������� ����� ��������� ����������� ��������.
		for (int j = i + 1; j < n; j++)
		{
			//������� 'j' ���������� ��������� �������� (������ ����� �������) � ������� ������������ ��������.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
