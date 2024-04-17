/* 
 * parked_car.cpp - implementation of ParkedCar class
 * Authored by Arsalan Kazmi <ak22aes@herts.ac.uk>
 * 
 * This is free software; you can redistribute it and/or modify it
 * under certain conditions; see the GNU General Public License for
 * more details.
 */

#include <iostream>
#include <string>
#include "classes.h"

ParkedCar::ParkedCar() {}

/// @brief Prints relevant information of the parked car.
void ParkedCar::printRelevantInfo() {
    std::cout << "Car Make: " << carMake << std::endl;
    std::cout << "Car Model: " << carModel << std::endl;
    std::cout << "Car Colour: " << carColour << std::endl;
    std::cout << "Licence Number: " << licenceNumber << std::endl;
}

/// @brief Sets car information.
/// @param carMake The make, i.e. company name of the car.
/// @param carModel The model of the car.
/// @param carColour The car's colour.
/// @param licenceNumber The car's licence number.
void ParkedCar::setCarInfo(std::string &carMake, std::string &carModel, std::string &carColour, std::string &licenceNumber) {
    this->carMake = carMake;
    this->carModel = carModel;
    this->carColour = carColour;
    this->licenceNumber = licenceNumber;
}