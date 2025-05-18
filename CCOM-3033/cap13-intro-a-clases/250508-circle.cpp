#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle myAwesomeCircle;
	cout << "el radio es: " << myAwesomeCircle.getRadio() << endl;
	myAwesomeCircle.setRadio(5);
	cout << "el radio es: " << myAwesomeCircle.getRadio() << endl;
	cout << "el diametro es: " << myAwesomeCircle.getDiametro() << endl;
	cout << "el area es: " << myAwesomeCircle.getArea() << endl;
	return 0;
}