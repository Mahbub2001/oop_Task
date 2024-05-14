#include <bits/stdc++.h>
using namespace std;

class Printer
{
public:
    void print(int num)
    {
        cout << "The printing integer: " << num << endl;
    }

    void print(float num)
    {
        cout << "The printing float: " << num << endl;
    }

    void print(string s)
    {
        cout << "The printing string: " << s << endl;
    }
};

int main()
{
    Printer printer;

    printer.print(20);
    printer.print(3.14f);
    printer.print("Hello,I'm Turza");

    return 0;
}
