#include <iostream>

using namespace std;

void mensaje(int time)
{
	if (time > 0)
	{
		cout << "esto es una funcion recursiva!" << endl;
		mensaje(time - 1);
	}
}

int main()
{
	mensaje(2);
}