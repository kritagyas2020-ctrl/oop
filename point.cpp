#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    // Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    // Function to calculate distance between two points
    double distance(Point ob)
    {
        return sqrt((x - ob.x) * (x - ob.x) +
                    (y - ob.y) * (y - ob.y));
    }
};

int main()
{
    Point p1(2, 3);
    Point p2(6, 7);

    cout << "Distance = " << p1.distance(p2) << endl;

    return 0;
}