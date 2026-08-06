#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float bill;
    cout << "Enter total bill amount: ";
    cin >> bill;

    cout << showpoint << fixed << setprecision(2);
    cout << setw(12) << setfill('*') << bill << endl;

    return 0;
}