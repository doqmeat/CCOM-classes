#include <iostream>

using namespace std;

class Circle
{
private:
	double radio = 4;

public:
	void setRadio(double);
	double getRadio() const;
};

void Circle::setRadio(double r)
{
	radio = r;
}

double Circle::getRadio() const
{
	return radio;
}

int main()
{
	Circle myAwesomeCircle;
	cout << myAwesomeCircle.getRadio() << endl;
	return 0;
}