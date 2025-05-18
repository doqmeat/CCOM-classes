// funciones que retornan punteros aka una direccion
#include <iostream>
#include <string>

using namespace std;

string *getFullName()
{
	static string fullName[3];
	cout << "primer nombre: ";
	getline(cin, fullName[0]);
	cout << "segundo nombre: ";
	getline(cin, fullName[1]);
	cout << "tercer nombre: ";
	getline(cin, fullName[2]);
	cout << fullName << endl;
	cout << &fullName << endl;
	return fullName;
}

int main()
{
	string *ptr = getFullName();
	cout << ptr[0] << endl;
	return 0;
}