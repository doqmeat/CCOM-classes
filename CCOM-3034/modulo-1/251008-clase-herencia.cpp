#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected: // remember to use protected !!!!!
	string name;
	int year;
	string furColor;

	virtual void speak() const // esta funcion hace overloading a la de la clase hija!
	{
		cout << "something else...." << endl;
	}

public:
	Animal() {};
	void talk() const { speak(); }

	void display() const
	{
		cout << name << endl;
		cout << year << endl;
		cout << furColor << endl;
	}
};

class Cat : public Animal
{
private:
	string meow;

	void speak() const // esta funcion hace overloading a la de la clase hija!
	{
		cout << meow << endl;
	}

public:
	Cat() {}

	Cat(string name, int year, string meow)
	{
		this->name = name;
		this->meow = meow;
		this->year = year;
	}

	// Cat(string name1, int year1, string meow1) : meow(meow1) {}
};

int main()
{
	Cat mizu("mizu", 15, "meo!");
	mizu.talk();
	Animal cow;
	cow.talk();
	return 0;
}