#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee() {}

Employee::Employee(const string &name, int id, const string &type)
{
  this->name = name;
  this->id = id;
  this->type = type;
}

/* IMPLEMENT GETTERS*/

string Employee::getType() const
{
  return type;
}

string Employee::getName() const
{
  return name;
}