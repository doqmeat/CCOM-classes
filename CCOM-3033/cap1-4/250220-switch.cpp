#include <iostream>
using namespace std;

int main()
{
	/*
	switch (integerexpression){
		case ConstantExpression:    -> debe ser de tipo entero o char, no puede ser booleana
			statement 1;
			statement 2;
			break;
		case ConstantExpression:
			statement 1;
			statement 2;
			break ;    						-> hace que se salga del switch!
		default:								-> es opcional, funciona como un else.
			statement;
		}
	*/

	// queremos hacer un programa que desplegue los features de un televisor dependiendo de su modelo

	int modelo;
	cout << "que modelo de TV le interesa? ";
	cin >> modelo;
	cout << "el modelo " << modelo << " contiene los siguientes features:" << endl;
	switch (modelo)
	{
	case 300:
		cout << "\tpicture in picture\n";
	case 200:
		cout << "\twifi\n";
	case 100:
		cout << "\tcontrol remoto\n";
		break;
	default:
		cout << "\tel modelo " << modelo << " no esta disponible :-(";
	}
}