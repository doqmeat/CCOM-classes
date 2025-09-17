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

	// se inicializan variables contadoras para 'num' para las iteraciones y se utiliza como argumento de isPrime
	// y numPrimo para la cantidad de numeros primos encontrados.
	// mientras hayan menos de 100 numeros primos encontrados...

	for (int num = 2, numPrimo = 0; numPrimo < 100; num++)
	{
		if (isPrime(num)) // verifica si num es primo
		{
			primosFileConnect << num << endl; // se le escribe el numero primo en el archivo
			numPrimo++;												// se le añade al contador de numPrimo
		}
	}
	primosFileConnect.close();

	return 0;
}

// input: numero int mayor que 2
// output: dato booleano
// determina si un numero es primo
bool isPrime(int num)
{
	// verifica si num tiene otro divisor que no sea 1, o el mismo num.
	for (int i = 2; i <= num - 1; i++)
	{
		if (num % i == 0) // si esto da a falso entonces si tiene otro divisor...
			return false;		// y retorna falso pq no es primo
	}
	return true;
}