#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "This is a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "This is a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "This is a square" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();
    s2->draw();

    delete s1;
    delete s2;

    return 0;
}
