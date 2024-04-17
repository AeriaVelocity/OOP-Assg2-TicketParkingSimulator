/*
 * parking_ticket.cpp - implementation of ParkingTicket class 
 * Authored by Arsalan Kazmi <ak22aes@herts.ac.uk>
 * 
 * This is free software; you can redistribute it and/or modify it
 * under certain conditions; see the GNU General Public License for
 * more details.
 */

#include <iostream>
#include <iomanip>
#include "classes.h"

#ifdef __WIN32__
#include <windows.h>
#endif

ParkingTicket::ParkingTicket() {}

/// @brief Prints relevant information of the parking ticket.
void ParkingTicket::printRelevantInfo(int indentation) {
    #ifdef __WIN32__
    SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << std::string(indentation, ' ') << std::fixed << std::setprecision(2) << "Base Fine: £" << baseFine << std::endl;
    std::cout << std::string(indentation, ' ') << std::fixed << std::setprecision(2) << "Additional Fine: £" << additionalFine << std::endl;
}

/// @brief Returns the total fine.
/// @return The total fine. (Wow, really? I never would have guessed that.)
int ParkingTicket::getTotalFine() {
    return baseFine + additionalFine;
}

/// @brief Sets ticket information.
/// @param parkedCar The parked car object.
/// @param parkingMeter The parking meter object.
/// @param baseFine How much (in GBP) the ticket will initially charge.
/// @param additionalFine How much (in GBP) the ticket will add to the base fine.
void ParkingTicket::setTicketInfo(ParkedCar &parkedCar, ParkingMeter &parkingMeter, double baseFine, double additionalFine) {
    this->parkedCar = parkedCar;
    this->parkingMeter = parkingMeter;
    this->baseFine = baseFine;
    this->additionalFine = additionalFine;
}
