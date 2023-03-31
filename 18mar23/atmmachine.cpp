#include <iostream>
using namespace std;

int main()
{
    int t, a, b;

    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int ar[a];
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        for (int i=0;i<a;i++)
        {
            if (ar[i] <= b)
            {
                cout << "1";
                b-=ar[i];
            }
            else
            {
                cout << "0";
            }
        
        }
        cout<<endl;
    }
}