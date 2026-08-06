#include <iostream>
#include <cmath>
using namespace std;

float area(float r) {
    return 3.14159f * r * r;
}

int area(int l, int b) {
    return l * b;
}

float area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    cout << "Circle: " << area(5.0f) << endl;
    cout << "Rectangle: " << area(4, 6) << endl;
    cout << "Triangle: " << area(3.0f, 4.0f, 5.0f) << endl;
}