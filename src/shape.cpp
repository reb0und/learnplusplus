#include <math.h>

#include "circle.h"
#include "rectangle.h"

Circle::Circle(double r) : radius(r) {};

double Circle::area() const {
    return M_PI * radius * radius;
};

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

Rectangle::Rectangle(double w, double h) : width(w), height(h) {};

double Rectangle::area() const {
    return width * height;
};

double Rectangle::perimeter() const {
    return (2 * width) + (2 * height);
}