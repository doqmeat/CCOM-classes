/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
lab 8: divisor mayor comun
*/

#include <iostream>

using namespace std;

int gcd(int, int);
bool inputValidation(int);
bool inputValidation(int, int);

int main()
{
	cout << "Este programa calcula el divisor mayor comun (gcd) de dos numeros enteros no negativos, donde al menos uno de los numeros no es igual a 0.\n"
			 << endl;
	int num1, num2;		// declaramos los inputs para los dos numeros
	bool inputValido; // variable para la validacion de los dos numeros
	do
	{
		do
		{
			// le pide el primer numero al usuario
			cout << "Entre el primer numero: ";
			cin >> num1;
			inputValido = inputValidation(num1); // verifica que no sea un num negativo
		} while (!inputValido); // mientras el input no sea valido, se itera

		do
		{
			// le pide el segundo numero al usuario
			cout << "Entre el segundo numero: ";
			cin >> num2;
			inputValido = inputValidation(num2);
		} while (!inputValido);

		inputValido = inputValidation(num1, num2); // verifica que ambos numeros no sean 0

	} while (!inputValido); // si ambos numeros son 0, le pide al usuario los numeros otra vez

	int divisorMayorComun = gcd(num1, num2); // calcula el divisor mayor comun de ambos numeros

	// y se desplega en la pantalla
	cout << "\nEl gcd(" << num1 << ", " << num2 << ") = " << divisorMayorComun << endl;
	return 0;
}

// input: dos numeros enteros no negativos
// output: el divisor mayor comun (int) de los dos numeros
// uso: encuentra el divisor mayor comun entre los dos entrados
int gcd(int a, int b)
{
	if (b == 0) // caso base: b no puede ser igual a 0
	{
		return a;
	}
	else if (a % b == 0) // caso base: si 'b' divide a 'a'
	{
		return b;
	}
	else // caso recursivo:
	{
		int residuo = a % b;
		return gcd(b, residuo);
	}
}

// input: numero entero
// output: valor booleano
// uso: verifica que el argumento no sea un numero negativo
bool inputValidation(int num)
{
	if (num < 0) // si el numero es negativo retorna falso
	{
		cout << "\nEl numero no puede ser negativo, intente de nuevo." << endl;
		return false;
	}
	return true; // si es positivo retorna cierto
}

// input: dos numeros enteros
// output: valor booleano
// uso: verifica que ambos argumentos no sean 0
bool inputValidation(int num1, int num2)
{
	if (num1 == 0 && num2 == 0)
	{
		cout << "\nLos numeros no pueden ambos ser iguales a cero. Entre nuevamente ambos numeros." << endl;
		return false;
	}
	return true;
}