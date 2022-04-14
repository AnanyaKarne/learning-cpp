#include <iostream>
using namespace std;
int fib(int n)
{
    int t1 = 0;
    // cout << t1 << " ";
    int t2 = 1;
    // cout << t2 << " ";
    int t3;

    for (int i = 0; i < n - 2; i++)
    {
        t3 = t1 + t2;
        // cout << t3 << " ";
        t1 = t2;
        t2 = t3;
    }
        cout << t3 << " ";

    return t3;
    
}
int main()
{
    int n;
    cin >> n;
    fib(n);

    return 0;
}
