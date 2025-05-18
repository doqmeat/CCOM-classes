#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// almacenar un arreglo en un archivo
	int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ofstream numerosOutput("numeros.txt");
	for (int num : numeros)
	{
		numerosOutput << num << " ";
	}
	numerosOutput.close();
}