#include <iostream>
#include <string>
using namespace std;

class school
{
public:
    string name;
    int code;
    float fee;

    void set_name(string new_name){
        name = new_name;
    }

    void set_code(int new_code){
        code = new_code;
    }

    
    void set_fee(float new_fee){
        fee = new_fee;
    }
};
int main()
{
    school sch;
    sch.set_name("abc school");
    sch.set_code(387);
    sch.set_fee(212000.34);

    cout << sch.name << endl;
    cout << sch.code << endl;
    cout << sch.fee << endl;
}