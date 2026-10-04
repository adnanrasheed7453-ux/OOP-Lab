#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

void addBonus(Student &s) {
    s.marks = s.marks + 5;
}

int main() {
    Student s1;
    s1.name = "Ahmad";
    s1.marks = 70;

    cout << "Before function call" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    addBonus(s1);

    cout << endl << "After function call" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
