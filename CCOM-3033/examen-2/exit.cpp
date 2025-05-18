#include <iostream>
#include <cstdlib>

void evilFunction()
{
	exit(1);
}

int main()
{
	std::cout << "i like to... \n";
	std::cout << "draw\n";
	std::cout << "and play with... \n";
	evilFunction();
	std::cout << "monster trucks.\n";
	return 0;
}