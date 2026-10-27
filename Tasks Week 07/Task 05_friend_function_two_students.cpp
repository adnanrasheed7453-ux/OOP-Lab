#include <iostream>
using namespace std;

class Student {
private:
    int marks;
public:
    Student(int m) {
        marks = m;
    }
    friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2) {
    cout << "Student 1 marks: " << s1.marks << endl;
    cout << "Student 2 marks: " << s2.marks << endl;
    if (s1.marks > s2.marks) {
        cout << "Student 1 scored higher." << endl;
    } else if (s2.marks > s1.marks) {
        cout << "Student 2 scored higher." << endl;
    } else {
        cout << "Both students scored the same (tie)." << endl;
    }
}

int main() {
    Student s1(82);
    Student s2(75);
    compareMarks(s1, s2);
    return 0;
}
