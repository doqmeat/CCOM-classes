#include <iostream>
using namespace std;
/*

int = numeros enteros
float = 4 bytes, num. con puntos, less precise
double = 8 bytes, num. con puntos, more precise

*/
int main()
{
 int a = 4;      // 4 bytes
 float b = 24.0; // 4 bytes
 double c = 2.0; // 8 bytes
 cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << endl;
 return 0;
}