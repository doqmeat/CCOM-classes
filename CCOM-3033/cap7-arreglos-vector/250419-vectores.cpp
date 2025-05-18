#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> nombres{"desteny", "helena"};

	for (string i : nombres)
	{
		cout << i << endl;
	}
	cout << nombres.capacity() << endl;
}
