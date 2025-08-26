// Este programa se puede utilizar para verificar
// cómo su sistema maneja el overflow y underflow
// de variables tipo floating-point
#include <iostream>
using namespace std;

int main()
{
 float test;

 test = 2.0e38 * 1000; // Overflow
 cout << test << endl;

 test = 2.0e-38 / 2.0e38; // Underflow
 cout << test << endl;

 return 0;
}