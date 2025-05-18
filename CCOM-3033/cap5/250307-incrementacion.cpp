#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	// postfix, var tiene 0, se le añade despues
	cout << x++ << endl;
	// ahora es 1
	cout << x << endl;
	// prefix, ahora tiene 2
	cout << ++x << endl;
	// se queda en 2
	cout << x << endl;
	// postfix, la var tiene valor de 2 todavia por que se incrementa despues
	cout << x++ << endl;
	return 0;
}