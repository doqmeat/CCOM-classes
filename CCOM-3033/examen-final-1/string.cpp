#include <iostream>
#include <string>

using namespace std;

int main()
{
	int nums[5] = {2, 5, 1, 5, 6};
	for (int i = 0; i < 5; i++)
	{
		cout << *(nums + i) << endl;
	}
	return 0;
}