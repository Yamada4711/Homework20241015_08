#include "bubble_sort.h"
#include <iostream>
using namespace std;

void BubbleSort(int *pArr, int size)
{
	int keep;
	int count = 0;
	
	do
	{
		count = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (pArr[i] > pArr[i + 1])
			{
				keep = pArr[i];
				pArr[i] = pArr[i + 1];
				pArr[i + 1] = keep;
				count++;
			}
		}
		if (count == 0)
		{
			break;
		}
	} while (true);
}