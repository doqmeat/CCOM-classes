/*
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
HW7: union de conjuntos
*/

#include <iostream>
#include <string>

using namespace std;

// prototipo para la funcion
void unionDeArreglos(int[], int[], int, int);

int main()
{
	// proposito
	cout << "Este programa calcula la union de dos conjuntos A y B no vacios con a lo sumo 10 elementos." << endl;

	// se le pide al usuario el tamaño del arreglo

	int A_size_input, B_size_input; // declaramos la variable para el tamaño del arreglo conjuntoA y conjuntoB

	// mensaje de error al haber un input invalido
	string mensajeDeError = "La cantidad de elementos no debe ser menor que uno o mayor que 10, intente denuevo.\n\n";

	// se pide la cantidad de elementos para el conjunto A
	do
	{
		cout << "Entre la cantidad de elementos del conjunto A: ";
		cin >> A_size_input;
		if (A_size_input < 1 || A_size_input > 10)
			cout << mensajeDeError;
	} while (A_size_input < 1 || A_size_input > 10);

	const int A_SIZE = A_size_input; // se inicializa el tamaño del arreglo como una constante
	int conjuntoA[A_SIZE];					 // se declara el arreglo

	cout << "\tEntre los elementos de A separados por espacios: ";

	// se pasa como referencia para poder modificar los elementos originales
	for (int &i : conjuntoA)
	{
		cin >> i;
	}

	// cantidad de elementos para el conjunto B
	do
	{
		cout << "Entre la cantidad de elementos del conjunto B: ";
		cin >> B_size_input;
		if (B_size_input < 1 || B_size_input > 10)
			cout << mensajeDeError;
	} while (B_size_input < 1 || B_size_input > 10);

	const int B_SIZE = B_size_input; // se inicializa el tamaño del arreglo como una constante
	int conjuntoB[B_SIZE];					 // se declara el arreglo

	cout << "\tEntre los elementos de B separados por espacios: ";

	for (int &i : conjuntoB)
	{
		cin >> i;
	}

	unionDeArreglos(conjuntoA, conjuntoB, A_SIZE, B_SIZE);

	return 0;
}

void unionDeArreglos(int arregloA[], int arregloB[], int A_SIZE, int B_SIZE)
{
	const int A_B_SIZE = A_SIZE + B_SIZE; // inicializa constante para el tamaño de ambos arreglos
	int unionAB[A_B_SIZE];								// declarar arreglo de union A y B

	// se iteran los elementos del arregloA
	// para que sus elementos sean asignados al arreglo unionAB
	for (int i = 0; i < A_SIZE; i++)
	{
		unionAB[i] = arregloA[i];
	}

	// se iteran los elementos del arregloB empezando en el indice
	// donde se quedo el for loop anterior (A_SIZE),
	// para que sus elementos sean asignados al arreglo unionAB
	for (int i = A_SIZE; i < A_B_SIZE; i++)
	{
		// i - A_SIZE para que itere desde 0 los elementos de arregloB
		unionAB[i] = arregloB[i - A_SIZE];
	}

	// se declara el arreglo unionAB sin repeticiones
	int unionAB_SinRepeticion[A_B_SIZE];
	int C = 0; // y la variable para la cardinalidad del conjunto.

	// se itera sobre todos los elementos de unionAB
	for (int i = 0; i < A_B_SIZE; i++)
	{
		// variable booleana para dectectar cuando se debe saltar el numero.
		// se actualiza a false en cada iteracion.
		bool skip = false;

		// se crea otro loop donde itera por cada elemento de unionAB
		// verificando si es igual a unionAB[i]
		// y que no sea el mismo elemento (i - i2 != 0)
		for (int i2 = 0; i2 < A_B_SIZE; i2++)
		{
			if ((unionAB[i] == unionAB[i2]) && (i - i2 != 0))
			{
				// como quiera se debe imprimir el valor aunque se encuentre a ella misma en unionAB.
				// se itera sobre unionAB_SinRepeticion y sus elementos utilizando
				// la cardinalidad (C) como variable control
				for (int i3 = 0; i3 < C; i3++)
				{
					// verificar si ya esta el numero en el nuevo arreglo.
					if (unionAB[i] == unionAB_SinRepeticion[i3])
						skip = true; // se salta el numero si es cierto
				}
			}
		}
		if (!skip) // si no se salta el numero...
		{
			unionAB_SinRepeticion[C] = unionAB[i];
			C++; // se le añade mas uno a la cardinalidad
		}
	}

	cout << "\nLa union de A y B es el conjunto {";
	for (int i = 0; i < C; i++)
	{
		cout << unionAB_SinRepeticion[i];
		if (i + 1 == C) // significa que llego a la ultima iteracion
		{
			cout << "}. " << endl;
			break;
		}
		cout << ", ";
	}
}