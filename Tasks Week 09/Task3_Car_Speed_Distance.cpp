#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int speed;

public:
    Vehicle() {
        speed = 0;
    }

    Vehicle(int s) {
        speed = s;
    }

    Vehicle(const Vehicle& v) {
        speed = v.speed;
    }

    void SetSpeed(int s) {
        speed = s;
    }

    int GetSpeed() {
        return speed;
    }

    void Display() {
        cout << "Speed: " << speed << " km/h" << endl;
    }

    ~Vehicle() {
    }
};

class Car : public Vehicle {
private:
    string model;
    int distanceKm;

public:
    Car() : Vehicle() {
        model = "Default";
        distanceKm = 0;
    }

    Car(string m, int s) : Vehicle(s) {
        model = m;
        distanceKm = 0;
    }

    Car(const Car& c) : Vehicle(c) {
        model = c.model;
        distanceKm = c.distanceKm;
    }

    void SetModel(string m) {
        model = m;
    }

    string GetModel() {
        return model;
    }

    void SetDistance(int d) {
        distanceKm = d;
    }

    int GetDistance() {
        return distanceKm;
    }

    void Display() {
        Vehicle::Display();
        cout << "Model: " << model << endl;
        cout << "Distance: " << distanceKm << " km" << endl;
    }

    void Accelerate(int amount) {
        SetSpeed(GetSpeed() + amount);
    }

    void Brake(int amount) {
        int newSpeed = GetSpeed() - amount;
        if (newSpeed < 0) {
            newSpeed = 0;
        }
        SetSpeed(newSpeed);
    }

    void Drive(int hours) {
        SetDistance(GetDistance() + GetSpeed() * hours);
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
    Vehicle v2(60);
    Car c2("Civic", 60);
    v2.Display();
    c2.Display();

    cout << "--- Copy constructor ---" << endl;
    Car c3(c2);
    c3.Display();

    cout << endl << "--- Speed and Distance ---" << endl;
    c2.Accelerate(40);
    cout << "Speed after accelerate: " << c2.GetSpeed() << " km/h" << endl;
    c2.Brake(30);
    cout << "Speed after brake: " << c2.GetSpeed() << " km/h" << endl;
    c2.Drive(2);
    cout << "Distance after 2 hours: " << c2.GetDistance() << " km" << endl;
    c2.Brake(200);
    cout << "Speed after hard braking: " << c2.GetSpeed() << " km/h" << endl;

    cout << "--- Getter & Setter ---" << endl;
    Car c4;
    c4.SetSpeed(80);
    c4.SetModel("Corolla");
    c4.Display();

    return 0;
}
