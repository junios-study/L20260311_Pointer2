#include <iostream>
#include "StringUtil.h"

using namespace std;


int main()
{
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
	int* MyStaticMesh = new int[Size];

	MyStaticMesh[3] = 10;
	//포인터 변수의 주소의 heap 영역 반환
	delete MyStaticMesh;
	MyStaticMesh = nullptr;
	if (MyStaticMesh)
	{

	}






	return 0;
}

