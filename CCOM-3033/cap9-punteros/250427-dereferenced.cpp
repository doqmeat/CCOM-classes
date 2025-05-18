#include <iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int x = 10;
	ptr = &x;
	*ptr = 12;
	cout << "el valor de x es.... " << x << endl;

	return 0;
}