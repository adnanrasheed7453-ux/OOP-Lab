#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee() {
        name = "Default";
        salary = 0;
    }

    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    Employee(const Employee& e) {
        name = e.name;
        salary = e.salary;
    }

    void SetName(string n) {
        name = n;
    }

    string GetName() {
        return name;
    }

    void SetSalary(double s) {
        salary = s;
    }

    double GetSalary() {
        return salary;
    }

    void Display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    ~Employee() {
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager() : Employee() {
        bonus = 0;
    }

    Manager(string n, double s, double b) : Employee(n, s) {
        bonus = b;
    }

    Manager(const Manager& m) : Employee(m) {
        bonus = m.bonus;
    }

    void SetBonus(double b) {
        bonus = b;
    }

    double GetBonus() {
        return bonus;
    }

    void Display() {
        Employee::Display();
        cout << "Bonus: " << bonus << endl;
    }

    double CalculateTotalSalary() {
        return GetSalary() + bonus;
    }

    ~Manager() {
    }
};

int main() {
    cout << "--- Default constructor ---" << endl;
    Manager m1;
    m1.Display();

    cout << "--- Parameterized constructor ---" << endl;
    Manager m2("Bilal", 80000, 15000);
    m2.Display();

    cout << "--- Copy constructor ---" << endl;
    Manager m3(m2);
    m3.Display();

    cout << endl << "--- Total salary ---" << endl;
    cout << "Total salary of " << m2.GetName() << ": " << m2.CalculateTotalSalary() << endl;

    cout << "--- Employee and copy ---" << endl;
    Employee e("Hina", 60000);
    e.Display();

    Manager m4("Sara", 90000, 20000);
    Manager m5(m4);
    m4.SetBonus(25000);

    cout << "Total salary of Sara: " << m4.CalculateTotalSalary() << endl;
    cout << "Total salary of Sara's copy: " << m5.CalculateTotalSalary() << endl;

    return 0;
}
