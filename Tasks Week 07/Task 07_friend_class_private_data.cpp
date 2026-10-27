#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int salary;
public:
    Employee(string n, int s) {
        name = n;
        salary = s;
    }
    friend class Manager;
};

class Manager {
public:
    void showSalary(Employee e) {
        cout << "Employee: " << e.name << endl;
        cout << "Salary: Rs. " << e.salary << endl;
    }
};

int main() {
    Employee emp("Bilal", 60000);
    Manager m;
    m.showSalary(emp);
    return 0;
}
