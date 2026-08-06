#include <iostream>
using namespace std;

int& maxRef(int &x, int &y) {
    return (x > y) ? x : y;
}

int main() {
    int a = 10, b = 20;

    maxRef(a, b) = 100;

    cout << "a = " << a << ", b = " << b << endl;
}