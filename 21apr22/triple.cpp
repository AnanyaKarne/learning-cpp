#include <iostream>
#include <algorithm>
using namespace std;
void triple(int ar[], int a)
{

    if (a < 3)
    {
        cout << "ans"
             << "-1" << endl;
    }
    else if (a >= 3)
    {

        // sort(ar, ar+ a);

        for (int i = 0; i < a; i++)
        {

            int count = 0;
            int key = ar[i];
            for (int i = 0; i < a; i++)
            {
                if (ar[i] == key)
                {
                    count++;
                }
            }
            cout << "ans" << key << endl;
        }
    }
    else
    {
        cout << "ans" << -1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a;
        cin >> a;
        int ar[100000];
        for (int i = 0; i < a; i++)
        {

            cin >> ar[i];
        }
        triple(ar, a);
    }
}
