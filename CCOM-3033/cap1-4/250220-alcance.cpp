#include <iostream>
using namespace std;

int main()
{

 // el alcance de una variable depende si se esta declarando dentro de {} llaves
 // por ejemplo:
 int x;
 cout << "escriba un numero: ";
 cin >> x;

 if (x >= 10 || x <= 40)
 {
  int x;
  cout << "escriba otro numero i dont want that one!!!! ";
  cin >> x;
  cout << "segundo numero: " << x << endl;
 }
 else
 {
  cout << "you're good" << endl;
 }
 cout << "primer numero: " << x << endl;
 return 0;
}