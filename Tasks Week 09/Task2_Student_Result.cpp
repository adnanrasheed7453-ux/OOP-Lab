#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;

public:
    Person() {
        name = "Default";
    }

    Person(string n) {
        name = n;
    }

    Person(const Person& p) {
        name = p.name;
    }

    void SetName(string n) {
        name = n;
    }

    string GetName() {
        return name;
    }

    void Display() {
        cout << "Name: " << name << endl;
    }

    ~Person() {
    }
};

class Student : public Person {
private:
    int marks;

public:
    Student() : Person() {
        marks = 0;
    }

    Student(string n, int m) : Person(n) {
        marks = m;
    }

    Student(const Student& s) : Person(s) {
        marks = s.marks;
    }

    void SetMarks(int m) {
        marks = m;
    }

    int GetMarks() {
        return marks;
    }

    void Display() {
        Person::Display();
        cout << "Marks: " << marks << endl;
    }

    char CalculateGrade() {
        if (marks >= 80) {
            return 'A';
        } else if (marks >= 60) {
            return 'B';
        } else if (marks >= 40) {
            return 'C';
        }
        return 'F';
    }

    ~Student() {
    }
};

int main() {
    cout << "--- Default constructor ---" << endl;
    Person p1;
    Student s1;
    p1.Display();
    s1.Display();

    cout << "--- Parameterized constructor ---" << endl;
    Person p2("Ali");
    Student s2("Ali", 85);
    p2.Display();
    s2.Display();

    cout << "--- Copy constructor ---" << endl;
    Student s3(s2);
    s3.Display();

    cout << endl << "--- Grade and Position ---" << endl;
    Student s4("Sara", 92);
    cout << "Grade of " << s2.GetName() << ": " << s2.CalculateGrade() << endl;
    cout << "Grade of " << s4.GetName() << ": " << s4.CalculateGrade() << endl;

    if (s2.GetMarks() > s4.GetMarks()) {
        cout << "1st Position: " << s2.GetName() << endl;
        cout << "2nd Position: " << s4.GetName() << endl;
    } else {
        cout << "1st Position: " << s4.GetName() << endl;
        cout << "2nd Position: " << s2.GetName() << endl;
    }

    cout << "--- Getter & Setter ---" << endl;
    Student s5;
    s5.SetName("Hina");
    s5.SetMarks(55);
    cout << "Name: " << s5.GetName() << endl;
    cout << "Marks: " << s5.GetMarks() << endl;
    cout << "Grade: " << s5.CalculateGrade() << endl;

    return 0;
}
