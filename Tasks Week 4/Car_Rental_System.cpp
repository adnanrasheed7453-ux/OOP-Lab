
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand, model;
    int speed;
    double rent;

public:
    Car()
    {
        brand = "Unknown";
        model = "Unknown";
        speed = 0;
        rent = 0;
    }

    Car(string b, string m, int s, double r)
    {
        brand = b;
        model = m;
        speed = s;
        rent = r;
    }

    Car(const Car &c)
    {
        brand = c.brand;
        model = c.model;
        speed = c.speed;
        rent = c.rent;
    }

    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setSpeed(int s) { if (s >= 0) speed = s; }
    void setRent(double r) { if (r >= 0) rent = r; }

    string getBrand() { return brand; }
    string getModel() { return model; }
    int getSpeed() { return speed; }
    double getRent() { return rent; }

    void accelerate() { speed += 10; }

    void brake()
    {
        if (speed >= 10) speed -= 10;
        else speed = 0;
    }

    double calculateRent(int days)
    {
        if (days > 0) return rent * days;
        return 0;
    }

    void display()
    {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nSpeed: " << speed;
        cout << "\nRent: " << rent << endl;
    }

    ~Car() {}
};

void showCar(Car c) { c.display(); }

void increaseCarSpeed(Car &c) { c.accelerate(); }

Car createCar()
{
    return Car("Honda", "Civic", 40, 4000);
}

Car prepareRentalCar(Car c)
{
    c.accelerate();
    return c;
}

void displayCars(Car c[], int n)
{
    for (int i = 0; i < n; i++)
        c[i].display();
}

void fillCars(Car c[], int n)
{
    string b, m;
    int s;
    double r;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter brand and model: ";
        cin >> b >> m;
        cout << "Enter speed and rent: ";
        cin >> s >> r;

        c[i].setBrand(b);
        c[i].setModel(m);
        c[i].setSpeed(s);
        c[i].setRent(r);
    }
}

int main()
{
    Car c1;
    c1.setBrand("Toyota");
    c1.setModel("Corolla");
    c1.setSpeed(30);
    c1.setRent(3000);
    c1.display();

    Car c2("Honda", "Civic", 50, 4000);
    Car c3(c2);

    c1.accelerate();
    c1.brake();
    cout << "\nRent for 3 days: " << c1.calculateRent(3);

    showCar(c1);
    increaseCarSpeed(c1);

    Car c4 = createCar();
    Car c5 = prepareRentalCar(c2);

    cout << "\nOriginal Car:";
    c2.display();

    Car cars[3] = {
        Car("Honda", "City", 30, 2000),
        Car("Toyota", "Yaris", 40, 3000),
        Car("Kia", "Sportage", 50, 5000)
    };

    displayCars(cars, 3);

    Car empty[3];
    fillCars(empty, 3);
    displayCars(empty, 3);

    Car *ptr = new Car("Suzuki", "Alto", 20, 1500);
    ptr->display();
    delete ptr;
    ptr = NULL;

    int n;
    cout << "\nEnter number of cars: ";
    cin >> n;

    if (n > 0)
    {
        Car *arr = new Car[n];
        fillCars(arr, n);
        displayCars(arr, n);
        delete[] arr;
        arr = NULL;
    }

    return 0;
}

