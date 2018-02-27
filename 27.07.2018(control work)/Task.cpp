#include <iostream>
#include <time.h>
#include<locale.h>
#include "Prototip.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int zd;
	cout << "Enter number zd: ";
	cin >> zd;
	if (zd == 1 || zd == 2)

	{
		/*17.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����� � ������������ ��� ��������� � ���� ����������-�������.
18.	����� �� ������� ��� � � 17 ������� �������� ��� ������������ ������� (�������� � 2 �������: 1. ���������� �������; 2 ��-����������� ���������� �� �������)
a.	���� int
b.	���� double
c.	���� Shor int
*/
		int arr[5];
		int summ = 0, multi = 1;
		int *psumm = &summ;
		int *pmulti = &multi;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = rand() % 100;
		}
		int *pa = &arr[0];
		func(pa, 5, psumm, pmulti);

		return 0;
	}

	else if (zd == 3)
	{
		/*19.	�������� ������� ��� ���������� ��������, ��� ����������, ��� � ���������*/
		int mas[6] = { 12,32,65,81,81,34 };

		cout << "�������� ����������� �������: " << endl;
		PrintArray(mas, 6);


		int mastwo[2][3] = { { 2, 1, 5 },{ -5, 4, 7 } };
		cout << "�������� ���������� �������: " << endl;
		Print(&mastwo[0][0], 2, 3);

	}

	else if (zd == 4)
	{
		/*21.	�������� �������, ������� �������� ��������� �� ��������� ������ � ��� ������, � ���������� ������� �������������� ���-������ �������,
		� ����� ���������� ������ � �������� ���������, ��������� �������� ������.*/
		const int K = 3;
		int i, j, sum_str, sr_arif, a[K][K];
		for (i = 0; i < K; i++)
			for (j = 0; j < K; j++)
			{
				a[i][j] = rand() % 10;
			}

		for (i = 0; i < K; i++)
		{
			for (j = 0; j < K; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		srarifm(&a[0][0], K, K);
	}

	else if (zd == 5)
	{
		/* ������� �������, ����������� ��������� ���� ��������� � ����� �������*/
		char str[20] = "Hello"; // ������

		skleivanie(str, 20);
	}

	else if (zd == 6)
	{
		/*�������� ����������� �������, ������� ��������� ����� ���� ����� � ��������� �� a �� b. ������������ ������ a �  b. �����-����������� ������ ������� ��������.*/
		unsigned int res = sum(5, 10);
		cout << "sum of numbers range= �" << res << "\n\n";
	}

	else if (zd == 7)
	{
		/*������� �������, ����������� ������� ���� ���������, ������� � ������������� ������� �������.*/
		int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		int size = 10;

		DeleteInterval(array, size, 3, 8);
		PrintArrays(array, size);

		return 0;
	}

	else
		cout << "Error. Number Unknown!" << endl;

}
