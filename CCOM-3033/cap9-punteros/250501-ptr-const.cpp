#include <iostream>

int main()
{
	double arreglo[3] = {1.3, 4.5, 6.7};
	double *const ptr = arreglo;

	double num = 1.2;
	const double *const ptr2 = &num;

	return 0;
}