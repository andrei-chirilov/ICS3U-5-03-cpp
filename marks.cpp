// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program calculates the marks into percentages

#include <iostream>
#include <string>
#include <map>

std::string mark_finder(std::string level) {
    // This function will determine the mark into a percentage
    std::map<std::string, std::string>::iterator iterator;
    std::map<std::string, std::string> marks {
                                {"4+", "97"},
                                {"4", "91"},
                                {"4-", "83"},
                                {"3+", "78"},
                                {"3", "75"},
                                {"3-", "71"},
                                {"2+", "68"},
                                {"2", "65"},
                                {"2-", "61"},
                                {"1+", "58"},
                                {"1", "55"},
                                {"1-", "51"},
                                {"0", "R"} };

    // process
    iterator = marks.find(level);
    if (iterator != marks.end()) {
        return marks.at(level);
    } else {
        return "-1";
    }
}

int main() {
    // This function takes user input and runs mark_finder()
    std::string level;
    std::string mark;

    while (true) {
        // input
        std::cout << "Input the level: " << std::endl;
        std::cin >> level;
        mark = mark_finder(level);
        if (mark == "-1") {
            // output
            std::cout << "Invalid input."<< std::endl;
        } else {
            std::cout << "Your mark is " << mark << "%" << std::endl;
            break;
        }
    }
}
