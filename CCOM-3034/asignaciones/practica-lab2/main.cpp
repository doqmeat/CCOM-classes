#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

// Reads CSV: ID,Name,Type,PayPerHour,WorkedHours,YearlyPayment
void readFile(const string &filename, vector<HourlyEmployee> &hourlyEmployees, vector<SalariedEmployee> &salariedEmployees)
{
    ifstream file(filename);
    string line;

    // Read file with employees information
    while (getline(file, line))
    {
        stringstream ss(line);
        string name, type, token;
        int id;
        double payPerHour = 0, workedHours = 0, yearlyPayment = 0;

        getline(ss, token, ',');
        id = stoi(token);
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, token, ',');
        payPerHour = stod(token);
        getline(ss, token, ',');
        workedHours = stod(token);
        getline(ss, token, ',');
        yearlyPayment = stod(token);

        if (type == "Hourly")
        {
            hourlyEmployees.emplace_back(name, id, payPerHour, workedHours);
        }
        else if (type == "Salaried")
        {
            salariedEmployees.emplace_back(name, id, yearlyPayment);
        }
    }
}

int main()
{
    vector<HourlyEmployee> hourlyPeople;
    vector<SalariedEmployee> salaryPeople;

    readFile("employee_info.csv", hourlyPeople, salaryPeople);

    // TODO: Print the results
    // Remember that you can use the range based for loop
    // Display the results of each type of employee

    cout << "Hourly Employees:" << endl;

    int id1 = 0;
    for (HourlyEmployee &i : hourlyPeople)
    {
        cout << "ID: " << ++id1;
        cout << " | Name: " << i.getName();
        cout << " | Pay this period: $" << i.calculatePay() << endl;
    }

    cout << "\n Salaried Employees:" << endl;

    int id2 = 0;
    for (SalariedEmployee &i : salaryPeople)
    {
        cout << "ID: " << ++id2;
        cout << " | Name: " << i.getName();
        cout << " | Pay this period: $" << i.calculatePay() << endl;
    }

    cout << endl;
    return 0;
}
