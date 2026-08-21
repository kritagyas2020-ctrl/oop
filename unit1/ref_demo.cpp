#include <iostream>
using namespace std;

int main()
{
    int a = 60;
    int &b = a;    // b is a reference variable for a

    cout << "a = " << a << "\tb = " << b << endl;

    b = 25;

    cout << "a = " << a << "\tb = " << b << endl;

    cout << "Address of a = " << &a << endl;
    cout << "Address of b = " << &b << endl;

    return 0;
}