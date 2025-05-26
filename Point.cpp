#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

// Constructor
Point::Point(double xCoord, double yCoord) {
    x = xCoord;
    y = yCoord;
}

// Member function to calculate distance to another Point
double Point::distanceTo(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

// Member function to print the point
void Point::print() const {
    cout << "(" << x << ", " << y << ")" << endl;
}
