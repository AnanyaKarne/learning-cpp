#include <iostream>
#include <cmath>
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

class triangle
{
public:
    float p;
    float h;
    float b;

    float perimeter()
    {
        return p + b + h;
    }

    float area()
    {
        return b * p / 2;
    }

    float gethypotenous()
    {
        return pow(((p * p) + (b * b)), 0.5);
    }
};

int main()
{
    rectangle rec;
    rec.l = 30;
    rec.b = 50;
    cout << "for rectangle" << endl;
    cout << rec.area() << endl;
    cout << rec.perimeter() << endl;

    circle cir;
    cir.r = 1;
    cout << "for circle" << endl;
    cout << cir.area() << endl;
    cout << cir.circumference() << endl;
    cout << cir.getdiameter() << endl;

    square sq;
    sq.s = 3;
    cout << "for square" << endl;
    cout << sq.area() << endl;
    cout << sq.perimeter() << endl;

    triangle tri;
    tri.p = 3;
    tri.b = 4;
    tri.h = tri.gethypotenous();
    cout<<"for triangle"<<endl;
    cout<<tri.perimeter()<<endl;
    cout<<tri.area()<<endl;
}