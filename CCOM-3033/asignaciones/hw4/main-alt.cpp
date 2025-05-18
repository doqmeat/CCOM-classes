/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
HW4: distribucion de notas
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream notasConnect("notas.txt"); // conectamos y abrimos el archivo para leerlo

	if (notasConnect.fail()) // si ocurre un error al abrirlo..
	{
		cout << "ocurrio un error abriendo notas.txt :-(";
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

		// para cada nota hacemos un cout y ponemos el setw() a la cantidad
		// que le corresponde utilizando las variables contadoras (A, B, C, D, F) anteriores y entonces...
		cout.fill('*'); // llena los espacios en blanco de asteriscos de acuerdo a la cantidad de notas.

		// inicializamos los caracteres para el operador condicional
		char asterisk = '*';
		char blanco = ' ';

		// se utiliza el operador condicional para que desplegue un 'blanco' si la cantidad de notas es 0
		// si no es 0... entonces desplega un solo asterisco

		A = 0;

		cout << "A : " << setw(A) << ((A == 0) ? blanco : asterisk) << " (" << A << ')' << endl;
		cout << "B : " << setw(B) << ((B == 0) ? blanco : asterisk) << " (" << B << ')' << endl;
		cout << "C : " << setw(C) << ((C == 0) ? blanco : asterisk) << " (" << C << ')' << endl;
		cout << "D : " << setw(D) << ((D == 0) ? blanco : asterisk) << " (" << D << ')' << endl;
		cout << "F : " << setw(F) << ((F == 0) ? blanco : asterisk) << " (" << F << ')' << endl;

		notasConnect.close(); // cierra la coneccion con el archivo
	}
	return 0;
}