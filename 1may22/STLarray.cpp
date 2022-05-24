#include <iostream>
#include <array>
using namespace std;
int main()
{
    // int ar[]={1,2,3,4};
    array<int, 6> a = {2, 3, 6, 8, 4, 5};
    int size = a.size(); // only for STL array, thats why used 'a' and not 'ar'
    cout << size << endl;
    cout << "the array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " << endl;
    }
    cout << "element at 3rd index is : " << a.at(3) << endl; // accessing third element of the array
    cout<<"STL array"<<endl;
    cout << "first elemetnt is : " << a.front() << endl;     // accessing first element of array
    cout << "last element is : " << a.back() << endl;        // accessing last element of array

}


