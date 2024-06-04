#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    public:
        virtual double perimeter() const = 0;
        virtual double area() const = 0;
        virtual ~Shape() {};
};

#endif