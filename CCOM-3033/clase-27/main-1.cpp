#include <iostream>

using namespace std;

int sucesion(int);

int main()
{
	// este programa tiene una funcion recursiva

	int num;
	cout << "entre el termino: ";
	cin >> num;
	cout << "\ntermino: " << num << " resultado: " << sucesion(num) << endl;
	return 0;
}

int sucesion(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 2;
	}
	else
	{
		return 5 * sucesion(n - 1) - 6 * sucesion(n - 2);
	}
}