#include <iostream>
using namespace std;

class rectangle
{
    public:
    int l;
    int b;
    
    int area(){
        return l*b;
    }
     int perimeter(){
         return 2*(l+b);
     }
};
int main()
{
    rectangle rec;
    rec.l=333320;
    rec.b=50;
    cout<<rec.area()<<endl;
    cout<<rec.perimeter()<<endl;

}