/* Desteny Hernandez
 github: desteny-hernandez
 num de estudiante: 401-23-3159
 lab 2: tres numeros aleatorios */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));

	int maximo = 100, minimo = 0, num1, num2, num3;
	num1 = rand() % (maximo - minimo + 1) + minimo;
	num2 = rand() % (maximo - minimo + 1) + minimo;
	num3 = rand() % (maximo - minimo + 1) + minimo;

	cout << "Numeros aleatorios generados: " << num1 << " " << num2 << " " << num3 << endl;

	// se verifica si num1 es el mayor de los 3 números generados aleatoriamente...
	if (num1 >= num2 && num1 >= num3)
	{
		// verifica si num2 es mayor o igual que num3:
		if (num2 >= num3)
		{
			cout << "Orden descendiente: " << num1 << " >= " << num2 << " >= " << num3 << endl;
		}
		else
		{
			cout << "Orden descendiente: " << num1 << " >= " << num3 << " >= " << num2 << endl;
		}
	} // si retorna false, significa que num2 o num3 son mayores que num1. verificamos si num2 es el mayor de los 3 números generados ...
	else if (num2 >= num1 && num2 >= num3)
	{
		// si es true, preguntamos si num1 es mayor o igual que num3:
		if (num1 >= num3)
		{
			cout << "Orden descendiente: " << num2 << " >= " << num1 << " >= " << num3 << endl;
		}
		else
		{
			cout << "Orden descendiente: " << num2 << " >= " << num3 << " >= " << num1 << endl;
		}
	}
	// al retornar false otra vez, significa que num3 es el mayor de los 3 numeros generados aleatoriamente.
	else if (num3 >= num1 && num3 >= num2)
	{
		// verificamos si num2 es mayor o igual que num1:
		if (num2 >= num1)
		{
			cout << "Orden descendiente: " << num3 << " >= " << num2 << " >= " << num1 << endl;
		}
		else
		{
			cout << "Orden descendiente: " << num3 << " >= " << num1 << " >= " << num2 << endl;
		}
	}

	return 0;
}