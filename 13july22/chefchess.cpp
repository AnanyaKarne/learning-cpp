#include <iostream>
using namespace std;
void games(int a)
{
    int min = a * 60;
    int match = min / 20;
    cout << match<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        games(a);
    }
}