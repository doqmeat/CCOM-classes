/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
HW7: union de conjuntos
*/

#include <iostream>

using namespace std;

// prototipo para la funcion
int inputCantidadElementos(char);
void inputElementos(int[], int, char);
void unionConjuntosAB(int[], int[], int[], int, int);
int noRepetirElementos(int[], int[], int[], int[], int);

int main()
{
	// proposito
	cout << "Este programa calcula la union de dos conjuntos A y B no vacios con a lo sumo 10 elementos." << endl;

	// se pide la cantidad de elementos para el conjunto A y se guarda en A_SIZE
	const int A_SIZE = inputCantidadElementos('A');

	int conjuntoA[A_SIZE]; // se declara el arreglo A
	// se le pide al usuario los elementos del conjunto A
	inputElementos(conjuntoA, A_SIZE, 'A');

	// se pide la cantidad de elementos para el conjunto B y se guarda en B_SIZE
	const int B_SIZE = inputCantidadElementos('B');

	int conjuntoB[B_SIZE]; // se declara el arreglo B
	// se le pide al usuario los elementos del conjunto B
	inputElementos(conjuntoB, B_SIZE, 'B');

	const int A_B_SIZE = A_SIZE + B_SIZE; // inicializa constante para el tamaño de conjuntoAB
	int conjuntoAB[A_B_SIZE];							// se declara arreglo de union de conjuntos A y B

	// se unen ambos conjuntos
	unionConjuntosAB(conjuntoA, conjuntoB, conjuntoAB, A_SIZE, A_B_SIZE);

	// se declara un nuevo arreglo para el nuevo conjunto sin elementos repetidos
	int unionAB[A_B_SIZE];
	// se verifica que sus elementos no se repitan y retorna la cardinalidad del arreglo
	int C = noRepetirElementos(conjuntoA, conjuntoB, conjuntoAB, unionAB, A_B_SIZE);

	// desplega la union de A y B
	cout << "\nLa union de A y B es el conjunto {";
	for (int i = 0; i < C; i++)
	{
		cout << unionAB[i];
		if (i + 1 == C) // significa que llego a la ultima iteracion
		{
			cout << "}. " << endl;
			break;
		}
		cout << ", ";
	}

	return 0;
}

// input : una letra
// output : el tamaño del arreglo
// le pide al usuario la cantidad de elementos y hace input validation
int inputCantidadElementos(char letra)
{
	int sizeInput;
	do
	{
		cout << "Entre la cantidad de elementos del conjunto" << letra << ": ";
		cin >> sizeInput;
		if (sizeInput < 1 || sizeInput > 10)
			cout << "La cantidad de elementos no debe ser menor que uno o mayor que 10, intente denuevo.\n\n";
	} while (sizeInput < 1 || sizeInput > 10);
	return sizeInput;
}

// input : arreglo tipo int, el tamaño del arreglo, una letra
// le pide al usuario que ingrese los elementos del arreglo deseado
void inputElementos(int arreglo[], int size, char letra)
{
	cout << "\tEntre los elementos de " << letra << " separados por espacios: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arreglo[i];
	}
}

// input : arreglo A, arreglo B, rreglo AB, el tamaño del arreglo A, y el tamaño del arreglo AB
// une los elementos del conjunto A y el conjunto B a un nuevo arreglo AB
void unionConjuntosAB(int arregloA[], int arregloB[], int arregloAB[], int A_SIZE, int A_B_SIZE)
{
	// se iteran los elementos del arregloA
	// para que sus elementos sean asignados al arreglo conjuntoAB
	for (int i = 0; i < A_SIZE; i++)
	{
		arregloAB[i] = arregloA[i];
	}

	// se iteran los elementos del arregloB empezando en el indice
	// donde se quedo el for loop anterior (A_SIZE),
	// para que sus elementos sean asignados al arreglo conjuntoAB
	for (int i = A_SIZE; i < A_B_SIZE; i++)
	{
		// i - A_SIZE para que itere desde 0 los elementos de arregloB
		arregloAB[i] = arregloB[i - A_SIZE];
	}
}

// añade los elementos del arregloAB al arreglo unionAB sin los elementos repetidos
int noRepetirElementos(int arregloA[], int arregloB[], int arregloAB[], int unionAB[], int A_B_SIZE)
{
	int C = 0; // se inicializa la variable para la cardinalidad de unionAB

	// se itera sobre todos los elementos de conjuntoAB
	for (int i = 0; i < A_B_SIZE; i++)
	{
		// flag para dectectar cuando se debe saltar el numero.
		// se actualiza a false en cada iteracion.
		bool skip = false;

		// se crea otro loop donde itera por cada elemento de conjuntoAB
		for (int i2 = 0; i2 < A_B_SIZE; i2++)
		{
			// verificando si es igual a conjuntoAB[i]
			// y que no sea el mismo elemento (i - i2 != 0)
			if ((arregloAB[i] == arregloAB[i2]) && (i - i2 != 0))
			{
				// como quiera se debe imprimir el valor aunque se encuentre a ella misma en conjuntoAB.
				// se itera sobre unionAB y sus elementos utilizando
				// la cardinalidad (C) como variable control
				for (int i3 = 0; i3 < C; i3++)
				{
					// verificar si ya esta el numero en el nuevo arreglo.
					if (arregloAB[i] == unionAB[i3])
						skip = true; // se salta el numero si es cierto
				}
			}
		}
		if (!skip) // si no se salta el numero...
		{
			unionAB[C] = arregloAB[i];
			C++; // se le añade mas uno a la cardinalidad
		}
	}
	return C;
}