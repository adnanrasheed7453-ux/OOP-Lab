#include <iostream>
using namespace std;

class Product {
private:
    int price;
public:
    Product(int p) {
        price = p;
    }
    friend void showCombinedTotal(Product p1, Product p2);
};

void showCombinedTotal(Product p1, Product p2) {
    cout << "Product 1: Rs. " << p1.price << endl;
    cout << "Product 2: Rs. " << p2.price << endl;
    cout << "Combined total: Rs. " << p1.price + p2.price << endl;
}

int main() {
    Product p1(250);
    Product p2(400);
    showCombinedTotal(p1, p2);
    return 0;
}
