// specification file
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	double radio;
	const double PI = 3.14159265;

public:
	Circle();
	~Circle();
	Circle(double);
	void setRadio(double);
	double getRadio() const;
	double getDiametro() const;
	double getArea() const;
};

#endif