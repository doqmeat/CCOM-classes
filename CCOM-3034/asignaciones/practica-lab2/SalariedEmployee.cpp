#include "SalariedEmployee.h"
#include <string>

using namespace std;

SalariedEmployee::SalariedEmployee() {}

SalariedEmployee::SalariedEmployee(const string &name, int id, double yearlyPayment)
{
    this->name = name;
    this->id = id;
    this->yearlyPayment = yearlyPayment;
}

double SalariedEmployee::calculatePay() const
{
    return yearlyPayment / 26;
}

double SalariedEmployee::getYearlyPayment() const
{
    return yearlyPayment;
}