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
#include <iomanip>

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

    std::cout << Strings::horizontalRule(30) << std::endl;
    std::cout << "Welcome officer " << userName << std::endl;
    std::cout << "The system is ready to use." << std::endl;

    std::cout << Strings::horizontalRule(30) << std::endl;

    std::cout << "Please enter car information, separated by spaces." << std::endl;
    std::cout << "[Make] [Model] [Colour] [Licence Number]" << std::endl;

    std::string carMake;
    std::string carModel;
    std::string carColour;
    std::string licenceNumber;

    std::cin >> carMake >> carModel >> carColour >> licenceNumber;

    std::cout << "How many minutes of parking were purchased?" << std::endl;

    int purchasedDurationMins;

    std::cin >> purchasedDurationMins;

    std::cout << "How many minutes has the vehicle been parked?" << std::endl;

    int elapsedDurationMins;

    std::cin >> elapsedDurationMins;

    std::cout << Strings::horizontalRule(30) << std::endl;

    std::cout << "Police Officer Information:" << std::endl;
    std::cout << "  Name: " << userName << std::endl;
    std::cout << "  Badge Number: " << badgeNumber << std::endl;

    std::cout << "Car Information:" << std::endl;
    std::cout << "  Make: " << carMake << std::endl;
    std::cout << "  Model: " << carModel << std::endl;
    std::cout << "  Colour: " << carColour << std::endl;
    std::cout << "  Licence Number: " << licenceNumber << std::endl;

    std::cout << "Meter Information:" << std::endl;
    std::cout << "  Purchased Duration: " << purchasedDurationMins << " minutes" << std::endl;
    std::cout << "  Elapsed Duration: " << elapsedDurationMins << " minutes" << std::endl;

    double baseFine = 25.0;
    double additionalFine = 10.0 * (elapsedDurationMins - purchasedDurationMins);

    std::cout << "Ticket Information:" << std::endl;
    std::cout << "  Minutes In Violation: " << elapsedDurationMins - purchasedDurationMins << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "  Fine: £" << baseFine + additionalFine << std::endl;

    std::cout << Strings::horizontalRule(30) << std::endl;

    return EXIT_SUCCESS;

    /* The following is sample code to show how to use the classes */
    /* The return statement above renders this code inaccessible */

    ParkedCar myCar;

    std::string example_carMake = "Toyota";
    std::string example_carModel = "Camry";
    std::string example_carColour = "Blue";
    std::string example_licenceNumber = "ABC123";
    myCar.setCarInfo(example_carMake, example_carModel, example_carColour, example_licenceNumber);

    myCar.printRelevantInfo();

    ParkingMeter pm_parkingMeter;

    ParkingTicket thePoliceman;
    thePoliceman.setTicketInfo(myCar, pm_parkingMeter, 100, 50);
    thePoliceman.printRelevantInfo();

    return 0;
}
