#include <iostream>
#include<string>
using namespace std;

class quadrilateral
{
public:

    int a, b, c, d;
    string info;
    void what_am_I(){
        cout<<"i'm a "<<info<<endl;
    }
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
        info="square";
    }
};

class rectangle : public quadrilateral
{
public:
    rectangle(int size1, int size2)
    {
        a = b = size1;
        c = d = size2;
        info="rectangle";
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
    sq.what_am_I();

    rectangle rec(40, 32);
    cout << rec.perimeter() << endl;
    rec.what_am_I();
}