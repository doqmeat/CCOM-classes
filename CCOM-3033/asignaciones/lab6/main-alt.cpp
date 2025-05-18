#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	cout << "Entre un nombre escrito con mayuscula y sin acento:" << endl;

	string nombreBuscado;
	cin >> nombreBuscado;

	ifstream nombres1Connect("nombres1.txt");
	ifstream nombres2Connect("nombres2.txt");
	ifstream nombres3Connect("nombres3.txt");
	ifstream nombres4Connect("nombres4.txt");

	string nombreArchivo1;
	string nombreArchivo2;
	string nombreArchivo3;
	string nombreArchivo4;

	string nombreEncontrado;
	bool nombreFlag = false;

	if (nombres1Connect.fail())
	{
		cout << "ocurrio un error al abrir el archivo" << endl;
	}
	else
	{
		while (nombres1Connect >> nombreArchivo1)
		{
			if (nombreArchivo1 == nombreBuscado)
			{
				nombreEncontrado = nombreArchivo1;
				nombreFlag = true;
				break;
			}
		}
		while (nombres2Connect >> nombreArchivo2)
		{
			if (nombreArchivo2 == nombreBuscado)
			{
				nombreEncontrado = nombreArchivo2;
				nombreFlag = true;
				break;
			}
		}
		while (nombres3Connect >> nombreArchivo3)
		{
			if (nombreArchivo3 == nombreBuscado)
			{
				nombreEncontrado = nombreArchivo3;
				nombreFlag = true;
				break;
			}
		}
		while (nombres4Connect >> nombreArchivo4)
		{
			if (nombreArchivo4 == nombreBuscado)
			{
				nombreEncontrado = nombreArchivo4;
				nombreFlag = true;
				break;
			}
		}
		if (nombreFlag) // si es true... encontro el nombre
		{
			cout << "El nombre " << nombreEncontrado << " esta en el archivo." << endl;
		}
		else // si es false... no encontro el nombre
		{
			cout << "El nombre " << nombreBuscado << " no esta en los archivos. :-(" << endl;
		}
	}

	nombres1Connect.close();
	nombres2Connect.close();
	nombres3Connect.close();
	nombres4Connect.close();
	return 0;
}