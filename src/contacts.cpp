#include <iostream>
#include <fstream>
#include <string>

#include "contacts.h"

void addContact(const std::string& name, const std::string& phone) {
    std::ofstream outFile("contacts.txt", std::ios::app);
    outFile << name << ", " << phone << std::endl;
}

void displayContacts() {
    std::ifstream inFile("contacts.txt");
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << "\n";
    }
}

void contacts() {
    std::cout << "Contact Book\n";
    while (true) {
        std::cout << "Select an option:\n1. Add a contact\n2. Output contacts\n3. Exit\n";
        int option;
        std::cin >> option;
        if (std::cin.fail()) {
            std::cerr << "Invalid input; must be integer";
            continue;
        }

        std::string name, phone;
        
        switch (option) {
            case 1:
                std::cout << "Enter contact name: ";
                std::cin >> name;
                if (std::cin.fail()) {
                    std::cerr << "Invalid input; must be str";
                    continue;
                }

                std::cout << "Enter contact phone: ";
                std::cin >> phone;
                if (std::cin.fail()) {
                    std::cerr << "Invalid input; must be str";
                    continue;
                }

                addContact(name, phone);

                continue;
            case 2:
                displayContacts();
                continue;
            case 3:
                std::remove("contacts.txt");
                std::cout << "Exiting...\n";
                return;
            default:
                std::remove("contacts.txt");
                std::cout << "Exiting...\n";
                return;
        }
    }
};