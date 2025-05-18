#include <iostream>

using namespace std;

int main()
{
	char arreglo[3] = {'a', '3', '@'};
	char *ptr = arreglo;
	cout << ptr << endl; // desplega el arreglo de char como un string!!!!!!!
	// por eso no desplega la direccion
	cout << &ptr << endl; // y debemos poner el operador de direccion en el puntero para que nos desplegue la direccion
	cout << *ptr << endl; // *(ptr + 0) = 'a'

	cout << " ---------------- " << endl;

	string nombre[2] = {"desteny", "hernandez"};
	string *ptr2 = nombre;
	cout << ptr2 << endl;	 // desplega la direccion
	cout << *ptr2 << endl; // *(ptr2 + 0) = "desteny"

	cout << " ---------------- " << endl;

	int nums[4] = {15, 7, 5, 12};
	int *ptr3 = nums;
	cout << ptr3 << endl;	 // desplega la direccion
	cout << *ptr3 << endl; // *(ptr3 + 0) = "15"
}