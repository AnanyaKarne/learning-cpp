#include <iostream>
using namespace std;
void gym(int x, int y, int z)
{
    if (x + y <= z)
    {
        cout << "2" << endl;
    }
    else if (x + y > z)
    {
        if (x <= z)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    // else
    // {
    //     cout << "0" << endl;
    // }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        gym(X, Y, Z);
    }
}