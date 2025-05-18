#include <iostream>
using namespace std;

const double pi = 3.14159; // constante global PI

int main()
{
	double diametro;

	cout << "Entre el diametro del circulo: ";
	cin >> diametro;
	double r = diametro / 2.0;
	double area = pi * r * r;

	cout << "el area del circulo es: " << area << endl;
}