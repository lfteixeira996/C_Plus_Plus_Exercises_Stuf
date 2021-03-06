// BubbleSort.cpp 
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void swap(int *p1, int *p2);
void BubbleSort(int n);

int a[5] = { 10, 9, 8, 7, 6 };

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}

	BubbleSort(5);

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void BubbleSort(int n)
{
	int i, j, z;

	for (j = 0; j < n - 1; j++)
	{
		for (i = 0; i < n - 1; i++)
		{
			z = i + 1;
			if (a[i] > a[z])
			{
				swap(&a[i], &a[z]);
			}
		}
	}
}

