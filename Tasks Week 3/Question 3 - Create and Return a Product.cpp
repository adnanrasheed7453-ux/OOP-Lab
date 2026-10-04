#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string name;
    float price;
};

Product createProduct() {
    Product p;
    p.name = "Laptop";
    p.price = 85000;
    return p;
}

int main() {
    Product p1;
    p1 = createProduct();

    cout << "Product Name: " << p1.name << endl;
    cout << "Product Price: " << p1.price << endl;

    return 0;
}
