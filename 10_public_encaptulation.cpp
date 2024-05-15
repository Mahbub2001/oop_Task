#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
    int speed;

public:
    Car(string make, string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->speed = 0;
    }
    void accelerate(int incr)
    {
        speed += incr;
    }
    void brake(int decrement)
    {
        speed -= decrement;
    }
    void speed_show()
    {
        cout << "Current speed of the car is: " << speed << endl;
    }
    void display_details()
    {
        cout << "Car Brand is: " << make << endl;
        cout << "Car Model is: " << model << endl;
        cout << "Car Year is: " << year << endl;
    }
};

int main()
{
    Car my_car("Mercedes", "Mayback", 2022);

    my_car.display_details();

    my_car.accelerate(20);
    my_car.speed_show();

    my_car.brake(5);
    my_car.speed_show();

    return 0;
}
