/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
HW3: ciclos worksheet
*/

#include <iostream>
using namespace std;

int main()
{

	// ejercicio 1
	// desplega solo los numeros pares desde 10 hasta -10
	for (int evenNum = 10; evenNum >= -10; evenNum -= 2)
	// se le resta 2 a 'evenNum' en cada ciclo
	{
		cout << evenNum;
		if (evenNum == -10)
			break; // break para que el ultimo numero salga sin la coma
		cout << ", ";
	}
	cout << endl;
	cout << endl;

	// ejercicio 2
	// desplega numeros del 1 hasta 22, saltando 2 numeros en cada ciclo.
	for (int skip2 = 1; skip2 <= 22; skip2 += 3) // se le suma 3 a 'skip2' en cada ciclo
	{
		cout << skip2;
		if (skip2 == 22)
			break; // break para que el ultimo numero salga sin la coma
		cout << ", ";
	}
	cout << endl;
	cout << endl;

	// ejercicio 3
	// desplega el valor de 'tresExponente' multiplicada por 3 en cada ciclo.
	for (int tresExponente = 1; tresExponente <= 81; tresExponente *= 3)
	{
		cout << tresExponente;
		if (tresExponente == 81)
			break; // break para que el ultimo numero salga sin la coma
		cout << ", ";
	}
	cout << endl;
	cout << endl;

	// ejercicio 4
	// desplega los numeros del 0 hasta 14, saltando los multiplos de 3
	for (int skip3Table = 0; skip3Table <= 14; skip3Table++)
	{
		// se calcula el residio de 'skip3Table' cuando es dividido por 3
		int res_3 = skip3Table % 3;
		if (res_3 == 0 && skip3Table != 0) // si 'res_3' da a 0 significa que el numero es un multiplo de 3. tambien verifica que 'skip3Table' no sea 0 para que no lo salte.
			continue;												 // si es True, salta a la proxima iteracion sin desplegar el numero.
		cout << skip3Table;
		if (skip3Table == 14)
			break; // break para que el ultimo numero salga sin la coma
		cout << ", ";
	}
	cout << endl;
	cout << endl;

	// ejercicio 5
	// desplega el valor de 'div2' dividido entre 2 en cada ciclo
	for (int div2 = 54; div2 >= 0; div2 /= 2)
	{
		cout << div2;
		if (div2 == 0)
			break; // break para que el ultimo numero salga sin la coma
		cout << ", ";
	}
	cout << endl;
	cout << endl;

	// ejercicio 6
	// desplega el ABCdario utilizando el valor ASCII como un entero
	for (char letraASCII = 65; letraASCII <= 90; letraASCII++)
	{
		// y luego lo convertirmos en un char utilizando type casting
		cout << letraASCII;
		if (letraASCII == 90)
			break; // break para que el ultimo numero salga sin la coma
		cout << ", ";
	}
	cout << endl;

	return 0;
}