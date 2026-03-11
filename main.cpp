#include <iostream>
#include "StringUtil.h"

using namespace std;


int main()
{
	//숫자 입력 받아서 그걸 (SIZE)크기로 숫자 배열을 만들어서
	//1부터 크기까지 초기화 하고 출력하는 프로그램 만들어 보세요.
	int Size = 0;
	int* P = nullptr;

	cin >> Size;

	//heap 배열을 size 크기 만큼 int, 시작 번지(int*)
	P = new int[Size];
	
	if (!P)  // if (P == nullptr) , if  ( P == 0)
	{
		return -1;
	}

	for (int i = 0; i < Size; ++i)
	{
		P[i] = i + 1;
	}

	for (int i = 0; i < Size; ++i)
	{
		cout << *(P + i) << ", ";
	}
	cout << endl;

	//heap에 있는 배열을 반환해주세요.
	delete[] P;
	P = nullptr;


}

