#include <iostream>

using namespace std;

int cuadrar(int x)
{
	return x * x;
}

int suma1(int x)
{
	return x + 1;
}

int main()
{
	int x = 5;
	int cuadrado = cuadrar(x);
	int result = suma1(cuadrado);
	cout << result
			 << endl;
	return 0;
}
