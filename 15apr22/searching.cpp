#include <iostream>
using namespace std;
bool search(int ar[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (key == ar[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num[10] = {12, 34, 52, 6, 7, 10, 45, 2, 3, 48};
    int size = 10;
    int key = 66;

    if (search(num, size, key) == 1)
    {
        cout << key << " is in the array" << endl;
    }
    else
    {
        cout << key << " is not in the array" << endl;
    }
}
