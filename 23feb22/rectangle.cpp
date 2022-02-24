#include <iostream>
using namespace std;

class rectangle
{
public:
    int l;
    int b;

    int area()
    {
        return l * b;
    }
    int perimeter()
    {
        return 2 * (l + b);
    }
};

class circle
{
public:
    int r;
    float pi = 3.14;

    float area()
    {

        return pi * r * r;
    }
    float circumference()
    {
        return 2 * pi * r;
    }
    float getdiameter()
    {
        return r * 2;
    }
};

class square
{
public:
    int s;

    float area()
    {
        return s * s;
    }
    float perimeter()
    {
        return 4 * s;
    }
};

int main()
{
    rectangle rec;
    rec.l = 30;
    rec.b = 50;
    cout<<"for rectangle"<<endl;
    cout << rec.area() << endl;
    cout << rec.perimeter() << endl;

    circle cir;
    cir.r = 1;
    cout<<"for circle"<<endl;
    cout << cir.area() << endl;
    cout << cir.circumference() << endl;
    cout << cir.getdiameter() << endl;

    square sq;
    sq.s = 3;
    cout<<"for square"<<endl;
    cout << sq.area() << endl;
    cout << sq.perimeter() << endl;
}