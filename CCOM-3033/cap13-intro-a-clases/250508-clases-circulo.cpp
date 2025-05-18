#include <iostream>

using namespace std;

class Circle
{
private:
	double radio;
	const double PI = 3.14159265;

public:
	Circle();
	// mutators / getters
	void setRadio(double);
	// accessors
	double getRadio() const; // estos consts significan que las funciones no van a alterar los miembros del calling object
	double getDiametro() const;
	double getArea() const;
};

Circle::Circle()
{
	radio = 0.0;
}

void Circle::setRadio(double r)
{
	if (r < 0)
		radio = 0.0;
	else
		radio = r;
}

double Circle::getDiametro() const
{
	return radio * 2.0;
}

double Circle::getRadio() const
{
	return radio;
}

double Circle::getArea() const
{
	return PI * radio * radio;
}

int main()
{
	Circle myAwesomeCircle;
	myAwesomeCircle.setRadio(-3.2);
	cout << "el radio es: " << myAwesomeCircle.getRadio() << endl;
	cout << "el diametro es: " << myAwesomeCircle.getDiametro() << endl;
	cout << "el area es: " << myAwesomeCircle.getArea() << endl;
	return 0;
}