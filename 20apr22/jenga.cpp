#include <iostream>
using namespace std;
void jenga(int a, int b)
{
    if (a <= b && b % a == 0)
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
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        jenga(a, b);
    }
}