#ifndef DATE_H
#define DATE_H

#include <string>
#include <vector>

using namespace std;

class Date
{
private:
	int year, month, day;
	bool valid(int aYear, int aMonth, int aDay) const;
	int maxDaysPerMonth(int aYear, int aMonth) const;

public:
	Date();
	Date(int aYear, int aMonth, int aDay);
	bool same(const Date &other) const;
	void advance(int days);
	string getDayOfWeek() const;
	bool before(const Date &other) const;
	string toString() const;
};

#endif