#include <iostream>
using namespace std;

class StudentCard {
private:
    static int counter;
public:
    StudentCard() {
        counter++;
    }
    static void showCount() {
        cout << "Cards created: " << counter << endl;
    }
};

int StudentCard::counter = 0;

int main() {
    StudentCard::showCount();
    StudentCard c1, c2, c3;
    StudentCard::showCount();
    return 0;
}
