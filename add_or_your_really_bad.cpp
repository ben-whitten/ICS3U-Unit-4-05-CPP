// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which squares numbers together up to another number.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what runs the program.
    std::string amountAsString;
    std::string chosenNumberAsString;
    int chosenNumber;
    int amount;
    int numberTotal = 0;
    int nextFullNumber = 0;

    // Process
    while (true) {
        std::cout << "Input how many numbers you want to add: ";
        std::cin >> amountAsString;
        std::cout << "" << std::endl;

        try {
            amount = std::stoi(amountAsString);

            while (nextFullNumber < amount) {
                std::cout << "Input a numbers: ";
                std::cin >> chosenNumberAsString;
                std::cout << "" << std::endl;

                try {
                    chosenNumber = std::stoi(chosenNumberAsString);

                    if (chosenNumber < 0) {
                        nextFullNumber = (nextFullNumber + 1);
                        continue;
                    } else {
                        numberTotal = numberTotal + chosenNumber;
                        nextFullNumber = (nextFullNumber + 1);
                    }
                } catch (std::invalid_argument) {
                    std::cout << "That was not a valid number."
                    << std::endl;
                }
            } std::cout<< "The total is: " << numberTotal << std::endl;
            break;
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid number."
        << std::endl;
        }
    }
}
