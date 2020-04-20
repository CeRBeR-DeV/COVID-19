#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* Push_back(int arr[], const int n, int value);
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "input number of elements: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	//���������� �������� � ����� �������:
	int value;
	cout << "Input value: ";
	cin >> value;
	arr=Push_back(arr, n, value);
	n++;
	Print(arr, n);

	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int* Push_back(int arr[],  int n, int value)
{
	
	//1.������� �������� ������ ������� �������
	int* buffer = new int[n + 1];
	//2.�������� ��� �������� ��������� ������� � ��������, ��������������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3.������� �������� ������
	cout << arr << endl;
	delete[] arr;
	cout << arr << endl;
	//4.� ��������� 'arr' ���������� ����� ������ �������, � ������� ��� ���� ����� ��� ������������ ��������:
	arr = buffer;
	//5.���������� ����������� �������� � ����� ������� 'arr'
	arr[n] = value;
	//6.����������� ������ �������:
	n++;
	return arr;
}