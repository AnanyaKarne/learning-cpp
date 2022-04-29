#include <iostream>
using namespace std;

void unique(int ar[], int n)
{
    
        int ans = 0;    
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ ar[i];
    }
    cout<< ans<<" ";
}
int main()
{
    int ar[1000];
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> ar[i];
        }
        unique(ar, size);
    }
}
