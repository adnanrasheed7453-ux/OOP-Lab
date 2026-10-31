#include <iostream>
#include <string>
using namespace std;

class LibraryMember {
public:
    string memberName;
    int memberID;

    void showMember() {
        cout << "Member Name   : " << memberName << endl;
        cout << "Membership ID : " << memberID << endl;
    }
};

class StudentMember : public LibraryMember {
public:
    string department;
    int semester;

    void showStudent() {
        cout << "----- Student Member Record -----" << endl;
        showMember();
        cout << "Department    : " << department << endl;
        cout << "Semester      : " << semester << endl;
    }
};

int main() {
    StudentMember s;
    s.memberName = "Ali Hassan";
    s.memberID   = 1052;
    s.department = "Computer Science";
    s.semester   = 4;

    s.showStudent();
    return 0;
}
