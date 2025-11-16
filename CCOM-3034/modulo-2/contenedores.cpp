#include <iostream>
#include <string>
#include <map>
#include <unordered_set>
#include <set>

using namespace std;
int main()
{
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ map
	cout << "map testing: " << endl;
	map<string, int> m = {
			{"meow", 2},
			{"meow2", 4}};

	// inserting
	m.insert({"another meow", 10});

	// accesing by key
	cout << m.at("meow") << endl; // if key doesn't exist, it will throw an error while compiling
	cout << m["meow3"] << endl;		// if key doesn't exist, it will insert it into the map

	cout << endl;

	if (m.find("meow3") != m.end())																		// si encuantra la llave "meow3"
		cout << "\"meow3\" value: " << m.find("meow3")->second << endl; // la imprime
	cout << endl;

	// for loop
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << "[key] : " << it->first << " | value : " << it->second << endl;
	}
	cout << endl;

	// for range based loop
	for (auto &p : m)
		cout << "[key] : " << p.first << " | value : " << p.second << endl;
	cout << endl;

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ multimap
	cout << "multimap testing: " << endl;
	multimap<string, double> multi = {
			{"des", 3.2},
			{"des", 5.4},
			{"helena", 6.3},
			{"des", 1.2}};

	// accessing by key (don't do this with multimaps, it will only print the first key it finds)
	if (multi.find("helena") != multi.end())
	{
		cout << "helena value: " << multi.find("helena")->second << endl;
	}

	// for loop
	for (auto it = multi.begin(); it != multi.end(); it++)
	{
		cout << "[key] : " << it->first << " | value : " << it->second << endl;
	}
	cout << endl;

	// using bounds para solo imprimir las llaves "des"
	cout << "valores de las llaves \"des\" : " << endl;
	for (auto it = multi.lower_bound("des"); it != multi.upper_bound("des"); it++)
		cout << it->second << endl;

	cout << endl;
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ sets
	cout << "set testing: " << endl;

	set<int> s = {4, 3, 6, 7, 1};
	s.insert(2);

	// for loop
	for (auto it = s.begin(); it != s.end(); it++)
		cout << " " << *it;
	cout << endl;

	// for range based loop
	for (auto &i : s)
	{
		cout << " " << i;
	}
	cout << endl;
	cout << endl;
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ unordered sets
	cout << "unordered_set testing: " << endl;

	unordered_set<int> u = {4, 3, 6, 7, 1};
	u.insert(10);

	for (auto it = u.begin(); it != u.end(); it++)
		cout << " " << *it;
	cout << endl;
	cout << endl;

	return 0;
}