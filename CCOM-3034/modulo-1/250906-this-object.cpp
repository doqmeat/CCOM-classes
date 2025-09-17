#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	// this-> para referirce a los mienbros del objeto cuando tenemos parametros llamados iguales a los miembros.
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	int getAge() const
	{
		return age;
	}

	string getName() const
	{
		return name;
	}
};

int main()
{
	Person girlfriend("helena", 25);
	cout << girlfriend.getName() << endl;
	cout << girlfriend.getAge() << endl;

	return 0;
}