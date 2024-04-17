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

/// @brief Prints the welcome message.
/// @param userName The user's name.
void printWelcomeMessage(std::string userName)
{
    std::cout << Strings::welcomeMessage() << std::endl
              << Strings::horizontalRule(40) << std::endl;
    std::cout << "Welcome officer " << userName << std::endl;
    std::cout << "The system is ready to use." << std::endl;
    std::cout << Strings::horizontalRule(30) << std::endl;
}

/// @brief Gets car information from the user.
/// @param carMake The make, i.e. company name of the car.
/// @param carModel The model of the car.
/// @param carColour The car's colour.
/// @param licenceNumber The car's licence number. 
void getCarInformation(std::string *carMake, std::string *carModel, std::string *carColour, std::string *licenceNumber)
{
    std::cout << "Please enter car information, separated by spaces." << std::endl;
    std::cout << "[Make] [Model] [Colour] [Licence Number]" << std::endl;

    std::cin >> *carMake >> *carModel >> *carColour >> *licenceNumber;
}

/// @brief Gets meter and duration information from the user.
/// @param pm_parkingMeter The parking meter object.
/// @param purchasedDurationMins How many minutes have been purchased.
/// @param elapsedDurationMins How many minutes the car has been parked for.
void getMeterAndDurationInformation(ParkingMeter *pm_parkingMeter, int *purchasedDurationMins, int *elapsedDurationMins)
{
    std::cout << "How many minutes of parking were purchased?" << std::endl;
    std::cin >> *purchasedDurationMins;

    std::cout << "How many minutes has the vehicle been parked?" << std::endl;
    std::cin >> *elapsedDurationMins;

    pm_parkingMeter->setDurations(*purchasedDurationMins, *elapsedDurationMins);
}

/// @brief Prints the ticket in a readable format.
/// @param car 
/// @param meter 
/// @param ticket 
/// @param purchased 
/// @param elapsed 
void printTicket(ParkedCar car, ParkingMeter meter, ParkingTicket ticket, int purchased, int elapsed, int indentation)
{
    std::cout << Strings::horizontalRule(30) << std::endl;
    std::cout << "TICKET ISSUED!" << std::endl;
    std::cout << "Car Information:" << std::endl;
    car.printRelevantInfo(indentation);
    std::cout << "Meter Information:" << std::endl;
    meter.printRelevantInfo(indentation);
    std::cout << "Ticket Information:" << std::endl;
    std::cout << std::string(indentation, ' ') << "Minutes In Violation: " << elapsed - purchased << std::endl;
    std::cout << std::string(indentation, ' ') << "Total Fine: £" << ticket.getTotalFine() << std::endl;
    std::cout << Strings::horizontalRule(30) << std::endl;
}

/// @brief It's the main function.
/// @return 0 indicating success.
int main()
{
    // Welcome the user and get their info
    std::string userName = Interactive::getUserName();
    std::string badgeNumber = Interactive::getBadgeNumber();

    // Print a nice welcome message
    printWelcomeMessage(userName);

    // Get the car information from the user
    std::string carMake, carModel, carColour, licenceNumber;
    getCarInformation(&carMake, &carModel, &carColour, &licenceNumber);

    // Create the car object and print its info
    ParkedCar myCar = ParkedCar();
    myCar.setCarInfo(carMake, carModel, carColour, licenceNumber);

    // Create the parking meter object and get the relevant info from the user
    ParkingMeter pm_parkingMeter;
    int purchasedDurationMins, elapsedDurationMins;
    getMeterAndDurationInformation(&pm_parkingMeter, &purchasedDurationMins, &elapsedDurationMins);

    // Create the ticket object and print its info
    ParkingTicket thePoliceman = ParkingTicket();
    thePoliceman.setTicketInfo(myCar, pm_parkingMeter, purchasedDurationMins, elapsedDurationMins);

    // Print the ticket
    printTicket(myCar, pm_parkingMeter, thePoliceman, purchasedDurationMins, elapsedDurationMins, 4);

    // Thank the user
    std::cout << "Thank you for using the Ticket Parking Simulator!" << std::endl;

    return 0;
}