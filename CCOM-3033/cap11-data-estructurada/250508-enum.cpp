#include <iostream>

using namespace std;

enum Nota
{
	F,
	D,
	C,
	B,
	A
};

enum Day
{
	SUNDAY = 1,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

string displayDay(Day d)
{
	switch (d)
	{
	case SUNDAY:
		return "sunday";
		break;
	case MONDAY:
		return "monday";
		break;
	case TUESDAY:
		return "tuesday";
		break;
	case WEDNESDAY:
		return "wednesday";
		break;
	case THURSDAY:
		return "thursday";
		break;
	case FRIDAY:
		return "friday";
		break;
	case SATURDAY:
		return "saturday";
		break;
	default:
		return "ERROR - WEEKDAY NOT FOUND";
	}
}

int main()
{
	// Nota notaObtenida = B; // tiene valor de 3
	// Nota otraNotaObtenida = static_cast<Nota>(notaObtenida + 4);
	// cout << "mi nota obtenida fue de valor: " << otraNotaObtenida << endl;

	// ----------------

	cout << "\nhoy es: " << displayDay(THURSDAY) << endl;
	return 0;
}