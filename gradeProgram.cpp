// Copyright (c) 2022 Alexander Matheson All rights reserved.
//
// Created by: Alexander Matheson
// Created on: Jan 21, 2022
// This program uses a function to calculate
// the user"s grade percentage.
#include <iostream>


int FindPercentage(std::string grade) {
    // convert grade to percent
    if (grade == "4+") {
        return 98;
    } else if (grade == "4") {
        return 90;
    } else if (grade == "4-") {
        return 83;
    } else if (grade == "3+") {
        return 78;
    } else if (grade == "3") {
        return 75;
    } else if (grade == "3-") {
        return 71;
    } else if (grade == "2+") {
        return 68;
    } else if (grade == "2") {
        return 65;
    } else if (grade == "2-") {
        return 61;
    } else if (grade == "1+") {
        return 58;
    } else if (grade == "1") {
        return 55;
    } else if (grade == "1-") {
        return 51;
    } else if (grade == "R") {
        return 25;
    } else {
        return -1;
    }
}


int main() {
    // declare variables
    std::string gradeInput;
    int percentage;

    // get input
    std::cout << "Enter your grade level: ";
    std::getline(std::cin, gradeInput);

    // call function
    percentage = FindPercentage(gradeInput);

    // error checking
    if (percentage == -1) {
        std::cout << "Invalid input.";
    } else {
        std::cout << "Your percentage is " << percentage << "%.";
    }
}
