#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nombre;
	string fechaNacimiento;
	int birthYear;

	cout << "Entre su nombre: ";
	cin >> nombre;

	cout << "Entre su fecha de nacimiento: ";
	getline(cin, fechaNacimiento);

	cout << "Entre su ano de nacimiento: ";
	cin >> birthYear;

	int year = birthYear - year;

	cout << "Hola! " << nombre << " tienes " << year << " años" << endl;
}