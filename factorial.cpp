// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program outputs the factorial of a positive integer

#include <iostream>

int main() {
    // This function outputs the factorial of a positive integer

    // Variables
    int integer;
    int factorial = 1;
    int counter = 0;

    // Input
    std::cout << "Enter a positive integer: " << std::endl;
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process
    do {
        std::cout << counter << std::endl;
        counter++;
        factorial = factorial*counter;
    } while (integer > counter);

    // Output
    std::cout << "The factorial is " << factorial << std::endl;
}
