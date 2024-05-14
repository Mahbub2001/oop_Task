#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    string brand;

public:
    Vehicle(string b)
    {
        brand = b;
    }
};

class Car : public Vehicle
{
protected:
    string model;

public:
    Car(string b, string m) : Vehicle(b), model(m) {}
};

class car_electric : public Car
{
protected:
    int batteryCapacity;

public:
    car_electric(string b, string m, int capacity) : Car(b, m), batteryCapacity(capacity) {}

    void display()
    {
        cout << "The car Brand: " << brand << ", Model: " << model << ", Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main()
{

    car_electric myCar("Tesla", "Model S", 200);

    myCar.display();

    return 0;
}
