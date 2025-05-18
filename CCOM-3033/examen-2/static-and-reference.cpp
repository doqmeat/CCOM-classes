#include <iostream>

using namespace std;

int changeMe(int &);

int main()
{
	int num = 10;
	for (int i = 0; i < 3; i++)
	{
		cout << changeMe(num) << endl;
	}
	return 0;
}

int changeMe(int &x)
{
	static int contador = 0; // de veces que la funcion fue invocada

	cout << "esta funcion ha sido invocada.... " << contador << " veces" << endl;
	return x++;
}