// Desteny Hernandez
// 401-23-3159
// CCOM 303 - Lab 02

#include <iostream>
#include <stdexcept>
#include "Rectangle.h"
#include <string>
#include <cmath>

using namespace std;

Rectangle::Rectangle() : x0(0), y0(0), x1(2), y1(2) {}

Rectangle::Rectangle(int xx0, int yy0, int xx1, int yy1)
{
	if (xx0 >= xx1 || yy0 >= yy1)
		throw std::invalid_argument("bad coordinates given to rectangle");
	else
	{
		x0 = xx0;
		y0 = yy0;
		x1 = xx1;
		y1 = yy1;
	}
}

// output: el área de un rectangulo -> base * ancho
int Rectangle::area() const
{
	int base = x1 - x0;
	int largo = y1 - y0;
	return base * largo;
}

// output: perimetro de un rectangulo -> 2(base + ancho)
int Rectangle::perimeter() const
{
	int base = x1 - x0;
	int largo = y1 - y0;
	return 2 * (base + largo);
}

// input : un objeto Rectangle
// output : bool si el rectangulo invocado tiene las mismas coordenadas que el rectangulo en el argumento
bool Rectangle::operator==(const Rectangle &r) const
{
	if (x0 == r.x0 && y0 == r.y0 && x1 == r.x1 && y1 == r.y1)
		return true;
	return false;
}

// centro de un rectangulo -> (x0 + x1) / 2, (y0 + y1) / 2 )
// input : un objeto Rectangle
// output : retorna un bool cierto si el centro del rectangulo1 es mas cercano al origen (0,0) que el centro de rectangulo2
bool Rectangle::operator<(const Rectangle &r) const
{
	// centro del rectangulo 1
	int r1cX = (x0 + x1) / 2;
	int r1cY = (y0 + y1) / 2;

	// centro del rectangulo 2
	int r2cX = (r.x0 + r.x1) / 2;
	int r2cY = (r.y0 + r.y1) / 2;

	// la distancia entre el origen (0,0) y el centro de los rectangulos
	int d1 = (r1cX * r1cX) + (r1cY * r1cY);
	int d2 = (r2cX * r2cX) + (r2cY * r2cY);

	if (d1 < d2)
		return true;
	return false;
}

// "operator overloading" de +.
// output : un nuevo rectangulo
Rectangle Rectangle::operator+(const Rectangle &r2) const
{

	// rectangulo nuevo
	Rectangle boundingBox;
	Rectangle r1(x0, y0, x1, y1);

	if (r1 == r2)
	{
		boundingBox.x0 = x0;
		boundingBox.y0 = y0;
		boundingBox.x1 = x1;
		boundingBox.y1 = y1;
	}
	else if (x0 <= r2.x0 && y0 <= r2.y0 && r2.y1 > y1)
	{
		boundingBox.x0 = r2.x0;
		boundingBox.y0 = r2.y0;
		boundingBox.x1 = x1;
		boundingBox.y1 = y1;
	}
	else if (r2.x0 <= x0 && r2.y0 <= y0 && y1 > r2.y1)
	{
		boundingBox.x0 = x0;
		boundingBox.y0 = y0;
		boundingBox.x1 = r2.x1;
		boundingBox.y1 = r2.y1;
	}
	else if (x0 <= r2.x0 && r2.y0 <= y0 && y1 > r2.y1)
	{
		boundingBox.x0 = r2.x0;
		boundingBox.y0 = y0;
		boundingBox.x1 = x1;
		boundingBox.y1 = r2.y1;
	}
	else if (r2.x0 <= x0 && y0 <= r2.y0 && r2.y1 > y1)
	{
		boundingBox.x0 = x0;
		boundingBox.y0 = r2.y0;
		boundingBox.x1 = r2.x1;
		boundingBox.y1 = y1;
	}
	else if (x0 <= r2.x0 && r2.y0 <= y0 && r2.y1 > y1)
	{
		boundingBox.x0 = r2.x0;
		boundingBox.y0 = y0;
		boundingBox.x1 = r2.x1;
		boundingBox.y1 = y1;
	}
	else if (r2.x0 <= x0 && y0 <= r2.y0 && y1 > r2.y1)
	{
		boundingBox.x0 = x0;
		boundingBox.y0 = r2.y0;
		boundingBox.x1 = x1;
		boundingBox.y1 = r2.y1;
	}
	return boundingBox;
}

// input : numero entero el cual extiende el rectangulo
// output : cambia las coordenadas de la esquina derecha (x1,y1) del rectangulo
void Rectangle::scale(int factor)
{
	if (factor <= 0)
		throw std::invalid_argument("ot a valid factor. x must be positive");
	x1 += factor;
	y1 += factor;
}

// input : n/a
// output : convierte el rectangulo a un string en el formato “(x0,y0),(x1,y1)”
string Rectangle::toString() const
{
	return "\"(" + to_string(x0) + ',' + to_string(y0) + "),(" + to_string(x1) + ',' + to_string(y1) + ")\"";
}
