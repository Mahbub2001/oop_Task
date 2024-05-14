#include <bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    Shape(int w, int h)
    {
        width = w;
        height = h;
    }
};

class Color
{
protected:
    string color;

public:
    Color(string c) : color(c) {}
};

class Rectangle : public Shape, public Color
{
public:
    Rectangle(int w, int h, string c) : Shape(w, h), Color(c) {}

    void display()
    {
        cout <<"The rectangle "<< "Width: " << width << ", Height: " << height << ", Color: " << color << endl;
    }
};

int main()
{
    Rectangle rectangle(5, 3, "Orange");

    rectangle.display();

    return 0;
}
