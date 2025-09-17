// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
    // Attributes
protected:
    string name;
    int id;
    string type; // "Hourly" or "Salaried"

    // Methods
public:
    Employee();
    Employee(const string &name, int id, const string &type);

    string getType() const;

    string getName() const;

    // virtual ~Employee();
};

#endif
