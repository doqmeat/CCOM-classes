#include <iostream>
#include <string>

using namespace std;

class Exterior
{
public:
	class Interior_Public
	{
	public:
		int x;
		string msg;
	};

private:
	class Interior_Private
	{
	private:
		int x;
		string msg;
		friend class Exterior;
	};
};

int main()
{
	Exterior m; // instancia de la clase Exterior
	// Interior_Public x; no se puede hacer!!!!!!
	Exterior::Interior_Public i; // esta es la manera correcta
	i.msg = "my message to the world..... good bye";

	return 0;
}