#include <iostream>
#include <string>
using namespace std;

class Order {
public:
    int orderID;

    void showOrder() {
        cout << "Order ID      : " << orderID << endl;
    }
};

class Parcel : public Order {
public:
    string packageType;

    void showParcel() {
        cout << "Package Type  : " << packageType << endl;
    }
};

class Delivery : public Parcel {
public:
    string destination;

    void showDelivery() {
        cout << "Destination   : " << destination << endl;
    }
};

int main() {
    Delivery d;
    d.orderID     = 50721;
    d.packageType = "Fragile Box";
    d.destination = "Lahore, Pakistan";

    cout << "----- Delivery Journey -----" << endl;
    d.showOrder();
    d.showParcel();
    d.showDelivery();
    return 0;
}
