#include <iostream>
#include <stack>

using namespace std;

stack<int> stackSort(stack<int> &og)
{
	stack<int> s;				// stack temporero
	int temp;						// variable temporera
	while (!og.empty()) // mientras stack og no está
	{
		temp = og.top(); // el tope de og se guarda en temp
		og.pop();
		if (s.empty() || temp > s.top())
			s.push(temp);
		else
		{
			int countPop = 0;
			while (!s.empty() && temp < s.top()) // moraleja poner el s.empty primero!!!!
			{
				og.push(s.top());
				s.pop();
				countPop++;
			}
			s.push(temp);
			for (int i = 0; i < countPop; i++)
			{
				s.push(og.top());
				og.pop();
			}
		}
	}
	int stackSize = s.size();
	for (int i = 0; i < stackSize; i++)
	{
		og.push(s.top());
		s.pop();
	}
	return og;
}

int main()
{
	stack<int> myAwesomeStack;
	myAwesomeStack.push(20);
	myAwesomeStack.push(1);
	myAwesomeStack.push(8);
	myAwesomeStack.push(2);
	myAwesomeStack.push(13);
	myAwesomeStack.push(17);

	int size = myAwesomeStack.size();
	cout << "original stack: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << myAwesomeStack.top();
		myAwesomeStack.pop();
		if (size - i != 1)
			cout << ", ";
		else
			cout << endl;
	}
	cout << endl;

	myAwesomeStack.push(20);
	myAwesomeStack.push(1);
	myAwesomeStack.push(8);
	myAwesomeStack.push(2);
	myAwesomeStack.push(13);
	myAwesomeStack.push(17);

	stackSort(myAwesomeStack);
	cout << "sorted stack YAY: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << myAwesomeStack.top();
		myAwesomeStack.pop();
		if (size - i != 1)
			cout << ", ";
		else
			cout << endl;
	}
	cout << endl;
	return 0;
}
