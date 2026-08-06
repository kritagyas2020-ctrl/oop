#include <iostream>
using namespace std;

// Inline function reduces function call overhead
inline int max3(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main() {
    cout << max3(10, 20, 15) << endl;
    cout << max3(5, 2, 1) << endl;
}