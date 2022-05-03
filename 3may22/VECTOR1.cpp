#include <iostream>
#include <vector> //include the library!
using namespace std;
int main()
{

    vector<int> v; // initiallising a vector, when avector is made, its size as well as memory alloted to it is zero.
    cout << "size: " << v.capacity() << endl;

    // for adding elements
    v.push_back(1);
    cout << "size: " << v.capacity() << endl;

    v.push_back(2);
    cout << "size: " << v.capacity() << endl;

    v.push_back(3);
    cout << "size: " << v.capacity() << endl;

    v.push_back(4);
    cout << "size: " << v.capacity() << endl;

    v.push_back(5);
    cout << "size: " << v.capacity() << endl;

    v.push_back(6);
    cout << "size: " << v.capacity() << endl;

    v.push_back(7);
    cout << "size: " << v.capacity() << endl;
    // so the vector doubles itself as soon it gets filled
   
    v.push_back(8);
    cout << "no of elements: " << v.size() << endl;//size() shows the  number of elements
}