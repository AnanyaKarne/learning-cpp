#include <iostream>
using namespace std;
bool searchii(int num[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (num[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int ar[100];
    int size;
    cout<<"enter size of ur array"<<endl;
    cin >> size;
    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    int key;
    cout<<"element to be searched in ur array"<<endl;

    cin >> key;
    if (searchii(ar, size, key) == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}