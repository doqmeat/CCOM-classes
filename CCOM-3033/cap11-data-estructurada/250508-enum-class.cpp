#include <iostream>

using namespace std;

enum class AvailableDays
{
	MONDAY = 2,
	FRIDAY = 6
};

enum class Day
{
	SUNDAY = 1,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

int main()
{
	AvailableDays diaDisponible = AvailableDays::MONDAY;
	Day dia = Day::MONDAY;
	return 0;
}