#include <iostream>
using namespace std;
void sst(int a, int b)
{
    int x = 1;
    x = a * 100 / 10;
    a = x * 10 / 100;
    int y = 1;
    y = b * 100 / 20;
    b = y * 20 / 100;

    if (x > y)
    {
        cout << "first" << endl;
    }
    else if (y > x)
    {
        cout << "second" << endl;
    }
    else if (x = y)
    {
        cout << "any" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int b;
        cin >> a >> b;
        sst(a, b);
    }
}