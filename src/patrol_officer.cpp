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

PatrolOfficer::PatrolOfficer() {
    name = "";
    badgeNumber = "";
}

void PatrolOfficer::printRelevantInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Badge Number: " << badgeNumber << std::endl;
}

void PatrolOfficer::setPatrolOfficerInfo(std::string &name, std::string &badgeNumber) {
    this->name = name;
    this->badgeNumber = badgeNumber;
}