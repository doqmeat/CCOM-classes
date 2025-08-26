#include <iostream>

using namespace std;

int main()
{

	int num = 0;
	// 1) incrementacion esta prefix

	while (++num < 1) // 2) lo cual hace que aqui num tenga valor de num 1
	{
		cout << num << endl; // el ciclo no se va a correr
	}
	cout << num << endl; // y solo se da cout a este!
}