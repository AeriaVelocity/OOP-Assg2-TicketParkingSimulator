#ifndef CLASSES_H
#define CLASSES_H

#include <string>

class ParkedCar {
    public:
        ParkedCar();
        void printRelevantInfo();
        void setCarInfo(
            std::string &carMake,
            std::string &carModel,
            std::string &carColour,
            std::string &licenceNumber
        );
    private:
        std::string carMake;
        std::string carModel;
        std::string carColour;
        std::string licenceNumber;
};

class ParkingMeter {
    public:
        ParkingMeter();
        void printRelevantInfo();
        int getIllegalParkingDuration();
        void setDurations(
            int &purchasedDurationMins,
            int &elapsedDurationMins
        );
    private:
        int purchasedDurationMins;
        int elapsedDurationMins;
};

class PatrolOfficer {
    public:
        PatrolOfficer();
        void printRelevantInfo();
        void setPatrolOfficerInfo(
            std::string &name,
            std::string &badgeNumber
        );
    private:
        std::string name;
        std::string badgeNumber;
};

class ParkingTicket {
    public:
        ParkingTicket();
        void printRelevantInfo();
        void setTicketInfo(
            ParkedCar &parkedCar,
            ParkingMeter &parkingMeter,
            double baseFine,
            double additionalFine
        );
    private:
        ParkedCar parkedCar;
        ParkingMeter parkingMeter;
        double baseFine;
        double additionalFine;
};

#endif // CLASSES_H
