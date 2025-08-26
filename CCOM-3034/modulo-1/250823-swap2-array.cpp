#include <iostream>
using namespace std;

int main()
{
	int valor = 4;
	int SIZE = 8;
	// {2, 6, 4, 1, 5, 7, 8, 3}
	int arreglo[SIZE] = {2, 6, 4, 1, 5, 7, 8, 3};
	int i1 = 0;				 // el primer indice del arreglo
	int i2 = SIZE - 1; // el ultimo indice del arreglo

	int i;
	int temp; // variable temporera
	bool swapReady1 = false;
	bool swapReady2 = false;

	cout << "arreglo original: " << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << arreglo[i];
		if (i < SIZE - 1)
			cout << ", ";
	}
	cout << endl;

	do
	{
		if (arreglo[i1] <= valor) // si el numero es menor o igual que el valor
			i1++;										// se queda ahi y brinca al proximo indice
		else											// si es mayor que el valor...
		{
			temp = arreglo[i1]; // se guarda en temp y actualiza swapReady
			swapReady2 = true;
		}

		if (arreglo[i2] > valor) // si el numero es mayor
			i2--;									 // se queda ahi y brinca al siguiente
		else
		{
			swapReady1 = true;
		}

		// si ambos indices estan listos para ser cambiados...
		if (swapReady1 && swapReady2)
		{
			arreglo[i1] = arreglo[i2];
			arreglo[i2] = temp;
			// se resetean swapReady y se brincan los indices
			swapReady1 = false;
			swapReady2 = false;
			i1++;
			i2--;
		}

	} while (i1 != i2); // mientras los indices no sean los mismos...

	// se demustra el ciclo...

	cout << "arreglo swapped: " << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << arreglo[i];
		if (i < SIZE - 1)
			cout << ", ";
	}
	cout << endl;
	return 0;
}
