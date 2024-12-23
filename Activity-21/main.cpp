//
//  main.cpp
//  Activity-21
//
//  Created by Juwon Hong on 10/14/24.
//
#include <iostream>
#include "array.h"

int main() {
    int count;
    std::cout << "Enter the size of the array: ";
    std::cin >> count;

    // Dynamically allocate memory for the array using raw pointers
    int* numbers = new int[count];

    fill(numbers, count);
    printSum(numbers, count);

    delete[] numbers;

    return 0;
}
