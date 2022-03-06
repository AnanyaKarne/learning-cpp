#include <iostream>
#include <string>
using namespace std;

class person
{

    // person class, name, age
    string name;
    int age;
    int standard;

public:
    void set_name(string new_name)
    {
        name = new_name;
    }

    void set_age(int new_age)
    {
        age = new_age;
    }

    void set_standard(int new_standard)
    {
        standard = new_standard;
    }

    string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }

    int get_standard()
    {
        return standard;
    }
};
int main()
{
    person p;

    p.set_age(19);
    p.set_name("ananya");
    p.set_standard(15);

    cout << p.get_age() << endl;
    cout << p.get_name() << endl;
    cout << p.get_standard() << endl;
}
