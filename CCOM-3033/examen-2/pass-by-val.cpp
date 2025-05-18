#include <iostream>
using namespace std;

int changeNum(int);

int main()
{
	int num = 30;
	changeNum(num);
	cout << "pero num es ........ " << num << endl;
	return 0;
}

int changeNum(int x)
{
	x = 40;
	cout << "num se supone que cambie a " << x << endl;
	return x;
}
