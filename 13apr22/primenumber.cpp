#include <iostream>
using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        {
            cout << n << "is a prime number";
        }
    }
    else
    {
        cout << n << "isnt a prime number";
    }
}
