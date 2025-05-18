/*
Desteny Hernandez
401-23-3159
HW8: GPA

colaboraciones : lillian
*/

#include <iostream>
#include <vector>

using namespace std;

// escala de notas
enum Escala
{
	F,
	D,
	C,
	B,
	A
};

// estructura para cursos
struct Curso
{
	Escala nota;	// nota del curso
	int creditos; // cantidad de creditos
};

// estructura para estudiantes
struct Estudiante
{
	string nombre;				// nombre del estudiante
	int cantidadCursos;		// cantidad de cursos tomados
	vector<Curso> cursos; // vector de cursos
	double GPA;
};

// prototipos de funciones

void setScale(Curso &, char);
void getGPA(Estudiante &);
void getInputCursos(Estudiante &);

int main()
{
	cout << "Este programa calcula su GPA" << endl; // proposito
	cout << "Entre su nombre: ";

	Estudiante std;						// se declara una instancia de estudiante
	getline(cin, std.nombre); // se le pide su nombre

	cout << "Cuantos cursos ha tomado? ";
	cin >> std.cantidadCursos; // la cantidad de cursos tomados

	std.cursos.resize(std.cantidadCursos); // 'resizes' el vector con esa cantidad de elementos

	cout << "Entre la nota (A-F) y la cantidad de creditos de cada curso:" << endl;

	getInputCursos(std); // desplega los inputs necesarios para las notas y creditos de los cursos

	getGPA(std); // invoca a la funcion para calcular el GPA

	cout << std.nombre << ", su promedio es: " << std.GPA << endl; // desplega el nombre y el GPA del estudiante

	return 0;
}

// input: el curso del objeto estudiante, una letra
//  uso: la nota de un curso se guarda en el miembro de nota como tipo escala
void setScale(Curso &c, char letter)
{
	switch (letter)
	{
	case 'a':
	case 'A':
		c.nota = A;
		break;
	case 'b':
	case 'B':
		c.nota = B;
		break;
	case 'c':
	case 'C':
		c.nota = C;
		break;
	case 'd':
	case 'D':
		c.nota = D;
		break;
	default:
		c.nota = F;
	}
}

// input: objeto del estudiante como referencia
//  uso: calcula el GPA del estudiante
void getGPA(Estudiante &e)
{
	double puntosTotales = 0;
	double cantidadCreditos = 0;
	// itera por cada curso tomado
	for (int i = 0; i < e.cantidadCursos; i++)
	{
		puntosTotales += e.cursos[i].nota * e.cursos[i].creditos;
		cantidadCreditos += e.cursos[i].creditos;
	}
	e.GPA = puntosTotales / cantidadCreditos;
}

// input : instancia de Estudiante
// uso: itera por cada curso que el estudiante ha tomado, le pide su nota y creditos y la guarda en el miembro de cursos
void getInputCursos(Estudiante &e)
{
	// itera por la cantidad de cursos tomados
	for (int i = 0; i < e.cantidadCursos; i++)
	{
		char nota;

		cout << i + 1 << ". Nota: ";
		cin >> nota;								 // le pide la nota del curso
		setScale(e.cursos[i], nota); // se guarda en el vector de cursos del estudiante y el char se convierte a Escala

		cout << i + 1 << ". Creditos: ";
		cin >> e.cursos[i].creditos; // se le pide la cantidad de creditos de ese curso
		cout << "\n";
	}
}