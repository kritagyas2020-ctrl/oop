#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void applyDiscount(double percent) {
        price = price - (price * percent / 100);
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Book b1("C++ Programming", "Bjarne Stroustrup", 1000);
    Book b2("Clean Code", "Robert Martin", 1500);
    Book b3("The C++ Book", "John Smith", 2000);

    b1.applyDiscount(10);
    b2.applyDiscount(20);
    b3.applyDiscount(15);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}