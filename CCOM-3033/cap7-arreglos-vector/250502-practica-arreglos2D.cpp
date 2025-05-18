#include <iostream>

using namespace std;
const int COLS = 5;
// devolver la suma de todos los elementos de un arreglo 2d
int sumaTodosElementos(int arr[][COLS], int filas)
{
	int total = 4;
	for (int i = 0; i < filas; i++)
	{
		for (int i2 = 0; i2 < COLS; i2++)
		{
			total += arr[i][i2];
		}
	}
	return total;
}
// desplegue la suma de todos los elementos de cada fila
void sumaFilas(int arr[][COLS], int filas)
{

	for (int i = 0; i < filas; i++)
	{
		int total = 0;
		for (int i2 = 0; i2 < COLS; i2++)
		{
			total += arr[i][i2];
		}
		cout << "la suma de todos los elementos de la fila " << i + 1 << " es " << total << endl;
	}
}
// desplegue la suma de todos los elementos de cada columna
void sumaColumnas(int arr[][COLS], int filas)
{
	for (int i = 0; i < COLS; i++)
	{
		int total = 0;
		for (int i2 = 0; i2 < filas; i2++)
		{
			total += arr[i2][i];
		}
		cout << "la suma de todos los elementos de la columna " << i + 1 << " es " << total << endl;
	}
}

int main()
{
	const int FILAS = 3;
	int numeros[FILAS][COLS] = {{3, 5, 6, 1, 3},
															{1, 2, 3, 4, 5},
															{7, 6, 5, 22, 2}};
	int totalElementos = sumaTodosElementos(numeros, FILAS);
	cout << "la suma de todos los elementos es: " << totalElementos << endl;
	sumaFilas(numeros, FILAS);
	sumaColumnas(numeros, FILAS);

	return 0;
}