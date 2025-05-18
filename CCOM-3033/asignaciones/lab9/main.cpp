/*
Desteny Hernandez De Juan
401-23-3159
github: desteny-hernandez
Lab9: menor que la media
*/

#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 10; // size del arreglo
	int datos[SIZE];		 // se declara el arreglo
	int suma = 0;				 // se inicializa variable para acumular la suma de los elementos del arreglo

	cout << "Este programa calcula la media de 10 datos reales." << endl;

	// el for loop le pide al usuario 10 numeros numeros
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Entre el dato #" << i + 1 << ": ";
		cin >> datos[i];	// input del usuario
		suma += datos[i]; // suma todos los elementos del arreglo
	}

	double media = suma / 10.0; // suma los elementos y calcula la media

	// desplega la media en la pantalla
	cout << "\nla media es: " << media;
	cout << " y los datos menores son: ";

	// desplega los numeros menores que la media
	for (int i = 0; i < SIZE; i++)
	{
		if (datos[i] < media) // mientras el elemento sea menor que la media...
		{
			cout << datos[i];
			cout << ", ";
		}
	}
	cout << endl;

	return 0;
}
