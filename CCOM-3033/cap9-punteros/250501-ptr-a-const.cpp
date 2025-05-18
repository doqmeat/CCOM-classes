#include <iostream>

using namespace std;

int main()
{

	const int x = 10;
	int y = 50;
	const int *ptr = &x;

	cout << *ptr << endl;

	ptr = &y;
	cout << *ptr << endl;

	int z = 30;
	ptr = &z;
	cout << *ptr << endl;

	return 0;
}