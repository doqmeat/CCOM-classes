#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*
	corto circuito: verifica la primera cosa de un operador logico que sea binario (&& o ||)
	*/

	// operador condicional: expresion ? expresion : expresion
	// funciona como: if (expresion){ expresion } else {expresion }
	// se le puede asignar a una variable para hacer una expresion condicional
	int x;
	cout << "de un valor a la x: ";
	cin >> x;
	string yes = "el numero es mayor o igual que 10!", no = "el numero es menor o igual que 10 :(";

	// if (x >= 10)
	// {
	// 	cout << "el numero es mayor o igual que 10!" << endl;
	// }
	// else
	// {
	// 	cout << "el numero es menor o igual que 10 :(" << endl;
	// }

	// entonces...
	cout << ((x >= 10) ? yes : no) << endl;
	return 0;
}