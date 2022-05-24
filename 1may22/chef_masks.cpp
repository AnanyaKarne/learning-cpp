#include <iostream>
using namespace std;
void mask(int x, int y)
{
    int a = x * 100;
    int b = y * 10;
    if (a < b)
    {
        cout << "Disposable";
    }
    else
    {
        cout << "Cloth";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        mask(x, y);
    }
}