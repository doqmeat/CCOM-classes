#include <iostream>

using namespace std;

int main()
{
	int score[5] = {7, 8, 9, 10, 11};
	cout << ++score[2] << endl;
	cout << score[4]++ << endl;
	cout << score[4] << endl;
}