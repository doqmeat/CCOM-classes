/*
Desteny Hernandez De Juan
Github: desteny-hernandez
401-23-3159
HW5: Funcion isPrime
*/

#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int); // prototipo de isPrime()

int main()
{

	ofstream primosFileConnect("primos.txt"); // coneccion para escribir en el archivo

	// se inicializan variables contadoras para 'num' para las iteraciones.
	// y numPrimo para la cantidad de numeros primos encontrados.
	// mientras hayan menos de 100 numeros primos encontrados...

	for (int num = 0, numPrimo = 0; numPrimo < 100; num++)
	{
		if (isPrime(num)) // verifica si num es primo
		{
			primosFileConnect << num << endl; // se le escribe el numero primo en el archivo
			numPrimo++;												// se le añade al contador de numPrimo
		}
	}
	primosFileConnect.close();
}

// input: numero int mayor que 2
// output: dato booleano
// determina si un numero es primo
bool isPrime(int num)
{
	if (num / 2 == 1 || num / 3 == 1) // si el numero dividido por el mismo da como resultado 1... (caso especial para 2 y 3)
		return true;
	else if (num > 2 && (num % 3 != 0) && (num % 2 != 0)) // si el numero no es divisible entre 3 ni 2...
		return true;																				// retorna true.
	return false;
}