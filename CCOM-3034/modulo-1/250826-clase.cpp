#include <iostream>
#include <string>
using namespace std;

class Cat
{
private: // protected: protegen a los data members (miembros) para que no sean modificados fuera de los metodos
	string _name;
	double _age;

public:
	// another way of doing constructors that i learned in class. yay
	Cat(string name, double age) : _name(name), _age(age) {}

	string getName() const
	{
		return _name;
	}

	double getAge() const // const por que son getters.
	{
		return _age;
	}
};

int main()
{
	Cat myCat("steve minecraft", 1);
	Cat otherCat("steve minecraft", 1);

	cout << "my cat's name is " << myCat.getName() << " and he is " << myCat.getAge() << endl;

	return 0;
}