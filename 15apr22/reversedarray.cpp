#include <iostream>
using namespace std;
int main()
{
    int ar[100];
    int size;
    cout << "enter size of th array" << endl;
    cin >> size;
    cout << "enter elements" << endl;
    for (int i = 0; i <size; i++)
    {
        cin >> ar[i];
    }
    cout << "the array is" << endl;
    for (int i = size; i >0; i--)
    {
        cout << ar[i] << "  ";
    }
}