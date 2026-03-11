#include <iostream>
#include "StringUtil.h"

using namespace std;


int main()
{
	malloc(10);

	free();
	//compnter memory unmanaged language / human managed language
	//heap 동적으로 int 사이즈 만들고 주소 반환
	int* MyTexture = new int;

	//포인터 변수의 주소의 heap 영역 반환
	delete MyTexture;
	MyTexture = nullptr;
	if (MyTexture)
	{
	
	}

	int Size = 100;
	//heap 동적으로 int 100개짜리 배열 사이즈 만들고 주소 반환
	int* MyStaticMeshes = new int[Size];

	MyStaticMeshes[3] = 10;

	//포인터 변수의 주소 부터 할당 받은 배열 크기 만큼의 heap 영역 반환
	//delete MyStaticMeshes; 첫번째만 반환하고 나머지는 잊어버림
	delete[] MyStaticMeshes;
	MyStaticMeshes = nullptr;
	if (MyStaticMeshes)
	{

	}






	return 0;
}

