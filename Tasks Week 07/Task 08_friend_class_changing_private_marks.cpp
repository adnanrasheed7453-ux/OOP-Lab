#include <iostream>
using namespace std;

class Student {
private:
    int marks;
public:
    Student(int m) {
        marks = m;
    }
    friend class Teacher;
};

class Teacher {
public:
    void updateMarks(Student &s, int newMarks) {
        s.marks = newMarks;
    }
    void showMarks(Student s) {
        cout << s.marks << endl;
    }
};

int main() {
    Student s(70);
    Teacher t;
    cout << "Marks before: ";
    t.showMarks(s);
    t.updateMarks(s, 78);
    cout << "Marks after: ";
    t.showMarks(s);
    return 0;
}
