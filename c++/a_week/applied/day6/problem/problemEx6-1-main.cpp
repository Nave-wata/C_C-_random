#include <iostream>
#include "FighterAircraft.h"
#include "PassengerPlane.h"

int main() {
    FighterAircraft *fighter = new FighterAircraft();
    PassengerPlane *airplane = new PassengerPlane();

    fighter->fly();
    fighter->fight();
    airplane->fly();
    airplane->carryPassengers();

    delete fighter;
    delete airplane;

    return 0;
}
