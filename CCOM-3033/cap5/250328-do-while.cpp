#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int count = 10;
	do
	{
		cout << "Hello World\n";
		count++;
	} while (count < 1); // count es 11 aqui

	cout << count << endl;

	return 0;
}