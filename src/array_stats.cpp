#include <iostream>
#include <array>

#include "guessing_game.h"

void outputArr(int param[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout<<param[i] << ", ";
    }

    std::cout << "\n";
}

void fillArr(int param[], int size) {
    for (int i = 0; i < size; i++) {
        param[i] = randomInt(1, 10);
    }
}

int max(int param[], int size) {
    int max = std::numeric_limits<int>::min();

    for (int i = 0; i < size; i++) {
        if (param[i] > max) {
            max = param[i];
        }
    }

    return max;
}

double mean(int param[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += param[i];
    }

    return static_cast<double>(sum)/size;
}


int min(int param[], int size) {
    int min = std::numeric_limits<int>::max();

    for (int i = 0; i < size; i++) {
        if (param[i] < min) {
            min = param[i];
        }
    }

    return min;
}



void arrayStats() {
    std::cout << "Array Statistics\n";
    const int SIZE = 20;
    int arr[SIZE];
    fillArr(arr, SIZE);

    while (true) {
        std::cout << "Select operation:\n";
        std::cout << "1. Output array\n2. Randomize array\n3. Max\n4. Mean\n5. Min\n6. Exit\n";
        
        int op;
        std::cin >> op;
        if (std::cin.fail() || op < 1 || op > 8) {
            std::cerr << "Invalid input: must be interger between 1-8\n";
            return;
        }

        switch (op) {
            case 1:
                outputArr(arr, SIZE);
                break;
            case 2:
                fillArr(arr, SIZE);
                break;
            case 3:
                std::cout << "Max: " << max(arr, SIZE) << "\n";
                break;
            case 4:
                std::cout << "Mean: " << mean(arr, SIZE) << "\n";
                break;
            case 5:
                std::cout << "Minimum: " << min(arr, SIZE) << "\n";
                break;
            case 6:
                std::cout << "Exiting\n";
                exit(0);
            default:
                std::cout << "Exiting\n";
                exit(0);
        }
    }
}
