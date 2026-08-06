#include <iostream>
using namespace std;

void updateSalary(float *salary, float bonus) {
    *salary += bonus;
}

int main() {
    float salary = 25000;

    updateSalary(&salary, 5000);

    cout << "Updated salary = " << salary;
}