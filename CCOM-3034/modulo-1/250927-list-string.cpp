#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{

	list<int> numbers = {10, 20, 40, 50};
	list<string> names = {"desteny", "helena", "meow"};

	list<int>::iterator it; // se declara el principio del iterador
	list<string>::iterator it2;

	// que empieza por l.begin() y termina cuando it no sea l.end()
	for (it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl; // el operador de dereference se está haciendo overloading
	}

	for (it2 = names.begin(); it2 != names.end(); it2++)
	{
		cout << *it << endl; // por que solo se imprimen "4" ????
	}

	return 0;
}
