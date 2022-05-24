#include <iostream>
using namespace std;
void cost(int X, int Y)
{
    int a = X * 3;
    int b = Y * 2;
    if (a <= b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        int Y;
        cin >> X;
        cin >> Y;

        cost(X, Y);
    }
}