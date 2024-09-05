#include "Car.h"
#include "Ford.h"
#include <iostream>
using namespace std;

Ford::Ford() {}
Ford::Ford(int badgeNumber, int price) : badgeNumber(badgeNumber)
{
    litresOfFuel = 60.0;
    Car car;
    price = car.price;
}

int Ford::get_badgeNumber()
{
    return badgeNumber;
}
float Ford::get_litresOfFuel()
{
    return litresOfFuel;
}
void Ford::set_badgeNumber(int badgeNumber)
{
    this->badgeNumber = badgeNumber;
}
void Ford::set_litresOfFuel(float litresOfFuel)
{
    this->litresOfFuel = litresOfFuel;
}

void Ford::refuel(int litres)
{
    litresOfFuel += litres;
    if (litresOfFuel >= 60)
    {
        litresOfFuel = 60; // max
        cout << "The fuel is full." << endl;
    }
}

void Ford::drive(int kms)
{
    litresOfFuel -= kms / 5;
    if (litresOfFuel >= 0)
    {
        emissions = 234 * kms;
    }
    else
    {
        emissions = 5 * litresOfFuel * 234;
    }

    if (litresOfFuel <= 0)
    {
        litresOfFuel = 0;
    }
}