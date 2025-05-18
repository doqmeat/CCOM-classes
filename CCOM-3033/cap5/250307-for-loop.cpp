#include <iostream>

using namespace std;

int main()
{
	// Escribe un programa que le pide al usuario un número entero positivo (no más grande 15). El programa debe desplegar un cuadrado creado con astericos (*). El número entrado por el usuario será el largo de cada lado del cuadrado.

	int num;
	cout << "entre un numero entre 1 y 15: ";
	cin >> num;

	int i;	// variable contadora
	int i2; // variable contadora 2
	for (i2 = 0; i2 < num; i2++)
	{
		for (i = 0; i < num; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}