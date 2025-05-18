#include <iostream>

using namespace std;

int duplicar(int &);		 // prototipo de funcion duplicar ()
void swap(int &, int &); // prototipo de funcion swap()

int main()
{
	// para ejemplo de duplicar()
	// int x = 10;
	// duplicar(x);
	// cout << "cout del main: " << x << endl;

	// para ejemplo de swap()
	int x = 4;
	int y = 9;
	cout << "x = " << x << " y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << " y = " << y << endl;
	return 0;
}

// input: una variable con un numero int.
// output: el numero duplicado.
int duplicar(int &num)
{
	num *= 2;
	return num;
}

// input: 2 variables con numeros int
// output: se intercambian el valor de las variables
void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
