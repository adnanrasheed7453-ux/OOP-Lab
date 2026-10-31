#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string employeeName;
    int employeeID;

    void showEmployee() {
        cout << "Employee Name : " << employeeName << endl;
        cout << "Employee ID   : " << employeeID << endl;
    }
};

class Doctor : public Employee {
public:
    string specialization;

    void showDoctor() {
        cout << "----- Doctor Record -----" << endl;
        showEmployee();
        cout << "Specialization: " << specialization << endl;
    }
};

class Nurse : public Employee {
public:
    string shift;

    void showNurse() {
        cout << "----- Nurse Record -----" << endl;
        showEmployee();
        cout << "Shift         : " << shift << endl;
    }
};

int main() {
    Doctor d;
    d.employeeName   = "Dr. Sana Malik";
    d.employeeID     = 2001;
    d.specialization = "Cardiology";

    Nurse n;
    n.employeeName = "Ayesha Khan";
    n.employeeID   = 3005;
    n.shift        = "Night";

    d.showDoctor();
    cout << endl;
    n.showNurse();
    return 0;
}
