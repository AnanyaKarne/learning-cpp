#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;

        int sum = 0;
        for (int i = 0; i < N - 1; i++)
        {
            int k;
            cin >> k;
            sum += k;
        }
        int ans;
        ans = (N * X) - sum;
        if (ans < 0)
        {
            ans = 0;
        }
        cout << ans << endl;
    }
}