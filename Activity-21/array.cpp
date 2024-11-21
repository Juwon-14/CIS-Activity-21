//
//  array.cpp
//  Activity-21
//
//  Created by Juwon on 10/14/24.
//

#include <iostream>
#include "array.h"

void fill(int* numbers, int count) {
    for (int i = 0; i < count; ++i) {
        numbers[i] = i + 1;
    }
}

void printSum(const int* numbers, int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += numbers[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;
}
