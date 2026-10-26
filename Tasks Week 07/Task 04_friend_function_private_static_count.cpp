#include <iostream>
using namespace std;

class BookRecord {
private:
    static int counter;
public:
    BookRecord() {
        counter++;
    }
    friend void showRecordCount();
};

int BookRecord::counter = 0;

void showRecordCount() {
    cout << "Total book records: " << BookRecord::counter << endl;
}

int main() {
    BookRecord b1, b2, b3;
    showRecordCount();
    return 0;
}
