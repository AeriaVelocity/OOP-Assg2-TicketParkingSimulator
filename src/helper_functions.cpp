/* helper_functions.cpp - implementation of Interactive and Strings classes */

#include <iostream>
#include <string>

#include "interactive.h"
#include "strings.h"

/* Interactive */

std::string Interactive::getUserName() {
    std::string userName;
    std::cout << "Enter your name: ";
    std::getline(std::cin, userName);
    if (userName.empty()) {
        std::cerr << "Please enter your name." << std::endl;
        return getUserName();
    }
    return userName;
}

std::string Interactive::getBadgeNumber() {
    std::string badgeNumber;
    std::cout << "Enter your badge number: ";
    std::getline(std::cin, badgeNumber);
    try {
        (void) std::stoi(badgeNumber);
    }
    catch (std::invalid_argument &e) {
        std::cerr << "Please enter a valid badge number." << std::endl;
        return getBadgeNumber();
    }
    return badgeNumber;
}

/* Strings */

std::string Strings::welcomeMessage() {
    return std::string("Welcome to Parking Ticket Simulator\nAn exercise in humility by Arsalan Kazmi");
}

std::string Strings::horizontalRule(int length, char symbol) {
    std::string rule = std::string(length, symbol);
    return rule;
}
