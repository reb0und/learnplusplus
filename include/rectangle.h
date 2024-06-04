#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    private:
        double width, height;
    public:
        Rectangle(double w, double h);
        
        double area() const override;
        double perimeter() const override;
};

#endif