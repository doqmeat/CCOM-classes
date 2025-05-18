#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 5;
	int nums[SIZE] = {2, 6, 7, 9, 2};
	int *ptr = nullptr;
	ptr = nums;

	cout << "los elementos del arreglo son:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *ptr++ << " ";
	}
	cout << endl;
	cout << *ptr << endl; // nums[5] aka basura!

	cout << "los elementos del arreglo al revez  son:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		// aqui si hace la diferencia!!!!
		cout << *--ptr << " ";
	}

	cout << endl;
	cout << *ptr << endl; // se queda en nums[1] por el postfix
	return 0;
}