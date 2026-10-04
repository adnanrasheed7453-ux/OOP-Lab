#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand;
    float price;

public:
    Mobile(string b, float p) {
        brand = b;
        price = p;
    }

    Mobile(const Mobile &obj) {
        brand = obj.brand;
        price = obj.price;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Mobile m1("Samsung", 65000);
    Mobile m2(m1);

    cout << "Mobile 1" << endl;
    m1.display();

    cout << endl << "Mobile 2" << endl;
    m2.display();

    return 0;
}
