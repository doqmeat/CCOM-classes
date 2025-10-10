#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string expression = "5 1 2 + 4 * + 3 -";
	stack<double> calc_stack;
	string numero; // guarda el numero en un string completo
	double result; // guarda el resultado
	for (char c : expression)
	{
		// se guardan los caracteres de los números en un string
		// mientras el condicional no detecte un whitespace
		if (c == ' ' && numero != "")
		{
			calc_stack.push(stod(numero));
			cout << "numero pushed al stack es: " + numero << endl;
			numero = ""; // se da reset a numero!
		}
		else if (c == ' ' && numero == "")
			continue;
		else if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			double b = calc_stack.top();
			cout << "tope b es... " << b << endl;
			calc_stack.pop();
			double a = calc_stack.top();
			cout << "tope a es... " << a << endl;
			calc_stack.pop();

			switch (c)
			{
			case '+':
				result = a + b;
				break;

			case '-':
				result = a - b;
				break;

			case '/':
				result = a / b;
				break;

			case '*':
				result = a * b;
				break;
			}
			cout << "resultado pushed al stack... " + to_string(result) << endl;
			calc_stack.push(result);
		}
		else
		{
			numero += c;
			cout << "ahora numero es..." + numero << endl;
		}
	}

	cout << result << endl;

	return 0;
}