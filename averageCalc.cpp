// Copyright (c) 2022 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Jan. 27, 2022
// This program asks the user to enter a decimal
// number and the number of decimal places they would
// like to round. It then rounds the number to the
// number of specified decimal places.

#include <iostream>
#include <random>

int main() {
    // declaring constants
    const float MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // initializing sum and counter
    int counter = 0;
    int sum = 0;

    // declaring variables
    float average;
    int listOfInts[10];

    // display opening message
    std::cout << "This program generates a list of random ";
    std::cout << "numbers between 0 and 100, then calculates the average.";
    std::cout << std::endl;
    std::cout << std::endl;

    // displays random numbers and calculates average
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // declaring random number
        int randomNumber;

        std::random_device rseed;


        // mersenne_twister
        std::mt19937 rgen(rseed());

        // [0, 100]
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

        randomNumber = idist(rgen);

        // declaring array variable
        listOfInts[counter] = randomNumber;
        sum = sum + listOfInts[counter];
        std::cout << listOfInts[counter] << " added to the list at position " << counter;
        std::cout << std::endl;
    }
    
    for (counter = 0; counter < 1; counter++) {
        average = sum / MAX_ARRAY_SIZE;
        std::cout << std::endl;
        std::cout << "The average is " << average;
    }
}
