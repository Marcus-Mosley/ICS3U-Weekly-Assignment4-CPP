// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program finds the average of three integers,
//     only if they are between 0-100 inclusive

#include <iostream>
#include <string>

int main() {
    // This function finds the average of three integers,
    //     only if they are between 0-100 inclusive
    std::string string_1;
    std::string string_2;
    std::string string_3;
    int integer_1;
    int integer_2;
    int integer_3;
    int average;

    // Input
    std::cout << "Enter a number between 0 and 100 inclusive: ";
    std::cin >> string_1;
    std::cout << "Enter a second number between 0 and 100 inclusive: ";
    std::cin >> string_2;
    std::cout << "Enter a third number between 0 and 100 inclusive: ";
    std::cin >> string_3;
    std::cout << "" << std::endl;

    // Process
    try {
        integer_1 = std::stoi(string_1);
        integer_2 = std::stoi(string_2);
        integer_3 = std::stoi(string_3);
        if (integer_1 >= 0 && integer_1 <= 100) {
            if (integer_2 >= 0 && integer_2 <= 100) {
                if (integer_3 >= 0 && integer_3 <= 100) {
                    average = (integer_1 + integer_2 + integer_3) / 3;
                    // Output
                    std::cout << "The average of the numbers " << integer_1
                    << ", " << integer_2 << ", and " << integer_3 << " is "
                    << average << "!" << std::endl;
                } else {
                    std::cout << "I am so sorry, but I cannot average"
                    " numbers more than 100 or less than 0!"
                    << std::endl;
                }
            } else {
                std::cout << "I am so sorry, but I cannot average"
                " numbers more than 100 or less than 0!" << std::endl;
            }
        } else {
            std::cout << "I am so sorry, but I cannot average"
            " numbers more than 100 or less than 0!" << std::endl;
        }
    } catch (std::invalid_argument) {
    std::cout << "You have not inputted three integers, please input three"
                 " numbers between 0 and 100!" << std::endl;
    }
}
