#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    string brand;

    Car(string b) {
        brand = b;
        cout << "The constructor is called for " << brand << endl;
    }

    void engine_start() {
        cout << "Starting the engine of brand : " << brand << endl;
    }

    void drive(int speed);

    static void alert() {
        cout << "peep peep !" << endl;
    }
};

void Car::drive(int speed) {
    cout <<"Car : " << brand << " is driving at speed of" << speed << " km/h" << endl;
}

int main() {
    Car myCar("Mayback");

    myCar.engine_start();
    myCar.drive(60);

    Car::alert();

    return 0;
}
