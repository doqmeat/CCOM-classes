#include "HourlyEmployee.h"
#include <string>

using namespace std;

HourlyEmployee::HourlyEmployee() {}

HourlyEmployee::HourlyEmployee(const string &name, int id, double payPerHour, double workedHours)
{
    this->name = name;
    this->id = id;
    this->payPerHour = payPerHour;
    this->workedHours = workedHours;
}

double HourlyEmployee::getPayPerHour() const
{
    return payPerHour;
}

double HourlyEmployee::getWorkedHours() const
{
    return workedHours;
}

double HourlyEmployee::calculatePay() const
{
    return workedHours * payPerHour;
}
