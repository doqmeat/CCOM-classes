#include <iostream>

using namespace std;

int main()
{

	int num = 0;
	// 1) incrementacion esta postfix, asi que num esta a 0.

	while (num++ < 1) // 3) cuando trata de interar otravez, corre la exprecion booleana pero no se intera. asi que num va tener un valor de 2 next time
	{
		cout << num << endl; // 2) ahora num tiene 1
	}
	cout << num << endl; // 4) y es la razon por la cual ahora tiene 2
}