#include <iostream>

using namespace std;

int main()
{
	int Number[5] = { 1, 2, 3, 4, 5 };
	char Hello[6] = { 'H','e', '\0','l', 'l', 'o' };
	//Number[0];

	Hello[0] = 'J';

	cout << Number[1] << endl;

	int* P = Number;
	char* C = Hello;

	Hello[3] = 'A';
	//cout << *(P + 1) << endl;
	//cout << *(Number+1) << endl;
	//cout << *(C + 0) << endl;
	Console.WriteLine << C << endl;
	for (int i = 0; i < 6; i++)
	{
		if (C[i] == '\0')
		{
			break;
		}
		cout << C[i];
	}



	return 0;
}