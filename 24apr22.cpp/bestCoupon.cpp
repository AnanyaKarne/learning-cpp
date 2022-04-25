#include <iostream>
using namespace std;
void coupon(int x)
{
    int a;
    int v;
    v = x / 100 * 10;
    a = x - v;
    if (v > 100)
    {
        cout << v << endl;
    }
    else
    {
        cout << "100" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        coupon(x);
    }
}