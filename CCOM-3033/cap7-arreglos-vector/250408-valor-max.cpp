#include <iostream>

using namespace std;

//  Escriba un ciclo for que calcule el valor máximo de los elementos del arreglo numbers

int main()
{
	const int SIZE = 10;
	int numbers[SIZE];

	// le pide al usuario 10 numeros
	for (int i = 0; i < SIZE; i++)
	{
		cout << "entre un numero #" << i + 1 << ": ";
		cin >> numbers[i];
	}

	cout << "Los numeros entrados son: ";

	// desplega todos los numeros
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i];
		if (i == 9)
		{
			cout << '.' << endl;
			break;
		}
		cout << ", ";
	}

	// se busca el valor maximo del arreglo
	// necesitamos un ciclo que itere hasta encontrar un numero mayor que el mismo

	int valorMax = numbers[0]; // se inicializa el valor maximo con el primer elemento del arreglo

	for (int i = 0; i < SIZE; i++)
	{
		int num = 0;
		// cout << valorMax << " es menor que " << numbers[i] << "?";
		if (valorMax < numbers[i])
			valorMax = numbers[i];
		// cout << " yes" << endl;
		// else
		// 	cout << " no" << endl;
	}
	cout << "y el valor maximo del arreglo es: " << valorMax << endl;
}