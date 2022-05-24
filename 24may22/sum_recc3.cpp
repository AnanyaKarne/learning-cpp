#include <iostream>
using namespace std;

int func(int i, int sum)
{

    if (i < 1)
    {
        cout << sum;
        return 0;
    }

    func(i - 1, sum + i);

    return 0;
}
int main()
{
    int n;
    cin >> n;

    func(n, 0);
}