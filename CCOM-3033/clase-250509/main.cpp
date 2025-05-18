#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
	int day, month, year;
	string getMonthName() const;
	bool isDayValid() const;

public:
	Date(int d = 1, int m = 1, int y = 1970);
	~Date();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	string getMMDDYYYY() const;
	string getMonthDDYYYY() const;
	string getDDMonthYYYY() const;
};

bool Date::isDayValid() const
{
	if (month == 2)
	{
		if (day >= 1 && day <= 29)
			return true;
		else
			return false;
	}
	if (month >= 1 && month <= 7 && month % 2 == 1)
	{
		if (day >= 1 && day <= 31)
			return true;
		else
			return false;
	}
	if (month >= 8 && month <= 12 && month % 2 == 0)
	{
		if (day >= 1 && day <= 30)
			return true;
		else
			return false;
	}
	if (day >= 1 && day <= 31)
		return true;
	else
		return false;
	return true;
}

Date::Date(int d, int m, int y)
{
	day = d;
	if (!isDayValid())
		day = 1;
	if (m >= 1 && d <= 12)
		month = m;
	else
		month = 1;
	if (y >= 1)
		year = y;
	else
		year = 1970;
}

Date::~Date()
{
}

string Date::getMonthName() const
{
	string monthNames[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
	return monthNames[month - 1];
}

void Date::setDay(int d)
{
	if (d >= 1 && d <= 31)
		day = d;
	else
		day = 1;
}
void Date::setMonth(int m)
{
	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;
}
void Date::setYear(int y)
{
	if (y >= 1)
		year = y;
	else
		year = 1970;
}

// getters

string Date::getMMDDYYYY() const
{
	string date;
	date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
	return date;
}

string Date::getMonthDDYYYY() const
{
	string date;
	date = getMonthName() + " " + to_string(day) + "/" + to_string(year);
	return date;
}
string Date::getDDMonthYYYY() const
{
	string date;
	date = to_string(day) + " " + getMonthName() + ", " + to_string(year);
	return date;
}

int main()
{

	Date hoy(-9, 5, 2025);
	cout << hoy.getMMDDYYYY() << endl;
	cout << hoy.getMonthDDYYYY() << endl;
	cout << hoy.getDDMonthYYYY() << endl;

	return 0;
}