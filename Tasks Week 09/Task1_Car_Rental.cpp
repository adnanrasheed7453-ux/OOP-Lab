#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string brand;

public:
    Vehicle() {
        brand = "Default";
    }

    Vehicle(string b) {
        brand = b;
    }

    Vehicle(const Vehicle& v) {
        brand = v.brand;
    }

    void SetBrand(string b) {
        brand = b;
    }

    string GetBrand() {
        return brand;
    }

    void Display() {
        cout << "Brand: " << brand << endl;
    }

    ~Vehicle() {
    }
};

class Car : public Vehicle {
private:
    int rentPerDay;

public:
    Car() : Vehicle() {
        rentPerDay = 0;
    }

    Car(string b, int r) : Vehicle(b) {
        rentPerDay = r;
    }

    Car(const Car& c) : Vehicle(c) {
        rentPerDay = c.rentPerDay;
    }

    void SetRentPerDay(int r) {
        rentPerDay = r;
    }

    int GetRentPerDay() {
        return rentPerDay;
    }

    void Display() {
        Vehicle::Display();
        cout << "Rent Per Day: " << rentPerDay << endl;
    }

    int CalculateRent(int days) {
        return rentPerDay * days;
    }

    ~Car() {
    }
};

int main() {
    cout << "--- Default constructor ---" << endl;
    Vehicle v1;
    Car c1;
    v1.Display();
    c1.Display();

    cout << "--- Parameterized constructor ---" << endl;
    Vehicle v2("Toyota");
    Car c2("Toyota", 5000);
    v2.Display();
    c2.Display();

    cout << "--- Copy constructor ---" << endl;
    Vehicle v3(v2);
    Car c3(c2);
    v3.Display();
    c3.Display();

    cout << endl << "--- Rent calculation ---" << endl;
    cout << "Rent for 3 days: " << c2.CalculateRent(3) << endl;

    cout << "--- Getter & Setter ---" << endl;
    Car c4;
    c4.SetBrand("Honda");
    c4.SetRentPerDay(4000);
    cout << "Brand: " << c4.GetBrand() << endl;
    cout << "Rent Per Day: " << c4.GetRentPerDay() << endl;
    cout << "Rent for 2 days: " << c4.CalculateRent(2) << endl;

    return 0;
}
