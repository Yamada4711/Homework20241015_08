#include "input.h"
#include "bubble_sort.h"
#include "rand.h"
#include "show.h"
#include <iostream>
#include<new>
using namespace std;

int main()
{
	// 乱数種の生成
	InitRand();

	// 配列のサイズを入力
	int size = InputSize();

	// 配列の動的確保
	int* pArr = new(nothrow) int[size];
	
	// NULLチェック
	if (pArr != nullptr)
	{
		// 1～99までのランダムな値を格納
		RandomNum(pArr, size);
		Show(pArr, size);

		// 並び替え
		BubbleSort(pArr, size);
		Show(pArr, size);

		delete[] pArr;
	}
	else cout << "配列の動的確保に失敗しました。" << endl;
	return 0;
}