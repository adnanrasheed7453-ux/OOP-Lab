#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string holderName;
    float balance;
};

Account addInterest(Account a) {
    a.balance = a.balance + 1000;
    return a;
}

int main() {
    Account original;
    original.holderName = "Sara";
    original.balance = 5000;

    Account updated;
    updated = addInterest(original);

    cout << "Original Account" << endl;
    cout << "Holder Name: " << original.holderName << endl;
    cout << "Balance: " << original.balance << endl;

    cout << endl << "Updated Account" << endl;
    cout << "Holder Name: " << updated.holderName << endl;
    cout << "Balance: " << updated.balance << endl;

    return 0;
}
