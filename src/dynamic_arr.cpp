#include <iostream>

#include "guessing_game.h"

double meanArr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum)/size;
}

void fillDynArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = randomInt(0, 10);
    }
}

void dynamicArr() {
    int arrSize;
    std::cout << "Enter Array Size: ";
    std::cin >> arrSize;
    std::cout << "\n";
    if(std::cin.fail()) {
        std::cerr << "Invalid input";
    }
    int* dynArr = new int[arrSize];
    fillDynArr(dynArr, arrSize);
    std::cout << "Array Mean: \n" << meanArr(dynArr, arrSize);


    delete[] dynArr;
}