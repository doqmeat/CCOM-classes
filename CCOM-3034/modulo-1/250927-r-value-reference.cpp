
#include <iostream>
using namespace std;

void printRvalue(int &&x)
{
	cout << x << endl;
}

int main()
{
	int a = 10;
	printRvalue(100);
	return 0;
}