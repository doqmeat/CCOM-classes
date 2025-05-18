#include <iostream>

using namespace std;

const int COLUMNAS = 2;
const int SIZE = 3;

int arregloSumaTotal(const int[][COLUMNAS], int);
void arregloSumaFila(const int[][COLUMNAS], int);
void arregloSumaColumna(const int[][COLUMNAS], int);

int main()
{
	int numeros[SIZE][COLUMNAS] = {
			{1, 2},
			{10, 20},
			{2, 6}};

	int sumaTotal = arregloSumaTotal(numeros, SIZE);
	cout << "la suma total de tos los elementos del arreglo es: " << sumaTotal << endl;

	arregloSumaFila(numeros, SIZE);
	arregloSumaColumna(numeros, SIZE);
	return 0;
}

// devuelve la suma de todos los elementos de un arreglo 2D
int arregloSumaTotal(const int arreglo[][COLUMNAS], int size)
{
	int sumaTotal = 0;									 // inicializa variable acumuladora
	for (int row = 0; row < size; row++) // itera por cada fila, 3 filas
	{
		for (int col = 0; col < COLUMNAS; col++) // itera por cada columna, 2 columnas
		{
			sumaTotal += arreglo[row][col];
		}
	}
	return sumaTotal;
}

// desplegue la suma de los elementos de cada fila de un arreglo 2D
void arregloSumaFila(const int arreglo[][COLUMNAS], int size)
{
	int sumaFilas = 0;									 // inicializa variable contadora
	for (int row = 0; row < size; row++) // itera por cada fila
	{
		for (int col = 0; col < COLUMNAS; col++) // itera por cada columna
		{
			sumaFilas += arreglo[row][col]; // acumula los numeros de cada columna
		}
		cout << "suma de los elementos de la fila " << row + 1 << ": " << sumaFilas << endl; // se desplega el valor
		sumaFilas = 0;																																			 // se le da reset a la variable acumuladora para utilizarla en la siguiente iteracion
	}
}

// desplegue la suma de los elementos de cada columna de un arreglo 2D
void arregloSumaColumna(const int arreglo[][COLUMNAS], int size)
{
	int sumaColumnas = 0;										 // se inicializa la variable
	for (int col = 0; col < COLUMNAS; col++) // se itera por cada columna
	{
		for (int row = 0; row < size; row++) // se itera por cada fila
		{
			sumaColumnas += arreglo[row][col];
		}
		cout << "suma de los elementos de la columna " << col + 1 << ": " << sumaColumnas << endl; // se desplega el valor
		sumaColumnas = 0;																																					 // se le da reset a la variable acumuladora para utilizarla en la siguiente iteracion
	}
}