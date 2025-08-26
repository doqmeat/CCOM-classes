#include <iostream>
using namespace std;

int main()
{
	int SIZE = 5;
	int arreglo[SIZE] = {2, 6, 4, 1, 5};
	int valor = 3;

	int i;
	int iA = 0;
	int iB = 0;
	int arregloA[SIZE];
	int arregloB[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		if (arreglo[i] <= valor)
		{
			arregloA[iA] = arreglo[i];
			iA++;
		}
		else
		{
			arregloB[iB] = arreglo[i];
			iB++;
		}
	}

	// se copian estas dos listas en la original
	int contador = 0;

	// se copia la primera lista
	for (i = 0; i < iA; i++)
	{
		arreglo[i] = arregloA[i];
		contador++;
	}

	// la segunda
	for (i = 0; i < iB; i++)
	{
		arreglo[contador] = arregloB[i];
		contador++;
	}

	cout << "arreglo original ordenado:" << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << arreglo[i] << endl;
		cout << endl;
	}

	return 0;
}