#include <iostream>
#include <string>
using namespace std;

class Learner {
private:
    static string courseName;
    string learnerName;
public:
    Learner(string name) {
        learnerName = name;
    }
    static void showCourse() {
        cout << "Course: " << courseName << endl;
    }
    void showLearner() {
        cout << "Learner: " << learnerName << endl;
    }
};

string Learner::courseName = "Introduction to C++";

int main() {
    Learner::showCourse();
    Learner l1("Ayesha");
    l1.showLearner();
    return 0;
}
