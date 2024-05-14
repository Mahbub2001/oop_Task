#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w)
    {
        cout << "Rectangle object created !! length : " << length << "; width: " << width << endl;
    }
    float area()
    {
        return length * width;
    }
    float perimeter()
    {
        return 2 * (length + width);
    }

    ~Rectangle()
    {
        cout << "Rectangle object destroyed" << endl;
    }
};

int main()
{
    Rectangle rectangle(5.0, 3.0);
    cout << "Area is: " << rectangle.area() << endl;
    cout << "Perimeter is: " << rectangle.perimeter() << endl;

    return 0;
}
