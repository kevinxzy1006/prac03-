#include <iostream>
#include "Ford.h"
#include "Car.h"

using namespace std;

int main()
{
    Ford ford;
    ford.set_badgeNumber(10);
    ford.set_litresOfFuel(50);

    cout << "The badge number of the ford: " << ford.get_badgeNumber() << endl;
    cout << "The litres of fuel of the ford: " << ford.get_litresOfFuel() << endl;

    ford.drive(10);
    cout << "The emissions after driving for 10 kms: " << ford.get_emissions() << endl;
    ford.refuel(10);
}