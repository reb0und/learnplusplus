#include <iostream>
#include <random>
#include <string>

int randomInt(int lower_bound, int upper_bound) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);

    return distr(gen);
}

void guess(int attempts) {
    int num = randomInt(1, 10);
    for (int i = 0; i < attempts; i++) {
        std::cout << "Enter an integer guess between 1-10\n";
        int guess;
        std::cin >> guess;
        if (std::cin.fail()) {
            std::cout << "Invalid input: input must be an integer\n";
            break;
        } else {
            std::cout << "Guess: " << guess << std::endl;
            if (guess == num) {
                std::cout << "Your guess of " << guess << " was correct!\n";
                break;
            } else {
                std::cout << "Your guess of " << guess << " was incorrect.\n";
            }
        }   
    }
    
    std::cout << "The number was " << num << std::endl;
}

void guessingGame() {
    std::cout << "Enter difficulty level (1, 2, 3 hardest)\n";

    int difficulty_lvl = 0;

    std::cin >> difficulty_lvl;

    if (std::cin.fail() || difficulty_lvl > 3 || difficulty_lvl < 1) {
        std::cout << "Invalid input, please input an integer between 1-3\n";
        return;
    }

    int attempts;

    switch (difficulty_lvl) {
        case 3:
            attempts = 1;
            break;
        case 2:
            attempts = 2;
            break;
        case 1:
            attempts = 3;
            break;
        default:
            attempts = 3;
            break;
    }

    while (true) {
        guess(attempts);

        char choice = '?';

        std::cout << "Play again?\n";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cout << "Invalid input; please enter Y (yes) or N (no)\nExiting...\n";
            break;
        }
        
        if (choice == 'n') {
            std::cout << "Exiting...\n";
            break;
        }
    }
}