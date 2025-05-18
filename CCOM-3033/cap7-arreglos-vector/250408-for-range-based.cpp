#include <iostream>
#include <string>

using namespace std;

int main()
{
	int nombres[6] = {1, 2, 3, 4};
	for (int i : nombres)
		cout << i << endl;
}