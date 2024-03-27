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
#include "interactive.h"
#include "strings.h"

/* 
 * Come on now.
 */
int main()
{
    std::cout << Strings::welcomeMessage() << std::endl
              << Strings::horizontalRule(40) << std::endl;

    std::string userName = Interactive::getUserName();
    std::string badgeNumber = Interactive::getBadgeNumber();

    std::cout << Strings::horizontalRule(30) << std::endl;

    std::cout << "Name: " << userName << std::endl;
    std::cout << "Badge Number: " << badgeNumber << std::endl;

    return EXIT_SUCCESS;

    /* The following is sample code to show how to use the classes */
    /* The return statement above renders this code inaccessible */

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
