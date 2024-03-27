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

ParkingMeter::ParkingMeter()
{
    purchasedDurationMins = 0;
    elapsedDurationMins = 0;
}

void ParkingMeter::printRelevantInfo() {
    std::cout << "Purchased Duration: " << purchasedDurationMins << " minutes" << std::endl;
    std::cout << "Elapsed Duration: " << elapsedDurationMins << " minutes" << std::endl;
    std::cout << "Illegal Parking Duration: " << purchasedDurationMins - elapsedDurationMins << " minutes" << std::endl;
}

int ParkingMeter::getIllegalParkingDuration() {
    return purchasedDurationMins - elapsedDurationMins;
}

void ParkingMeter::setDurations(int &purchasedDurationMins, int &elapsedDurationMins) {
    this->purchasedDurationMins = purchasedDurationMins;
    this->elapsedDurationMins = elapsedDurationMins;
}
