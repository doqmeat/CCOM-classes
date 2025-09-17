// Desteny Hernandez De Juan
// 401-23-3159

#include <iostream>
#include <vector>

using namespace std;

// Create a function to receive the values and stores it in a vector
// se pasa por referencia para que se pueda implementar los cambios en main
void getIDs(vector<int> &v)
{
	int inputNumber;
	while (inputNumber != -1)
	{
		cout << "Write the taken IDs from 1 to 20. -1 to stop." << endl;
		cin >> inputNumber; // se le pide al usuario
		v.push_back(inputNumber);
	}

	v.pop_back(); // se quita el -1 del vector

	cout << endl;

	cout << "IDs taken: ";
	for (int i : v)
		cout << i << ", ";
	cout << endl;

	// se organizan los IDs
	int swapped; // variable centinela o bandera
	int temp;		 // variable temporera
	do
	{
		swapped = 0;
		for (int i = 0; i < v.size() - 1; i++) // se le resta 1 al size del vector para que el for loop itere la cantidad necesaria
		{
			if (v[i] > v[i + 1])
			{
				temp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = temp;
				swapped++;
			}
		}
	} while (swapped); // mientras swapped no sea 0

	cout << "IDs taken in order: ";
	for (int i : v)
		cout << i << ", ";
	cout << endl;
}

// input: vector de IDs cogidos, vector de IDs disponibles
void displayAvailableIDs(vector<int> &v, vector<int> &a)
{
	int i = 0;
	for (int j = 1; j <= 20; j++)
	{
		if (v[i] == j)
			i++; // si los numeros son iguales se brinca
		else
			a.push_back(j); // si no, se añade el numero al vector a
	}

	cout << "IDs available: ";
	for (int i : a)
		cout << i << ", ";
	cout << endl;
}

int main()
{
	vector<int> IDsTaken; // inicializa el vector

	getIDs(IDsTaken);

	vector<int> IDsAvailable; // inicializa vector con IDs disponibles

	displayAvailableIDs(IDsTaken, IDsAvailable);

	return 0;
}