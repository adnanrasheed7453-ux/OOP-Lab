#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

void fillStudents(Student students[], int size) {
    string names[3] = {"Ahmad", "Ali", "Sara"};
    int marksList[3] = {78, 82, 91};

    for (int i = 0; i < size; i++) {
        students[i].name = names[i];
        students[i].marks = marksList[i];
    }
}

int main() {
    Student students[3];

    fillStudents(students, 3);

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl << endl;
    }

    return 0;
}
