#include <iostream>
// se le añade este libreria 'iomanip' para usar funciones que manipulan el input y output.
// manipulador de stream; input-output-manipulator
#include <iomanip>
#include <string>
using namespace std;

int main()
{
 string nombre, apellidos;
 cout << "escriba su nombre: ";

 // getline(cin, var) = evita que se ignoren los espacios vacios en cin. para ir al siguiente input precionas [enter]

 // se necesita poner '#include <string>' para usar getline(cin, var)
 getline(cin, nombre);
 cin.ignore();

 cout << "escriba sus 2 apellidos: ";
 getline(cin, apellidos);

 // setw(v) = le da un padding a la izq de la variable.
 // si pones menos de la cantidad de caracteres que tiene no pasa nada.
 cout << "setw a 20:" << setw(20) << nombre << endl;

 // 'left' para ponerlo a la derecha
 cout << "setw a la izq: " << left << setw(30) << nombre << apellidos << endl;

 // showpoint = solo se usan con numeros floats, le añade 0s despues del punto decimal
 double num = 123.456;
 cout << setprecision(8) << showpoint << num << endl;

 return 0;
}