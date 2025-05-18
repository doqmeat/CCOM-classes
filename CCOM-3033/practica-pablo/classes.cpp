#include <iostream>
#include <string>

using namespace std;

struct pablo
{
	int years;
	int month;
	string name;
};

int main()
{

	pablo guy;

	guy.years = 21;
	cout << "entre mes:";
	cin >> guy.month;
	cout << "meses " << guy.month << "  years " << guy.years << endl;

	return 0;
}