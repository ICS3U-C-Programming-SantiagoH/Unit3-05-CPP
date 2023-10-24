// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Oct, 11, 2023
// This program will ask the user
// for a number and it will tell them
// what month corresponds to it.

#include <cmath>
#include <iostream>

// Include this for std::setprecision
#include <iomanip>

int main() {
    // declare userMonth variable

    int userMonth;

    // get the userMonth and display message

    std::cout << "This program asks the user for the a number from ";
    std::cout << "\n1 to 12  and then displays what month corresponds to it.";
    std::cout << "\nEnter your number between 1 and 12: ";
    std::cin >>
        userMonth;

    // state userMonth to user

    switch (userMonth) {
        case 1:
            std::cout << "1 represents January.\n";
            break;

        case 2:
            std::cout << "2 represents February.\n";
            break;

        case 3:
            std::cout << "3 represents March.\n";
            break;

        case 4:
            std::cout << "4 represents April.\n";
            break;

        case 5:
            std::cout << "5 represents May.\n";
            break;

        case 6:
            std::cout << "6 represents June.\n";
            break;

        case 7:
            std::cout << "7 represents July.\n";
            break;

        case 8:
            std::cout << "8 represents August.\n";
            break;

        case 9:
            std::cout << "9 represents September.\n";
            break;

        case 10:
            std::cout << "10 represents October.\n";
            break;

        case 11:
            std::cout << "11 represents November.\n";
            break;

        case 12:
            std::cout << "12 represents December.\n";
            break;

            // error case

        default:
            std::cout << userMonth << " is not a valid number.\n";
    }
}
