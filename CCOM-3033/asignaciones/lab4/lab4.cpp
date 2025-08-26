/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
Lab 4: Fibonacci

referencia: Calculating Fibonacci numbers in C++ with a while loop - https://www.youtube.com/watch?v=YvsxcyPg2qY
*/

#include <iostream>
using namespace std;

int main()
{
	// declaramos variable 'num' donde el usuario entrará el número entero positivo
	int num;
	cout << "Entre un numero entero positivo: ";
	cin >> num;

	while (num < 0)
	{
		cout << "ERROR: entre un numero entero positivo: ";
		cin >> num;
	}

	// si 'num' pasa el input validation... inizializamos los primeros dos números de la secuencia de fibonacci: 0 y 1
	int termino1 = 0, termino2 = 1;
	cout << "La secuencia es: ";

	// inicializamos la variable para el valor de la suma de los terminos
	int fibonacci = 0;

	// mientras la suma de la secuencia de fibonacci sea menor que el numero dado, se seguira repitiendo el ciclo
	while (fibonacci < num)
	{
		// hacemos la suma de fibonacci donde se suman los dos terminos anteriores.
		fibonacci = termino1 + termino2;

		// desplega el 'termino1' en cada iteracion antes de cambiarle el valor
		cout << termino1 << ", ";

		// asignamos el valor de 'termino2' al 'termino1'
		termino1 = termino2;

		// y asignamos el valor de la suma de fibonacci a 'termino2' para utilizarlo como un termino
		termino2 = fibonacci;
	}
	// desplegamos el penultimo termino utilizado en la suma de fibonacci para que salga sin la coma en la pantalla.
	cout << termino1 << "\n";

	return 0;
}