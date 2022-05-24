#include <iostream>
using namespace std;

int litr(int a)
{

    a = (a * 2);
    return a;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cout << litr(a) << endl;
        
    }
}