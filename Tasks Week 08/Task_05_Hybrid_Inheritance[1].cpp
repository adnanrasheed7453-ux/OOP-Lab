#include <iostream>
#include <string>
using namespace std;

class Participant {
public:
    int registrationNo;

    void showRegistration() {
        cout << "Registration No: " << registrationNo << endl;
    }
};

class Runner : virtual public Participant {
public:
    void runRace() {
        cout << "Running Event : Competing in the 100m race." << endl;
    }
};

class Swimmer : virtual public Participant {
public:
    void swimRace() {
        cout << "Swimming Event: Competing in the 50m freestyle." << endl;
    }
};

class StudentAthlete : public Runner, public Swimmer {
public:
    string athleteName;

    void showAthlete() {
        cout << "Athlete Name  : " << athleteName << endl;
    }
};

int main() {
    StudentAthlete a;
    a.athleteName    = "Usman Tariq";
    a.registrationNo = 7843;

    cout << "----- Student Athlete -----" << endl;
    a.showAthlete();
    a.showRegistration();
    a.runRace();
    a.swimRace();
    return 0;
}
