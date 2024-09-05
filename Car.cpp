#include "Car.h"

Car::Car() {}
Car::Car(int price, int emissions) : price(price), emissions(0) {}

// Getter and setter
int Car::get_price()
{
    return price;
}
int Car::get_emissions()
{
    return emissions;
}

void Car::set_emissions(int emissions)
{
    this->emissions = emissions;
}
void Car::set_price(int price)
{
    this->price = price;
}

void Car::drive(int kms)
{
    emissions = emissions * 20;
}