#include <iostream>

using namespace std;

int modPow(int base, int exp, int mod = 0)
{
	int result = 1;
	for (int i = exp; i > 0; i--)
	{
		result *= base;
	}
	return mod ? (result % mod) : result;
}

int main()
{

	cout << modPow(8, 2) << endl;

	return 0;
}