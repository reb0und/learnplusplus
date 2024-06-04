#include <iostream>
#include <string>
#include <vector>


#include "array_stats.h"
#include "banking.h"
#include "calculator.h"
#include "contacts.h"
#include "dynamic_arr.h"
#include "generic_stack.h"
#include "guessing_game.h"
#include "palindrome.h"

int input() {
    std::string str;
    
    std::cout << "input test" << std::endl;
    std::cin >> str;
    if (std::cin.fail()) {
        std::cerr << "Invalid input\n";
    }
    std::cout << "input: " << str << std::endl;

    return 0;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return elements.empty();
}

template <typename T>
void Stack<T>::push(const T& element) {
    if (isEmpty()) {
        std::cerr << "Stack is empty\n";
    }
    elements.push_back(element);
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        std::cerr << "Stack is empty\n";
    }
    elements.pop_back();
}

template <typename T>
T Stack<T>::top() const {
    if(isEmpty()) {
        std::cerr << "Stack is empty\n";
        return T();
    }
    return elements.back();
}

void gen_stack() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    std::cout << "Top element: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;
}

int main() {
    // test method
}