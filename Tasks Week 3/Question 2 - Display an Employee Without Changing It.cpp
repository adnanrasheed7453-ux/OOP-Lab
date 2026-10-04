#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    float salary;
};

void displayEmployee(const Employee &e) {
    cout << "Employee Name: " << e.name << endl;
    cout << "Employee Salary: " << e.salary << endl;
}

int main() {
    Employee e1;
    e1.name = "Ali";
    e1.salary = 50000;

    displayEmployee(e1);

    return 0;
}
