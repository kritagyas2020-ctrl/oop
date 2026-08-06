#include <iostream>
using namespace std;

float amountCalc(float p, int t, float r = 3.5f) {
    return p + (p * r * t) / 100;
}

int main() {
    cout << "Using default rate: " << amountCalc(10000, 2) << endl;
    cout << "Using custom rate: " << amountCalc(10000, 2, 5.0f) << endl;
}