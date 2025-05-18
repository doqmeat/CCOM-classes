#include <iostream>

using namespace std;

int main()
{

	/*
	Reescriba el siguiente ciclo utilizando notación de punteros en
vez de subíndices (sin definir otro puntero):

for (int x = 0; x < 100; x++)
cout << arr[x] << endl;
*/

	int arr[100];
	for (int x = 0; x < 100; x++)
		cout << *(arr + x) << endl;

	//  Reescriba el siguiente ciclo utilizando un puntero distindo al arreglo:

	int *ptr = arr;
	for (int i = 0; i < 100; i++)
		cout << ptr[i] << endl;
	return 0;
}