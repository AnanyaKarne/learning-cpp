#include <iostream>
using namespace std;

void money(int a, int b)
{
    if (a >= b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        money(x, y);
    }
}