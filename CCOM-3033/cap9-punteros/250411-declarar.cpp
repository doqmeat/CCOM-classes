#include <iostream>

using namespace std;

int main()
{
	int x = 4;
	int &y = x; // variable de referencia, x; variable referente, y

	cout << y << " y " << x << " son iguales." << endl;		// 4
	cout << &y << " y " << &x << " son iguales." << endl; // direccion de la variable

	int *ptr = nullptr; // definir un puntero
											// * - indica que la variable es una variable puntero que apunta a una variable tipo de dato int. al declarar una variable puntero

	ptr = &x; // se le asigna la direccion de x

	cout << "direccion de donde apunta el puntero: " << ptr << endl;
	cout << "valor de la direccion que apunta el puntero es: " << *ptr << endl;
	cout << "direccion del puntero" << &ptr << endl; // la direccion del puntero y la direccion de donde apunta el puntero no son las mismas!

	*ptr = 18181818;

	cout << x << " " << y << " " << *ptr << endl;
}