// implementation file
#include "Circle.h"
#include <iostream>

using namespace std;
// constructores: se invoca automaticamente cuando se crea una instancia de un objeto de una clase

// default constructor: no aceptan argumentos
Circle::Circle()
{
	cout << "im a circle :3" << endl;
}

// deconstructor : se invoca automaticamente cuando se destruye el objeto
Circle::~Circle()
{
	cout << "goodbye... circle" << endl;
}

// constructor con argumentos default
// en este caso el constructor se convierte en un constructor default
Circle::Circle(double r = 0)
{
	if (r < 0)
		radio = 0;
	else
		radio = r;
}

void Circle::setRadio(double r)
{
	if (r < 0)
		radio = 0;
	else
		radio = r;
}

double Circle::getRadio() const
{
	return radio;
}

double Circle::getDiametro() const
{
	return radio * 2.0;
}

double Circle::getArea() const
{
	return PI * radio * radio;
}