#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// leer contenido de un archivo y almacenarlo en un arreglo....
	const int SIZE = 10;
	string nombres[SIZE];
	ifstream nombresConnect("nombres.txt");
	for (int i = 0; i < SIZE && nombresConnect >> nombres[i]; i++)
	{
		cout << nombres[i] << endl;
	}

	nombresConnect.close();
}