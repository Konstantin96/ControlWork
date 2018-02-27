#include <iostream>

using namespace std;

double func(int *arr, int size, double *summ, double *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Summa: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "ALL: " << *mult << endl;
	return 0;
}

int func(int *arr, int size, int *summ, int *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Summa: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "ALL: " << *mult << endl;
	return 0;
}

short int func(int *arr, int size, short int *summ, short int *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Summa: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "ALL: " << *mult << endl;
	return 0;
}

void PrintArray(int arr[6], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << ' ';
	cout << endl;
}


void Print(int * arr, int size_first, int size_last)
{
	for (int i = 0; i < size_first; i++)
	{
		cout << endl;
		for (int j = 0; j < size_last; j++)
			cout << *(arr + i * size_last + j) << ' ';
	}
	cout << endl;
}

int srarifm(int *arr, int size_first, int size_last)
{
	int i, j, sum_str, sr_arif;
	for (i = 0; i < size_last; i++)
	{
		sum_str = 0;
		sr_arif = 0;
		for (j = 0; j < size_last; j++)
		{
			sum_str = sum_str + *arr;
		}
		cout << "\n" << sum_str;
		sr_arif = sum_str / size_last;
		cout << " srednee arifmeticheskoe stroki " << i + 1 << " = " << sr_arif << " \n ";
		return 0;
	}
}

char skleivanie(char *arr, int size)
{
	strcat(arr, " my friend.");
	cout << arr << endl;
	return 0;
}

unsigned int sum(int lower, int summand)
{
	return (summand == lower) ? lower : summand + sum(lower, summand - 1);
}


void DeleteOne(int *PArray, int & CurSize, int index)
{
	for (int i = index; i <= CurSize - 1; i++)
	{
		PArray[i] = PArray[i + 1];
	}

	CurSize--;
}

void PrintArrays(int *PArray, int & CurSize)
{
	for (int i = 0; i <= CurSize - 1; i++)
	{
		cout << PArray[i] << endl;
	}
}

bool DeleteInterval(int *PArray, int & CurSize, int index1, int index2)
{
	if (index1 > index2)
		return 0;

	if (index2 > CurSize - 1)
		return 0;

	for (int i = index1; i <= index2; i++)
	{
		DeleteOne(PArray, CurSize, index1);
	}

	return 1;
}