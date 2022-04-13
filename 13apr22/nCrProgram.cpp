#include <iostream>
#include<cmath>
using namespace std;

int fact(int a)
{
    int k = 1;
    for (int i = a;i>=1; i--)
    {
        k = k * i;
    }
    return k;
}
int nCr(int n, int r)
{
    int num = fact(n);
    int deno = fact(r) * fact(n - r);
    int factorial = num / deno;
    return factorial;
}

int main()
{
    int n;
    int r;
    cout<<"enter n and r"<< endl;
    cin >> n >> r;
    cout << nCr(n, r);
}