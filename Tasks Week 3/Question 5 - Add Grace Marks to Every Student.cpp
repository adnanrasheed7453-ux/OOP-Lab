#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

void addGraceMarks(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].marks = students[i].marks + 5;
    }
}

int main() {
    Student students[3];

    students[0].name = "Ahmad";
    students[0].marks = 60;
    students[1].name = "Ali";
    students[1].marks = 72;
    students[2].name = "Sara";
    students[2].marks = 85;

    addGraceMarks(students, 3);

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl << endl;
    }

    return 0;
}
