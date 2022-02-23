#include <iostream>
using namespace std;

class rectangle
{
    public:
    int l;
    int b;

};
int main()
{
    rectangle rec;
    rec.l=20;
    rec.b=50;
    int area = rec.l*rec.b;
    cout<<area<<endl;
    int perimeter= 2*(rec.l+rec.b);
    cout<< perimeter;
}