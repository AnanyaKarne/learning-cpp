#include <iostream>
#include <string>
using namespace std;

class dog
{
public:
    string name;
    int number;
    float price;

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
};
int main()
{
    dog anm;
    anm.set_name("husky");
    anm.set_number(5);
    anm.set_price(4253.4);

    cout << anm.name << endl;
    cout << anm.number << endl;
    cout << anm.price << endl;
}