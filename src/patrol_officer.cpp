/* 
 * patrol_officer.cpp - implementation of PatrolOfficer class 
 * Author: Arsalan Kazmi <ak22aes@herts.ac.uk>
 * 
 * This is free software; you can redistribute it and/or modify it
 * under certain conditions; see the GNU General Public License for
 * more details.
 */

#include <iostream>
#include "classes.h"

PatrolOfficer::PatrolOfficer() {}

/// @brief Prints relevant information of the patrol officer.
void PatrolOfficer::printRelevantInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Badge Number: " << badgeNumber << std::endl;
}

/// @brief Sets officer information.
/// @param name The officer's name.
/// @param badgeNumber The officer's badge number.
void PatrolOfficer::setPatrolOfficerInfo(std::string &name, std::string &badgeNumber) {
    this->name = name;
    this->badgeNumber = badgeNumber;
}