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

ParkingTicket::ParkingTicket() {
    parkedCar = ParkedCar();
    parkingMeter = ParkingMeter();
    baseFine = 0.00;
    additionalFine = 0.00;
}

void ParkingTicket::printRelevantInfo() {
    #ifdef __WIN32__
    SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << std::fixed << std::setprecision(2) << "Base Fine: £" << baseFine << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Additional Fine: £" << additionalFine << std::endl;
}

void ParkingTicket::setTicketInfo(ParkedCar &parkedCar, ParkingMeter &parkingMeter, double baseFine, double additionalFine) {
    this->parkedCar = parkedCar;
    this->parkingMeter = parkingMeter;
    this->baseFine = baseFine;
    this->additionalFine = additionalFine;
}
