#include <iostream>

using namespace std;

int main()
{
	int A = 10;

	//P는 별명, 정수형 변수의 주소를 기억하는 숫자 공간을 요청
	int* P = &A; // A 변수에 주소를 주세요, 정수형 변수A의 주소를 주세요.

	//P2는 별명, 정수형 변수의 주소를 기억하는 숫자 공간을 요청
	int* P2 = P;

	*P = A + 10;

	cout << *P2 << endl; //-> P라는 변수는 몬지 모르지만 다른 변수의 위치를 기억하는 변수


	return 0;
}