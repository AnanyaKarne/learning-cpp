#include <iostream>
#include<string>
using namespace std;

class person
{
    public:
    //person class, name, age
    string name;
    int age;
    int standard;
    

    void set_name(string new_name){
        name=new_name;
    }

    void set_age(int new_age){
        age=new_age;
    }

    void set_standard(int new_standard){
        standard=new_standard;
    }

};
int main(){
    person p;

    p.set_age(19);
    p.set_name("ananya");
    p.set_standard(15);
    cout<<p.age<<endl;
    cout<<p.name<<endl;
    cout<<p.standard<<endl;
}
