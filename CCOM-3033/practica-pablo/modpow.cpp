#include <iostream>

using namespace std;

int modpow(int base, int expo, int modulo = 0)
{
	int acum = 1;
	for (int i = 0; i < expo; i++)
	{
		acum *= base;
	}
	if (!(modulo == 0))
	{
		acum %= modulo;
	}

	return acum;
}
int main()
{

	cout << modpow(5, 5) << endl;
	return 0;
}