#include <iostream>

using namespace std;

int incrementacion();

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cout << incrementacion() << endl;
	}
}

// input: nada
// output: int
// añade 1 numero mas a la var cada vez que se ejecuta
int incrementacion()
{
	static int var = 0;
	return var++;
}