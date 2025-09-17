#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

	vector<int> nums1{2, 5, 1, 7, 4};

	for (int i : nums1)
	{
		cout << i << ",";
	}

	cout << endl;

	sort(nums1.begin(), nums1.end());

	// nums 1 ahora va ser sorted!
	for (int i : nums1)
	{
		cout << i << ",";
	}
	cout << endl;
	return 0;
}