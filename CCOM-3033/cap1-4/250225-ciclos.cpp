#include <iostream>
using namespace std;

int main()
{
 char letra;
 cout << "entre una letra: ";
 cin >> letra;
 // 65 - 90 letras mayusculas / 97 - 122 letras minusculas
 while (letra < 97 || letra > 122)
 {
  cout << "entro un caracter no reconocido, intente denuevo. letra: ";
  cin >> letra;
 }
 cout << "gracias por entrar una letra minuscula :)" << endl;
 return 0;
}