#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    int** pp = &p;

    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;
    cout << "**pp = " << **pp << endl;

    cout << "Address of x: " << &x << endl;
    cout << "p holds: " << p << endl;
    cout << "pp holds: " << pp << endl;
}