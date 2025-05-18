/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
Lab10: Lo Shu Magic Square
*/

#include <iostream>

using namespace std;

const int COLS = 3; // columnas del arreglo

// prototipos
int sumarFila(int[][COLS], int);
int sumarColumna(int[][COLS], int, int);
int sumarDiagonalAbajo(int[][COLS]);
int sumarDiagonalArriba(int[][COLS]);
bool isMagicSquare(int, int, int, int, int, int, int, int);

int main()
{
	const int SIZE = 3;					 // filas del arreglo
	int magicSquare[SIZE][COLS]; // declara arreglo

	// proposito
	cout << "Este programa determina si el arreglo en 2D dado es un Lo Shu magic square. Utilize numeros enteros para los elementos.\n"
			 << endl;

	// le pedimos al usuario que ingrese los elementos
	// itera sobre cada fila
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Ingrese los 3 elementos de la fila #" << i + 1 << " separados por espacios: ";
		// itera sobre cada columna
		for (int i2 = 0; i2 < COLS; i2++)
		{
			cin >> magicSquare[i][i2];
		}
	}

	// invocamos las funciones para las sumas y las guardamos en variables
	int sumaFila1 = sumarFila(magicSquare, 0);
	int sumaFila2 = sumarFila(magicSquare, 1);
	int sumaFila3 = sumarFila(magicSquare, 2);
	int sumaColumna1 = sumarColumna(magicSquare, SIZE, 0);
	int sumaColumna2 = sumarColumna(magicSquare, SIZE, 1);
	int sumaColumna3 = sumarColumna(magicSquare, SIZE, 2);
	int sumaDiagonal1 = sumarDiagonalAbajo(magicSquare);
	int sumaDiagonal2 = sumarDiagonalArriba(magicSquare);

	// invocamos isMagicSquare donde crearemos un nuevo arreglo con las sumas para verificarlas
	bool magicSquareValid = isMagicSquare(sumaFila1, sumaFila2, sumaFila3, sumaColumna1, sumaColumna2, sumaColumna3, sumaDiagonal1, sumaDiagonal2);

	// si isMagicSquare retorna cierto...
	if (magicSquareValid)
		cout << "Usted ingreso un Lo Shu Magic Square :D" << endl;
	else
		cout << "Usted ingreso no un Lo Shu Magic Square D:" << endl;
}

// input : arreglo, el indice de la fila que queremos sumar
// output : suma de los elementos de esa fila
int sumarFila(int arreglo[][COLS], int indice)
{
	int suma = 0;
	// la misma fila se itera por cada columna
	for (int columna = 0; columna < COLS; columna++)
		suma += arreglo[indice][columna];
	return suma;
}

// input : arreglo, el tamaño del arreglo, el indice de la columna que queremos sumar
// output : suma de los elementos de esa columna
int sumarColumna(int arreglo[][COLS], int size, int indice)
{
	int suma = 0;
	// la misma columna se itera cada fila
	for (int fila = 0; fila < size; fila++)
		suma += arreglo[fila][indice];
	return suma;
}

// input : arreglo
// output : suma de los elementos diagonal hacia abajo
int sumarDiagonalAbajo(int arreglo[][COLS])
{
	int suma = 0;
	// es un cuadrado asi que utiliza COLS como variable control para no pedir el size como argumento.
	for (int i = 0; i < COLS; i++)
		suma += arreglo[i][i];
	return suma;
}

// input : arreglo
// output : suma de los elementos diagonal hacia arriba
int sumarDiagonalArriba(int arreglo[][COLS])
{
	int suma = 0;
	// la suma debe ser ar[2][0] + ar[1][1] + ar[0][2]
	// variable contadora para fila disminuye en cada iteracion mientras la variable para las columnas aumenta
	for (int fila = 2, columna = 0; columna < COLS; columna++, fila--)
		suma += arreglo[fila][columna];
	return suma;
}

// input : las 8 sumas previas
// output : si el arreglo 2D es un Lo Shu magic square o no.
bool isMagicSquare(int sumaFila1, int sumaFila2, int sumaFila3, int sumaColumna1, int sumaColumna2, int sumaColumna3, int sumaDiagonal1, int sumaDiagonal2)
{
	// se crea un arreglo nuevo con las 8 sumas
	const int sumaSIZE = 8;

	int sumas[8] = {sumaFila1, sumaFila2, sumaFila3, sumaColumna1, sumaColumna2, sumaColumna3, sumaDiagonal1, sumaDiagonal2};

	// para poder iterar sobre cada suma verificando
	// si cada una es igual a las demas
	for (int i = 0; i < sumaSIZE; i++)
	{
		for (int i2 = 0; i2 < sumaSIZE; i2++)
		{
			if (sumas[i] != sumas[i2])
				// si encuentra una suma no igual a otra...
				return false;
		}
	}
	// si termina el for loop, entonces todas las sumas son iguales
	return true;
}