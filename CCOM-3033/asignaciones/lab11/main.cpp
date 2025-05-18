/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
Lab 11: Input Validation con Punteros
*/

#include <iostream>
#include <string>

using namespace std;

// prototipos de funciones a definir

// helper function para isInteger y isDecimal
// input: un char (pass by value)
// output: true si el char contiene un dígito, false si no
inline bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}

// input: dirección al primer char de un string (pass by reference)
// output: true si el string solamente contiene dígitos, false si no
bool isInteger(const char *str)
{
	while (*str != '\0')
	{
		if (!isDigit(*str))
			return false;
		str++;
	}
	return true;
}

// input: variable tipo int (pass by reference)
// output: void/none
void getInt(int &num)
{
	string input;
	do
	{
		getline(cin, input);
	} while (!isInteger(&input[0]));

	num = stoi(input);
}

// input: dirección al primer char de un string (pass by reference)
// output: true si el string solamente contiene dígitos y máximo un punto decimal (puede tener 0 o 1 punto decimal), false si no es un número decimal
bool isRealNumber(const char *str)
{
	int dotCounter = 0; // contador de puntos
	while (*str != '\0')
	{
		// si el caracter no es un digito y no es un punto...
		if (!isDigit(*str) && (*str != '.'))
			return false; // retorna falso
		// si el caracter es un punto, se incrementa el contador
		else if (*str == '.')
			dotCounter++;
		// se cambia el pointer al siguiente caracter
		str++;
	}

	// si tiene mas de 1 punto...
	if (dotCounter > 1)
		return false;
	return true;
}

// input: variable tipo double (pass by reference)
// output: void/none
void getRealNumber(double &num)
{
	string input;
	do
	{
		getline(cin, input);
	} while (!isRealNumber(&input[0]));

	num = stod(input);
}

int main()
{
	// definir variables
	int entero;
	double real;

	// darles valores a las variables
	cout << "Entre un número entero: ";
	getInt(entero);
	cout << "Entre un número real: ";
	getRealNumber(real);

	cout << "Usted entró los números: " << entero << " y " << real << endl;

	return 0;
}