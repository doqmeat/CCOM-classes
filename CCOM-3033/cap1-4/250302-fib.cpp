#include <iostream>

// https://www.youtube.com/watch?v=YvsxcyPg2qY

using namespace std;

int main()
{

 int num1 = 1, num2 = 4;
 int posicion;

 int temp = num1;
 num1 = num2;
 num2 = num1 + temp;
 cout << num2 << " " << endl;

 return 0;
}