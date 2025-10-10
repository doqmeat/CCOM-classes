#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string userInput;
	stack<char> parentesis;
	cout << "escriba parentesis... ";
	getline(cin, userInput);

	for (char i : userInput)
	{
		switch (i)
		{
		case '(':
			parentesis.push(i);
			break;

		case ')':
			parentesis.pop();
			break;

		default:
			cout << "wrong string....." << endl;
			exit(1);
			break;
		}
	}
	if (parentesis.empty())
		cout << "yay this was a success!" << endl;
	else
		cout << "ermmmm something happened :(" << endl;
	return 0;
}