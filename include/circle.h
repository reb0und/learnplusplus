#ifndef CIRCLE_H
#define CIRCLE_H


#include "shape.h"

class Shape;

class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r);
        virtual double area() const;
        virtual double perimeter() const;
};

#endif