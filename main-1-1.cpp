#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    Car car(100, 5); // Create an object for the class

    car.set_price(20000);
    car.set_emissions(10);

    cout << "The price of the car: " << car.get_price() << endl;
    cout << "The emissions of the car: " << car.get_emissions() << endl;

    // Test drive
    car.drive(20);
    cout << "The emission changed after drive: " << car.get_emissions() << endl;

    return 0;
}