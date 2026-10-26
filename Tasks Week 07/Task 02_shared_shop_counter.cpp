#include <iostream>
#include <string>
using namespace std;

class SaleEntry {
private:
    static int saleCounter;
    string itemName;
public:
    SaleEntry(string name) {
        itemName = name;
        saleCounter++;
    }
    void showItem() {
        cout << "Item: " << itemName << endl;
    }
    static void showTotal() {
        cout << "Total sale entries: " << saleCounter << endl;
    }
};

int SaleEntry::saleCounter = 0;

int main() {
    SaleEntry e1("Notebook");
    SaleEntry e2("Pen");
    e1.showItem();
    e2.showItem();
    SaleEntry::showTotal();
    return 0;
}
