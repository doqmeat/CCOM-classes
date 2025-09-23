// implementation file

#include "List.h"
#include <iostream>

using namespace std;

List::List()
{
	size = 0;					// comienza vacia
	cap = 4;					// con capacidad de 4
	a = new int[cap]; // se inicializa el puntero arreglo dinamico
}

// PARTE DEL BIG 5!
// destructor para la clase de lista
List::~List()
{
	if (a != nullptr)
		delete[] a; // se borra el arreglo dinámico
								// a = nullptr;	// no es necesario!!!
}

void List::insert(int value, int position)
{
	if (size == cap)
	{
		cap *= 2;							 // se multiplica la capacidad por 2
		int *b = new int[cap]; // se crea otro arreglo con mas cap
		for (int i = 0; i < size; i++)
			b[i] = a[i]; // se copian los elementos de a en b
		delete[] a;		 // se borra arreglo dinámico a
		a = b;				 // ahora a apunta al arreglo dinamico de b
	}

	if (position < size)
	{
		for (int i = size; i > position; i--)
			a[i] = a[i - 1];
	}
	else if (position > size || position < 0)
		return; // error... don't do anything

	// update values
	a[position] = value;
	size++;
}

// uso: remueve el elemento de esa posicion de la lista
void List::remove(int position)
{
	if (position < size - 1)
	{
		for (int i = position; i < size - 1; i++)
			a[i] = a[i + 1];
	}
	else if (position > size - 1 || position < 0)
		return; // error

	// update size value
	size--;
	// update arreglo capasidad si al dividir por 4 su residuo es 0
	if (size % 4 == 0 && cap != 4)
	{
		cap /= 2;							 // se reduce la capacidad en 2
		int *b = new int[cap]; // nuevo arreglo dinámico con menos capasidad
		for (int i = 0; i < size; i++)
			b[i] = a[i]; // se copian los elementos
		delete[] a;		 // se borra el arreglo dinamico de a
		a = b;				 // a apunta al arreglo de b
	}
}

// output: prints your awesome list
void List::print() const
{
	cout << "Your awesome list of size " << size << " and cap " << cap << " :3 ... ";
	for (int i = 0; i < size; i++)
	{
		cout << a[i];
		if (i + 1 == size)
			cout << endl;
		else
			cout << ", ";
	}
}

// output : tamaño de la lista
int List::getSize() const
{
	return size;
}

// input : valor para encontrar en la lista
// output: posicion donde se encuentra el valor
int List::find(int value) const
{
	for (int i = 0; i < size; i++)
		if (a[i] == value)
			return i; // fue encontrado
	return -1;		// no fue encontrado....
}

// PARTE DEL BIG FIVE!
// asignarle los data members de l2 a l1
List &List::operator=(const List &l2) // & = returning un obj por referencia!, const = para no cambiar los valores de los data members de l2
{
	if (this != &l2) // verifica que no sean la misma dirección
	{
		size = l2.size; // se le asignan mismo size y capacidad
		cap = l2.cap;
		delete[] a;				// se borra el arreglo dinámico
		a = new int[cap]; // se inicializa uno nuevo
		for (int i = 0; i < size; i++)
			a[i] = l2.a[i];
	}
	return *this; // this pointer dereferenced
}