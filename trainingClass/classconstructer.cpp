#include <iostream>
using namespace std;
class form
{

private:
    int age;
    int id;

public:
    // form(int a, int b)
    // {
    //     cout << " the constructor" << endl;
    //     age = a;
    //     id = b;
    // }
    int setage(int a)
    {
        int b;
        int c;
        this->age = a;
        cout << "age: " << age << endl;
        cout << "value of this: " << this << endl;
        return age;
    }
    int getage(int b)
    {
        cout << "age: " << age << endl;
        cout << "value of this: " << this << endl;
    }
};
main()
{
    form f;
    cout << f.setage(22); // by defualt sends address
    form y;
    y.setage(33);
    // int v;
    // cout<<"enter age: ";
    // cin>>v;
    // f.setage(v);
    // f.getage(v);
}
