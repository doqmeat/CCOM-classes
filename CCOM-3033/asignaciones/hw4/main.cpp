/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
HW4: distribucion de notas
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream notasConnect("notas.txt"); // conectamos y abrimos el archivo para leerlo

	if (notasConnect.fail()) // si ocurre un error al abrirlo..
	{
		cout << "ocurrio un error abriendo notas.txt";
	}
	else // si no...
	{
		double P; // declaramos la P donde quarda los porcentajes de las notas en el archivo

		int A = 0, B = 0, C = 0, D = 0, F = 0; // inicializamos la variables contadoras de las notas para el 'if' y los 'else if'

		cout << "La distribucion de notas en el archivo es la siguiente:" << endl;

		while (notasConnect >> P) // va dar true mientras quede data por iterar
		{
			// le asignamos a cada nota una variable contadora para que lleve la cuenta de cada nota en el archivo
			if (P >= 90 && P <= 100)
				A++;

			else if (P >= 80 && P < 90)
				B++;

			else if (P >= 70 && P < 80)
				C++;

			else if (P >= 60 && P < 70)
				D++;

			else if (P < 60)
				F++;
		}

		// para cada nota hacemos un for loop donde se da cout a los asteriscos totales
		// de cada nota utilizando las variables contadoras anteriores

		cout << "A : ";
		for (int i = 0; i < A; i++)
			cout << "*";
		cout << " (" << A << ')' << endl;

		cout << "B : ";
		for (int i = 0; i < B; i++)
			cout << "*";
		cout << " (" << B << ')' << endl;

		cout << "C : ";
		for (int i = 0; i < C; i++)
			cout << "*";
		cout << " (" << C << ')' << endl;

		cout << "D : ";
		for (int i = 0; i < D; i++)
			cout << "*";
		cout << " (" << D << ')' << endl;

		cout << "F : ";
		for (int i = 0; i < F; i++)
			cout << "*";
		cout << " (" << F << ')' << endl;
	}

	notasConnect.close(); // cierra la coneccion con el archivo

	return 0;
}