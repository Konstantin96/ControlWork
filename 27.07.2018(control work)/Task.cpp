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
		/*17.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах-ссылках.
18.	Такую же функцию как и в 17 задании написать для многомерного массива (подумать в 2 стороны: 1. Перегрузка функций; 2 Ис-пользование указетелей на функйии)
a.	Типа int
b.	Типа double
c.	Типа Shor int
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
		/*19.	Написать Функции для распечатки массивов, как одномерных, так и двумерных*/
		int mas[6] = { 12,32,65,81,81,34 };

		cout << "Элементы одномерного массива: " << endl;
		PrintArray(mas, 6);


		int mastwo[2][3] = { { 2, 1, 5 },{ -5, 4, 7 } };
		cout << "Элементы двумерного массива: " << endl;
		Print(&mastwo[0][0], 2, 3);

	}

	else if (zd == 4)
	{
		/*21.	Написать функцию, которая получает указатель на двумерный массив и его размер, и возвращает среднее арифметическое эле-ментов массива,
		а также количество чётных и нечётных элементов, используя механизм ссылок.*/
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
		/* Создать функцию, позволяющую добавлять блок элементов в конец массива*/
		char str[20] = "Hello"; // массив

		skleivanie(str, 20);
	}

	else if (zd == 6)
	{
		/*Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b. Пользователь вводит a и  b. Проил-люстрируйте работу функции примером.*/
		unsigned int res = sum(5, 10);
		cout << "sum of numbers range=  " << res << "\n\n";
	}

	else if (zd == 7)
	{
		/*Создать функцию, позволяющую удалять блок элементов, начиная с произвольного индекса массива.*/
		int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		int size = 10;

		DeleteInterval(array, size, 3, 8);
		PrintArrays(array, size);

		return 0;
	}

	else
		cout << "Error. Number Unknown!" << endl;

}
