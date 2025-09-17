#include "Date.h"
#include <stdexcept>
#include <iostream>

vector<int> daysPerMonth{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date()
{
	year = 1901;
	month = 1;
	day = 1;
}

Date::Date(int aYear, int aMonth, int aDay)
{
	if (!valid(aYear, aMonth, aDay))
		throw invalid_argument("Invalid Date");
	year = aYear;
	month = aMonth;
	day = aDay;
}

bool Date::valid(int aYear, int aMonth, int aDay) const
{
	if (aYear < 1901 || aYear > 2099 || aMonth < 1 || aMonth > 12 || aDay < 1 || aDay > 31)
		return false;
	if (aDay > maxDaysPerMonth(aYear, aMonth))
		return false;
	return true;
}

bool Date::same(const Date &other) const // objetos se pasan por referencia
{
	return (other.year == year && other.month == month && other.day == day); // verifica el dia del objeto del parametro con el dia que esta en el objeto
}

int Date::maxDaysPerMonth(int aYear, int aMonth) const
{
	int extraDay = (aYear % 4 == 0 && aMonth == 2) ? 1 : 0;
	return daysPerMonth[aMonth - 1] + extraDay;
}

void Date::advance(int n)
{
	day += n;
	while (day > maxDaysPerMonth(year, month))
	{
		day -= maxDaysPerMonth(year, month);
		month++;

		if (month > 12)
		{
			month = 1;
			year++;
		}
	}

	if (n < 0)
		throw invalid_argument("Invalid Date");
}

string Date::getDayOfWeek() const
{
	int startingYear = 1901;

	int nYears = year - startingYear; // cuantos años llevan

	int nLeapYears = 0;
	for (int i = startingYear; i < year; i++) // cuantos años bisiestos llevan
	{
		if (i % 4 == 0)
			nLeapYears++;
	}

	int nDaysToMonth = 0;
	for (int i = 0; i < month - 1; i++)
	{
		nDaysToMonth += maxDaysPerMonth(year, i + 1);
	}

	int dayOfTheWeek = (1 + nYears + nLeapYears + nDaysToMonth + day) % 7;
	string nameOfDay[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

	return nameOfDay[dayOfTheWeek];
}

bool Date::before(const Date &other) const
{
	if (year < other.year)
		return true;
	else if (year == other.year)
	{
		if (month < other.month)
			return true;
		else if (month == other.month)
		{
			if (day < other.day)
				return true;
		}
	}
	return false;
}

string Date::toString() const
{
	string sMonth;

	switch (month)
	{
	case 1:
		sMonth = "Jan";
		break;
	case 2:
		sMonth = "Feb";
		break;
	case 3:
		sMonth = "Mar";
		break;
	case 4:
		sMonth = "Apr";
		break;
	case 5:
		sMonth = "May";
		break;
	case 6:
		sMonth = "Jun";
		break;
	case 7:
		sMonth = "Jul";
		break;
	case 8:
		sMonth = "Aug";
		break;
	case 9:
		sMonth = "Sep";
		break;
	case 10:
		sMonth = "Oct";
		break;
	case 11:
		sMonth = "Nov";
		break;
	case 12:
		sMonth = "Dec";
		break;
	}

	return sMonth + ' ' + to_string(day) + ", " + to_string(year);
}