// librerias -> iostream, header file, directiva para el preprocesador
#include <iostream>
// organiza las entidades del programa, std contiene las entidades de 'iostream', se pronuncia como "standard"
using namespace std;

// "int main()" es una funcion para ejecutar cosas, se TIENE que llamar main()
int main()
{
  // siempre hay que definir el tipo de dato que una variable es, no es como python o javascript donde automaticamente sabe lo que es.
  /*       int = numeros enteros
           double = numeros reales con decimales, mas precisos
           float = numeros reales con decimales
           char = para guardar un SOLO caracter. se usa comillas sencillas '' */
  string name = "Desteny Hernandez";

  // literales = data que se escribe directamente en el programa. ejemplo: my name is
  // las flechitas se llaman "insertion operator" / operador de insercion
  cout << "my name is " << name << endl;

  // se utiliza el backslash para escape ciertas cosas
  cout << "i am using the \" backslash here to escape the quote" << endl;
  cout << "tambien se puede hacer otra linea con \\n \n";
  cout << "\t" << "i am using a tab" << endl;
  cout << "\a" << "this should sound an alarm\b" << endl;

  return 0; // retorna 0 si ejecuto exitosamente
}