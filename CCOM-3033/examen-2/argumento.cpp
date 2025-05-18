#include <iostream>

using namespace std;

char suma(char oracion)
{
	oracion += '!';
	return oracion;
}

int main()
{
	char num = 66;
	char gasp = '!';
	char erm = 66 + 33;
	cout << suma(num) << endl;
	cout << gasp << endl;
	cout << erm << endl;
}

// hace el type coersion!