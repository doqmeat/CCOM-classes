#include <iostream>

using namespace std;

class rectangle
{
private:
	double ancho;
	double largo;

public:
	rectangle();
	double area() const;
	void entra_ancho(double ancho);
	void entra_largo(double largo);
};

rectangle::rectangle()
{
	ancho = 0;
	largo = 0;
}

void rectangle::entra_ancho(double a)
{
	ancho = a;
}

void rectangle::entra_largo(double l)
{
	largo = l;
}

double rectangle::area() const
{
	return ancho * largo;
}

int main()
{

	rectangle minecraft;

	minecraft.entra_ancho(69);
	minecraft.entra_largo(69);
	cout << minecraft.area() << endl;

	return 0;
}