// SelectionSort.cpp
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void swap(int *p1, int *p2);
void SelectionSort(int n);

int a[5] = {10, 9, 8, 7, 6};

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}

	SelectionSort(5);

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}

    return 0;
}


void SelectionSort(int n)
{
	int lowest;

	for (int i = 0; i < n - 1; i++)
	{
		lowest = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[j] < a[lowest])
			{
				lowest = j;
			}
		}

		swap(&a[i], &a[lowest]);
	}

}



void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

