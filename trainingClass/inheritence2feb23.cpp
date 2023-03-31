#include <iostream>
using namespace std;
class VForm
{
public:
    int age;
    int phone;
    VForm(int a,int p){
        cout<<"constructor of VForm"<<endl;//parent
        age=a;
        cout<<"VFOrm age: "<<age<<endl;
    }
};
class Empform: public VForm {
    public:
    // int age;
    // int phone;
    int exp;
    int sal;
    Empform(int a, int e,int p):VForm(a,p){
        cout<<"contructor of Empform"<<endl;//child
        this->exp=e;
        cout<<"eform exp: "<<exp<<endl;
    }
};
main(){
    Empform x(43,10,553);//will call both .. parent and child
    x.exp=22;
    x.age=44;
}