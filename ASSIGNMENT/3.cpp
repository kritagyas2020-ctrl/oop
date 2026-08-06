#include <iostream>
using namespace std;

namespace Metric {
    double kmToMeters(double km) {
        return km * 1000;
    }
}

namespace Imperial {
    double milesToFeet(double miles) {
        return miles * 5280;
    }
}

int main() {
    cout << "5 km = " << Metric::kmToMeters(5) << " meters" << endl;
    cout << "2 miles = " << Imperial::milesToFeet(2) << " feet" << endl;
    return 0;
}