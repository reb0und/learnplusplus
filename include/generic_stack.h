#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    bool isEmpty() const;

    void push(const T& element);

    void pop();

    T top() const;
};

#endif
