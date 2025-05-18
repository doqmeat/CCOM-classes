#include <iostream>

using namespace std;

int main()
{
	// request para que la computadora reserve 1 byte
	char *ptr = nullptr;
	ptr = new char;

	*ptr = 'a';
	cout << *ptr << *ptr << *ptr << endl;

	delete ptr;
	ptr = nullptr;

	int *ptrArr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		ptrArr[i] = 10;
	}

	cout << "numeros del arreglo son: ";
	for (int i = 0; i < 5; i++)
	{
		cout << ptrArr[i] << " ";
	}
	cout << endl;
	delete[] ptrArr;

	cout << "numeros del arreglo son: ";
	for (int i = 0; i < 5; i++)
	{
		cout << ptrArr[i] << " ";
	}
	cout << endl;
}