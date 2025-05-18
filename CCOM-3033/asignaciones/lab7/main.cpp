/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3102
lab7: funcion ordenar3
*/

#include <iostream>
using namespace std;

void ordenar3(double &, double &, double &); // prototipo

int main()
{
	// declara las variables para los numeros
	double num1, num2, num3;

	// se le pide al usuario 3 numeros reales
	cout << "Entre 3 numeros reales: ";
	cin >> num1 >> num2 >> num3;

	ordenar3(num1, num2, num3); // invocar funcion ordenar3

	// desplega las variables con los valores intercambiados en la pantalla
	cout << "Los numeros entrados en orden ascendiente son: "
		 << num1 << ' '
		 << num2 << " y "
		 << num3 << endl;
	return 0;
}

// input: 3 variables que contengan numeros reales
// intercambia los valores de los argumentos de manera que esten en orden ascendiente

void ordenar3(double &numRef1, double &numRef2, double &numRef3)
{
	double temp; // se inicializa variable temporera utilizada en los if statements

	// si numRef1 < numRef2 < numRef3 entonces no se necesita ningun cambio.

	// empezamos con si numRef1 < numRef3 < numRef2...
	if (numRef1 < numRef3 && numRef3 < numRef2)
	{
		temp = numRef2;
		numRef2 = numRef3;
		numRef3 = temp;
	}

	// si numRef2 < numRef1 < numRef3...
	else if (numRef2 < numRef1 && numRef1 < numRef3)
	{
		temp = numRef1;
		numRef1 = numRef2;
		numRef2 = temp;
	}

	// si numRef2 < numRef3 < numRef1 ...
	else if (numRef2 < numRef3 && numRef3 < numRef1)
	{
		temp = numRef1;
		numRef1 = numRef2;
		numRef2 = numRef3;
		numRef3 = temp;
	}

	// si numRef3 < numRef1 < numRef2 ...
	else if (numRef3 < numRef1 && numRef1 < numRef2)
	{
		temp = numRef1;
		numRef1 = numRef3;
		numRef3 = numRef2;
		numRef2 = temp;
	}
	// si numRef3 < numRef2 < numRef1 ...
	else if (numRef3 < numRef2 && numRef2 < numRef1)
	{
		temp = numRef1;
		numRef1 = numRef3;
		numRef3 = temp;
	}
}