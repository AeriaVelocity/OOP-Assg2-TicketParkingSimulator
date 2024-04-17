/* 
 * parking_meter.cpp - implementation of ParkingMeter class
 * Authored by Arsalan Kazmi <ak22aes@herts.ac.uk>
 * 
 * This is free software; you can redistribute it and/or modify it
 * under certain conditions; see the GNU General Public License for
 * more details.
 */

#include <iostream>
#include "classes.h"

ParkingMeter::ParkingMeter() {}

/// @brief Prints relevant information of the parking meter.
void ParkingMeter::printRelevantInfo(int indentation) {
    std::cout << std::string(indentation, ' ') << "Purchased Duration: " << purchasedDurationMins << " minutes" << std::endl;
    std::cout << std::string(indentation, ' ') << "Elapsed Duration: " << elapsedDurationMins << " minutes" << std::endl;
    std::cout << std::string(indentation, ' ') << "Illegal Parking Duration: " << elapsedDurationMins - purchasedDurationMins << " minutes" << std::endl;
}

/// @brief Calculates if the vehicle has gone over the duration that was purchased.
/// @return How many minutes the vehicle has gone over.
int ParkingMeter::getIllegalParkingDuration() {
    return purchasedDurationMins - elapsedDurationMins;
}

/// @brief Sets the purchased and elapsed durations, in minutes.
/// @param purchasedDurationMins How many minutes the driver has paid for.
/// @param elapsedDurationMins How many minutes the vehicle has been parked for.
void ParkingMeter::setDurations(int &purchasedDurationMins, int &elapsedDurationMins) {
    this->purchasedDurationMins = purchasedDurationMins;
    this->elapsedDurationMins = elapsedDurationMins;
}
