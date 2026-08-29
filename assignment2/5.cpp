#include <iostream>
using namespace std;

class MobilePhone {
public:
    string brand;
    string model;
    double price;
    int storage;

    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    MobilePhone p1, p2, p3;

    p1.brand = "Apple";
    p1.model = "iPhone 15";
    p1.price = 99999;
    p1.storage = 128;

    p2.brand = "Samsung";
    p2.model = "Galaxy S24";
    p2.price = 89999;
    p2.storage = 256;

    p3.brand = "Xiaomi";
    p3.model = "Redmi Note 13";
    p3.price = 29999;
    p3.storage = 256;

    p1.displayDetails();
    p2.displayDetails();
    p3.displayDetails();

    return 0;
}