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
    virtual int area()
    {
        cout << "Area of Shape" << endl;
        return 0;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() override
    {
        cout << "Area of Rectangle is " << endl;
        return width * height;
    }
};

int main()
{
    Rectangle rectangle(5, 3);

    cout << "The Area is : " << rectangle.area() << endl;

    return 0;
}

//                      Public Derivation         Private D            Protected D

// Public Member            Public             Private             Protected

// Private Member          Not inherited      Not Inherited       Not inherited

// Protected Member        Protected           Private               Protected