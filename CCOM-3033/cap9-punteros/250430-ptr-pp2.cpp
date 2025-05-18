#include <iostream>

using namespace std;

void tripleVar(double *puntero, int size)
{
	// triplicar cada elemento del puntero
	for (int i = 0; i < size; i++)
	{
		*(puntero + i) *= 3;
	}
}

int main()
{
	// declarar un puntero

	int x = 10;
	int *ptr = &x;

	// crear un puntero usando dynamic allocation
	// inicializacion
	double *ptr2 = new double;

	// solo se puede accesar mediante el operador de indireccion
	*ptr2 = 7.5;

	// se utiliza la funcion que tiene un puntero (direccion) como parametro
	// cout << tripleVar(ptr2) << endl;

	int size = 4;
	double nums[size] = {3.4, 2.5, 1.7, 8.3};
	double *ptrNum = nums;

	cout << "arreglo original: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(ptrNum + i) << " ";
	}
	cout << endl;

	tripleVar(ptrNum, size);

	cout << "arreglo triplicado: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(nums + i) << " ";
	}
	cout << endl;

	delete ptr2;
}