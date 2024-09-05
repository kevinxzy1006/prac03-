#ifndef CAR_H
#define CAR_H

class Car
{
protected:
    int emissions;

public:
    int price;
    Car();
    Car(int price, int emissions);

    // Getter and setter
    int get_price();
    void set_price(int price);
    int get_emissions();
    void set_emissions(int emissions);

    virtual void drive(int kms);
};

#endif