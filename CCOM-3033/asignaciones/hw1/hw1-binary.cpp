/*
Asignación 1: Binary Digit
Nombre: Desteny Hernandez De Juan
Núm. Est: 401-23-3159
Colaboraciones:
- ascii table: https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// inicializamos los bits
	char b1, b2, b3, b4;

	cout << "entre un numero binario de 4 bits: ";
	cin >> b1 >> b2 >> b3 >> b4;

	// las variables para los bits se defines como 'char' por que de esa manera lo podemos escribir en el input sin poner espacios o enter, el tipo de dato char al solamente guardar un solo caracter. al no poner espacio a un numero binario de 4 bits, el keyboard buffer le asigna un caracter a cada variable. asi que... 1010 seria: b1 = 1, b2 = 0 , b3 = 1, b4 = 0.
	char caracter1 = b1;
	char caracter2 = b2;
	char caracter3 = b3;
	char caracter4 = b4;
	/*
 se escribe un - '0' al final por que en la tabla de ASCII los numeros del 0 al 9 estan asignados por el codigo ASCII 48 - 57.

 al convertir la variable caracter a un int, nos retorna un '57' debido a que el '9' esta entre comillas sencillas y al compilarlo el programa lo ve como un char, lo cual hace retornar el codigo ASCII de ese caracter en vez de devolverlo como el numero '9'.

 el '48' en la tabla ASCII tiene como caracter al '0'. por esto escribimos un - 0 al convertir el caracter en un entero ya que la diferencia va ser el numero 9. '57' - '48' = '9'
 */
	int numero1 = static_cast<int>(caracter1) - '0';
	int numero2 = static_cast<int>(caracter2) - '0';
	int numero3 = static_cast<int>(caracter3) - '0';
	int numero4 = static_cast<int>(caracter4) - '0';

	// se hace la conversion a numero decimal: b1 * 2^3 + b2 * 2^2 + b3 * 2^1 + b4 * 2^0

	double conversion = numero1 * pow(2, 3) + numero2 * pow(2, 2) + numero3 * pow(2, 1) + numero4 * pow(2, 0);

	cout << "su equivalente en base 10 es: " << conversion << endl;
}