/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
lab6: busqueda de nombres
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	cout << "Entre un nombre escrito con mayuscula y sin acento:" << endl;

	string nombreBuscado; // se declara la variable para el input
	cin >> nombreBuscado;

	string nombreArchivo; // variable donde se guardan los nombres de los archivos

	bool nombreEncontrado = false; // flag para cuando el while loop encuentre el nombre en el archivo

	int i; // se declara la variable contadora afuera del for loop para poder usarla afuera del for loop en el cout

	for (i = 1; i <= 4; i++) // itera desde 1 al 4
	{
		// creamos una coneccion para el file utilizando el int de la variable contadora 'i'
		ifstream nombresConnect("nombres" + to_string(i) + ".txt");

		// se busca cada nombre en el archivo
		while (nombresConnect >> nombreArchivo)
		{
			// si 'nombreArchivo' coincide con el 'nombreBuscado'...
			if (nombreArchivo == nombreBuscado)
			{
				nombreEncontrado = true;
				break;
				// 'nombreEncontrado' se actualiza a true y se sale del while loop
			}
		}
		nombresConnect.close(); // se cierra el archivo

		// si el nombre fue encontrado.. se sale del for loop
		if (nombreEncontrado)
			break;
	}

	if (nombreEncontrado) // si es true... encontro el nombre
	{
		cout << "El nombre " << nombreArchivo << " esta en el archivo \"nombres" << i << ".txt\"" << endl;
	}
	else // si es false... no encontro el nombre
	{
		cout << "El nombre " << nombreBuscado << " no esta en los archivos." << endl;
	}

	return 0;
}