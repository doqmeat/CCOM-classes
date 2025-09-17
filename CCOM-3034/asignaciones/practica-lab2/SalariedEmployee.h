#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee
{
private:
    double yearlyPayment;

public:
    SalariedEmployee();
    SalariedEmployee(const string &name, int id, double yearlyPayment);
    double calculatePay() const;
    double getYearlyPayment() const;
};

#endif
