#include <iostream>
using namespace std;

int main() {
    float value;
    int choice;

    cout << "Enter a floating value: ";
    cin >> value;

    int implicitVal = value; // implicit conversion

    cout << "Choose option:\\n";
    cout << "1. Explicit cast using static_cast<int>()\\n";
    cout << "2. View implicitly truncated value\\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Explicit cast: " << static_cast<int>(value);
            break;

        case 2:
            cout << "Implicitly truncated: " << implicitVal;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}