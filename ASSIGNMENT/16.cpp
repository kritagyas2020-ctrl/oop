#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    int* ptr = arr + 4;

    for(int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr--;
    }
}