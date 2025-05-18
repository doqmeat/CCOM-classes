#include <iostream>

using namespace std;

int main()
{
 int a, x, y = 0;
 for (x = 0; x < 10; x++)
 {
  cout << "Entre un numero: ";
  cin >> a;
  y += a;
  cout << y << " " << x << endl;
 }
 return 0;
}