#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[5] = {10, 35, 32, 13, 26};
    int x = sizeof(a) / sizeof(a[0]);
    // int b[3]={2,9,1};
    int temp;
    // int y = sizeof(b)/sizeof(b[0]);
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; i < x; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            cout << temp << " " << a[i];
        }
    }
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
}
