#include "input.h"
#include "bubble_sort.h"
#include "rand.h"
#include "show.h"
#include <iostream>
#include<new>
using namespace std;

int main()
{
	// ������̐���
	InitRand();

	// �z��̃T�C�Y�����
	int size = InputSize();

	// �z��̓��I�m��
	int* pArr = new(nothrow) int[size];
	
	// NULL�`�F�b�N
	if (pArr != nullptr)
	{
		// 1�`99�܂ł̃����_���Ȓl���i�[
		RandomNum(pArr, size);
		Show(pArr, size);

		// ���ёւ�
		BubbleSort(pArr, size);
		Show(pArr, size);

		delete[] pArr;
	}
	else cout << "�z��̓��I�m�ۂɎ��s���܂����B" << endl;
	return 0;
}