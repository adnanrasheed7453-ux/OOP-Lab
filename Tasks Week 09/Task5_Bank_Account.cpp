#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount() {
        owner = "Default";
        balance = 0;
    }

    BankAccount(string o, double b) {
        owner = o;
        balance = b;
    }

    BankAccount(const BankAccount& b) {
        owner = b.owner;
        balance = b.balance;
    }

    void SetOwner(string o) {
        owner = o;
    }

    string GetOwner() {
        return owner;
    }

    void SetBalance(double b) {
        balance = b;
    }

    double GetBalance() {
        return balance;
    }

    void Display() {
        cout << "Owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }

    void Deposit(double amount) {
        balance += amount;
    }

    void Withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
        }
    }

    ~BankAccount() {
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount() : BankAccount() {
        interestRate = 0;
    }

    SavingsAccount(string o, double b, double r) : BankAccount(o, b) {
        interestRate = r;
    }

    SavingsAccount(const SavingsAccount& s) : BankAccount(s) {
        interestRate = s.interestRate;
    }

    void SetInterestRate(double r) {
        interestRate = r;
    }

    double GetInterestRate() {
        return interestRate;
    }

    void Display() {
        BankAccount::Display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    void AddInterest() {
        double interest = GetBalance() * interestRate / 100;
        SetBalance(GetBalance() + interest);
    }

    ~SavingsAccount() {
    }
};

int main() {
    cout << "--- Default constructor ---" << endl;
    SavingsAccount s1;
    s1.Display();

    cout << "--- Parameterized constructor ---" << endl;
    SavingsAccount s2("Sara", 10000, 5);
    s2.Display();

    cout << "--- Copy constructor ---" << endl;
    SavingsAccount s3(s2);
    s3.Display();

    cout << "--- Deposit, Withdraw, Interest ---" << endl;
    s2.Deposit(5000);
    cout << "Balance after deposit: " << s2.GetBalance() << endl;
    s2.Withdraw(2000);
    cout << "Balance after withdraw: " << s2.GetBalance() << endl;
    s2.Withdraw(50000);
    s2.AddInterest();
    cout << "Balance after interest: " << s2.GetBalance() << endl;

    cout << "--- s2 and its copy s3 ---" << endl;
    s2.Display();
    s3.Display();

    cout << "--- Another account ---" << endl;
    SavingsAccount s4("Omar", 20000, 10);
    s4.AddInterest();
    s4.Display();

    return 0;
}
