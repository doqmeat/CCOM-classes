#include <iostream>

// complejidad de algoritmos

using namespace std;

// el tiempo de ejecucion es lineal
// t(n) = k + k2*n
int sum1(int n)
{
	int acumulador = 0;
	for (int i = 1; i <= n; i++)
	{
		acumulador += i;
	}
	return acumulador;
}

// el tiempo de ejecucion es constante
// t(n) = k
int sum2(int n)
{
	return ((n + 1) * n) / 2;
}

int main()
{
	// Given a positive integer n, returns the sum of 1+2+3+..n
	cout << sum2(99999999) << endl;
	// cout << sum2(10) << endl;
	return 0;
}