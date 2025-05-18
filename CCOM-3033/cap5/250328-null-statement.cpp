#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	while (number < 5)
		; // causa que el cuerpo del ciclo sea una oracion nulla
	{
		cout << "hiiiii" << endl;
		number++;
	}
}