#include <iostream>

using namespace std;

void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "este es el numero 1: " << num1 << " y este es el numero 2: " << num2 << endl;
}

int main()
{
	int numero1 = 3;
	int numero2 = 9;
	swap(numero1, numero2);
}