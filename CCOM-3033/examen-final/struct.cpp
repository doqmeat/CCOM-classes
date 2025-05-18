#include <iostream>
#include <string>

using namespace std;

struct cat
{
	string name;
	double year;
};

int main()
{
	cat mizu;
	mizu.name = "mizu";
	mizu.year = 15.5;

	cout << "my cat's name is " << mizu.name << " and he is " << mizu.year << " years old!!!" << endl;

	return 0;
}