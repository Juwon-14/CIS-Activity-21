//
//  main.cpp
//  Activity-21
//
//  Created by Juwon Hong on 10/14/24.
//
#include <iostream>

using namespace std;

// Function to fill the array with values
void fill(int* numbers, int count) {
    for (int i = 0; i < count; ++i) {
        numbers[i] = i + 1;
    }
}

// Function to print the sum of the array elements
void printSum(const int* numbers, int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += numbers[i];
    }
    cout << "Sum of array elements: " << sum << endl;
}

int main() {
    int count;
    cout << "Enter the size of the array: ";
    cin >> count;

    // Dynamically allocate memory for the array using raw pointers
    int* numbers = new int[count];

    fill(numbers, count);
    printSum(numbers, count);

    delete[] numbers;

    return 0;
}
