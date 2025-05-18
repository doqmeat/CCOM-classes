#include <iostream>
#include <iomanip>

using namespace std;

void doubleArray(int[], int);

int main()
{
	const int SIZE = 10;
	int numeros[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i : numeros)
	{
		cout << setw(3) << left << i << " ";
	}
	cout << endl;
	doubleArray(numeros, SIZE);
	for (int i : numeros)
	{
		cout << setw(3) << left << i << " ";
	}
	cout << endl;
}

void doubleArray(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		nums[i] *= 2;
	}
}
