#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Cat
{
	string name;
	double age;
	string furColor;
};

int main()
{
	int amountCats;
	vector<Cat> myCats;
	cout << "how many cats do you have? ";
	cin >> amountCats;
	myCats.resize(amountCats);
	for (int i = 0; i < amountCats; i++)
	{
		cout << "enter cat " << i + 1 << " info:" << endl
				 << endl;
		cout << "\tenter your cat's name: ";
		if (i == 0)
			cin.ignore();
		getline(cin, myCats[i].name);
		cout << "\tenter your cat's age in years: ";
		cin >> myCats[i].age;
		cout << "\tenter your cat's fur color: ";
		cin.ignore();
		getline(cin, myCats[i].furColor);
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < amountCats; i++)
	{
		cout << "your cat " << myCats[i].name << " is " << myCats[i].age << " years old and their fur color is " << myCats[i].furColor << ".\n"
				 << endl;
	}
	return 0;
}