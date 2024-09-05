#include <iostream>
#include "Tesla.h"
#include "Car.h"

using namespace std;

int main()
{
    Tesla tesla;
    tesla.set_model('Y');
    tesla.set_batteryPercentage(150);
    cout << "The model of the tesla: " << tesla.get_model() << endl;
    cout << "The battery percentage of the tesla: " << tesla.get_batteryPercentage() << endl;

    tesla.drive(10);
    cout << "The emissions after driving for 10 kms: " << tesla.get_emissions() << endl;
    tesla.chargeBattery(100); // charge until full

    tesla.drive(100);
    cout << "The emissions after driving for 100 kms: " << tesla.get_emissions() << endl;
    tesla.chargeBattery(10); // charge but not full

    return 0;
}