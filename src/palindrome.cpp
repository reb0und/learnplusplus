#include <string>
#include <iostream>

std::string reverseStr(std::string str) {
    std::string newStr = "";
    for (int i = str.length()-1; i >= 0; i--) {
        if (str[i] == ' ') {
            continue;
        }
        newStr += str[i];
    }
    return newStr;
}

bool isPalindrome(std::string str) {
    if (str == reverseStr(str)) {
        return true;
    }

    return false;
}

void palindrome() {
    std::cout << "Palindrome Checker\n";
    while (true) {
        std::cout << "Enter string: ";
        std::string str = "";
        std::getline(std::cin, str);
        if (std::cin.fail()) {
            std::cerr << "Invalid input\n";
            return;
        }

        if(isPalindrome(str)) {
            std::cout << str << " is a palindrome\n";
            continue;
        }
        
        std::cout << str << " is not a palindrome\n";
    }
}