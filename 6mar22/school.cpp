#include <iostream>
#include <string>
using namespace std;

class school
{

    string name;
    int code;
    float fee;

public:
    void set_name(string new_name)
    {
        name = new_name;
    }

    void set_code(int new_code)
    {
        code = new_code;
    }

    void set_fee(float new_fee)
    {
        fee = new_fee;
    }

    string get_name()
    {
        return name;
    }

    int chinki()
    {
        return code;
    }

    float get_fee()
    {
        return fee;
    }
};
int main()
{
    school sch;
    sch.set_name("abc school");
    sch.set_code(387);
    sch.set_fee(212000.34);

    cout << sch.get_name() << endl;
    cout << sch.chinki() << endl;
    cout << sch.get_fee() << endl;
}