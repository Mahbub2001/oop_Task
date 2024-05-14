#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    void print_info() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "This is a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "This is a rectangle." << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape* s1 = &circle;
    Shape* s2 = &rectangle;

    s1->draw();
    s2->draw();

    s1->print_info();
    s2->print_info();

    return 0;
}
