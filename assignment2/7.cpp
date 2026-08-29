#include <iostream>
using namespace std;

class Product {
public:
    string productName;
    double price;
    int quantity;

    Product() {
        productName = "Unknown";
        price = 0;
        quantity = 0;
    }

    void display() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Product p;

    p.display();

    return 0;
}
