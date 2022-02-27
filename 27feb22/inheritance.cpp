#include <iostream>
using namespace std;

class quadrilateral
{
public:
    int a, b, c, d;
    int perimeter()
    {
        return a + b + c + d;
    }
};

class square : public quadrilateral
{
public:
    square(int size)
    {
        a = b = c = d = size;
    }
};

class rectangle : public quadrilateral
{
public:
    rectangle(int size1, int size2)
    {
        a = b = size1;
        c = d = size2;
    }
};
int main()
{
    quadrilateral q; 
    q.a = 10;
    q.b = 10;
    q.c = 10;
    q.d = 10;

    cout << q.perimeter() << endl;

    square sq(22);

    cout << sq.perimeter() << endl;

    rectangle rec(40, 32);
    cout << rec.perimeter() << endl;
}