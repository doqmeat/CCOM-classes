#include <iostream>
using namespace std;

int main()
{

	int juegos = 1, // contador de juegos
			puntos,			// aguanta cantidad de pts y valor centinela
			total = 0;	// acumulador de puntos
	cout << "Entre la cantidad de puntos que ha ganado su equipo\n";
	cout << "hasta ahora en la temporada, luego entre -1 cuando termine.\n\n";
	cout << "Entre los puntos para el juego " << juegos << ": ";
	cin >> puntos;
	while (puntos != -1) // puntos es la variable control!
	{
		total += puntos;
		juegos++;
		cout << "Entre los puntos para el juego " << juegos << ": ";
		cin >> puntos;
	}
	cout << "\nEl total de puntos es " << total << endl;
	return 0;
}