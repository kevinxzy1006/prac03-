#include <iostream>
#include "Tesla.h"
#include "Car.h"

using namespace std;

Tesla::Tesla() {}
Tesla::Tesla(char model, int price) : model(model)
{
    float batteryPercentage = 100;
    Car car;
    price = car.price;
}

// Getter and setter
char Tesla::get_model()
{
    return model;
}
float Tesla::get_batteryPercentage()
{
    return batteryPercentage;
}
void Tesla::set_model(char model)
{
    this->model = model;
}
// Set the range of the battery percentage
void Tesla::set_batteryPercentage(float batteryPercentage)
{
    this->batteryPercentage = batteryPercentage;

    if (this->batteryPercentage <= 0.0)
    {
        this->batteryPercentage = 0.0;
    }
    else if (this->batteryPercentage >= 100.0)
    {
        this->batteryPercentage = 100.0;
    }
}

// changeBattery
void Tesla::chargeBattery(int mins)
{
    batteryPercentage += 0.5 * mins;
    if (batteryPercentage >= 100.0)
    {
        batteryPercentage = 100.0;
        cout << "Full of battery." << endl;
    }
}

void Tesla::drive(int kms)
{
    batteryPercentage -= kms / 5;
    if (batteryPercentage >= 0)
    {
        emissions = 74 * kms;
    }
    else
    {
        emissions = 5 * batteryPercentage * 74;
    }

    if (batteryPercentage <= 0)
    {
        batteryPercentage = 0;
    }
}