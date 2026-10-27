#include <iostream>
using namespace std;

class Ticket {
private:
    static int counter;
    int seatNumber;
public:
    Ticket(int seat) {
        seatNumber = seat;
        counter++;
    }
    friend class Reporter;
};

int Ticket::counter = 0;

class Reporter {
public:
    void showTotal() {
        cout << "Tickets sold: " << Ticket::counter << endl;
    }
    void showSeat(Ticket t) {
        cout << "Seat: " << t.seatNumber << endl;
    }
};

int main() {
    Ticket t1(5), t2(6), t3(7);
    Reporter r;
    r.showSeat(t1);
    r.showTotal();
    return 0;
}
