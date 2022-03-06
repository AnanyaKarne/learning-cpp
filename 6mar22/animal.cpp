#include <iostream>
#include <string>
using namespace std;

class dog
{

    string name;
    int number;
    float price;

public:
    void set_name(string new_name)
    {
        name = new_name;
    }

    void set_number(int new_number)
    {
        number = new_number;
    }

    void set_price(float newprice)
    {
        price = newprice;
    }

    string get_name()
    {
        return name;
    }

    int get_number()
    {
        return number;
    }

    float get_price()
    {
        return price;
    }
};
int main()
{
    dog anm;
    anm.set_name("husky");
    anm.set_number(5);
    anm.set_price(4253.4);

    cout << anm.get_name() << endl;
    cout << anm.get_price() << endl;
    cout << anm.get_number() << endl;
}