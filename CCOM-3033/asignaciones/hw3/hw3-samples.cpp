#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Ejemplo 1
	// cout << "Número\tRaíz Cuadrada" << endl;
	// cout << "------\t-------------" << endl;
	// for (double x = 1.0; x <= 7.0; x++)
	// 	cout << x << "\t\t" << sqrt(x) << endl;

	// Ejemplo 2
	// cuenta de 0 - 9
	// int ctr = 0;
	// for (; ctr < 10; ctr++)
	// 	cout << ctr << endl;

	// Ejemplo 3
	// eleva un numero a la 2
	for (int x = 0, y = 1; x < 6; x++)
	{
		cout << "(" << x << ", " << y << ")" << endl;
		y *= 2;
	}

	// Ejemplo 4
	for (int x = 0, y = 1; x < 6; x += 1, y *= 2)
		cout << "(" << x << ", " << y << ")" << endl;
}
