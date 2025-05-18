#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Coin
{
private:
	string sideUp;

public:
	Coin();
	void toss();
	string getSideUp() const;
};

Coin::Coin() // default constructor
{
	int num = rand() % 2; // gets a number between 0 and 1
	sideUp = num ? "heads" : "tails";
}

void Coin::toss()
{
	int num = rand() % 2; // gets a number between 0 and 1
	sideUp = num ? "heads" : "tails";
}

string Coin::getSideUp() const
{
	return sideUp;
}

int main()
{
	srand(time(0)); // seed for random num
	Coin myCoin;		// instance of coin
									// counters
	int tailsCounter = 0;
	int headsCounter = 0;

	// tossing coin loop

	for (int i = 0; i < 20; i++)
	{
		myCoin.toss();
		if (myCoin.getSideUp() == "tails")
			tailsCounter++;
		else
			headsCounter++;
	}
	cout << "number of times it landed on head: " << headsCounter << endl;
	cout << "number of times it landed on tails: " << tailsCounter << endl;
	return 0;
}