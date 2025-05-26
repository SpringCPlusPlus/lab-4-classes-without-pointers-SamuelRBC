#include "Rectangle.h"

// put in the code for the constructors

// Constructor: only point provided
Rectangle::Rectangle(Point p) {
    topLeft = p;
    width = 1.0;
    height = 1.0;
}

// Constructor: point, width, and height provided
Rectangle::Rectangle(Point p, double w, double h) {
    topLeft = p;
    width = w;
    height = h;
}

void Rectangle::set_width(double w) { width = w; }
void Rectangle::set_height(double h) { height = h; }
double Rectangle::get_width() { return width; }
double Rectangle::get_height() { return height; }
double Rectangle::area() {
    return width * height;
}
double Rectangle::perimeter() {
    return 2 * (width + height);
}
void Rectangle::set_values(double x, double y) {
    width = x;
    height = y;
}
