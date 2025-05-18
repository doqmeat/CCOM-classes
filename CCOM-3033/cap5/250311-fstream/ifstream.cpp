#include <iostream>
#include <fstream> // libreria para utilizar file stream objects, ahora se pueden utilizar los siguientes tipos de datos: ifstream, ofstream, fstream
#include <string>

using namespace std;

int main()
{
	// definimos el tipo de dato que es
	// queremos leer un archivo asi que utilizamos 'ifstream'
	// leer - input....
	ifstream awesomeFileConnect("myAwesomeFile.txt");
	string content;

	// awesomeFileConnect >> content;
	// si solo ponemos esto, solo va a leer el primer string y va a ignorar los whitespaces

	// utilizamos un getline getline(awesomeFileConnect, content);

	// y esto solo extrae una sola linea!

	// tenemos que hacer un loop para que coja todo los datos del file.

	while (getline(awesomeFileConnect, content))
	{
		cout << content << endl;
	}
	awesomeFileConnect.close();

	return 0;
}