// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-13
// This program calculates the cost of ordering units,
// with a 10% discount at 1000+ units.

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of units
    const float DISCOUNT = 0.9;
    const float HST = 1.13;

    int cost;
    int unitAmount;

    // Input
    std::cout << "Please enter how many units you would like ($100/u): ";
    std::cin >> unitAmount;

    // Process & Output
    if (unitAmount >= 1000) {
        cost = unitAmount * 100 * DISCOUNT * HST;
    } else {
        cost = unitAmount * 100 * HST;
    }

    std::cout << "Your price will be $" << std::fixed << std::setprecision(0)
    << std::setfill('0') << cost << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
