#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
#include <string>

using namespace std;

class HourlyEmployee : public Employee
{
private:
    double payPerHour;
    double workedHours;

public:
    HourlyEmployee();
    HourlyEmployee(const string &name, int id, double payPerHour, double workedHours);
    double getPayPerHour() const;
    double getWorkedHours() const;
    double calculatePay() const;
};

#endif
