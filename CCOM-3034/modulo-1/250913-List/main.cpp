#include <iostream>
#include <string>
#include "List.h"

using namespace std;

int main()
{
	List l;
	cout << l.getSize() << endl;
	l.insert(2, 1);
	l.insert(3, 0);
	l.insert(6, 1);
	l.insert(7, 0);
	l.insert(5, 2);
	l.insert(10, 1);

	l.remove(1);
	l.insert(10, 1);
	l.insert(32, 4);
	l.remove(4);

	cout << l.find(10) << endl;
	cout << l.find(1) << endl;
	l.print();

	List l2;
	l2.insert(5, 0);
	l2.insert(3, 1);
	l2.insert(40, 2);
	l2.print();

	l2 = l;
	// estaba ocurriendo un error ya qye no estaba devolviendo el objeto
	// por referencia en la funcion de operator=

	l.print();
	l2.print();

	return 0;
}