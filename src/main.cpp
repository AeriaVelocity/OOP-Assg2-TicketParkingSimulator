/* 
 * main.cpp - main entry point for the Parking Ticket Simulator 
 * Authored by Arsalan Kazmi <ak22aes@herts.ac.uk>
 * 
 * This is free software; you can redistribute it and/or modify it
 * under certain conditions; see the GNU General Public License for
 * more details.
 */

#include <iostream>
#include <string>
#include "classes.h"

int main()
{
    std::cout << "Parking Ticket Simulator" << std::endl;
    std::cout << "An exercise in humility by Arsalan Kazmi" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    ParkedCar myCar;

    std::string carMake = "Toyota";
    std::string carModel = "Camry";
    std::string carColour = "Blue";
    std::string licenceNumber = "ABC123";
    myCar.setCarInfo(carMake, carModel, carColour, licenceNumber);

    myCar.printRelevantInfo();

    ParkingMeter pm_parkingMeter;

    ParkingTicket thePoliceman;
    thePoliceman.setTicketInfo(myCar, pm_parkingMeter, 100, 50);
    thePoliceman.printRelevantInfo();

    return 0;
}
