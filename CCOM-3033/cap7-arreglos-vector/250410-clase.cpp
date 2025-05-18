#include <iostream>
#include <vector>

using namespace std;

void foo(vector<int>);

int main()
{
	vector<int> numeros{
			1,
			2,
			5,
			0,
			3,
			1,
			7,
	};

	cout << "los " << numeros.size() << " numeros son: ";

	for (int i : numeros)
	{
		cout << i;
	}
	cout << endl;

	foo(numeros);

	return 0;
}

// Despliegue los elementos que son estrictamente menor que el elemento previo y el elemento siguiente
void foo(vector<int> vect)
{
	for (int i = 1; i < vect.size() - 1; i++)
	{
		if ((vect[i] < vect[i - 1]) && (vect[i] < vect[i + 1]))
		{
			cout << vect[i] << " ";
		}
	}
	cout << endl;
}