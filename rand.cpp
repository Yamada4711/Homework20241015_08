#include "rand.h"
#include <ctime>
#include <iostream>

void InitRand()
{
	srand((unsigned int)time(NULL));
}

void RandomNum(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		// 1����99�ŏ�����
		pArr[i] = rand() % 99 + 1;
	}
}