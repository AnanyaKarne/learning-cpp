#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (n == 2 && ar[0] != ar[1])
        {
            cout << "yes" << endl;
        }
        else if (n > 2)
        {
            int max = *max_element(ar, ar + n);

            int freqSize = max + 1;

            int freq_arr[freqSize] = {0};

            for (int i = 0; i < n; i++)
            {
                freq_arr[ar[i]]++;
            }
            //---------
            for (int i = 0; i < freqSize; i++)
            {
                if (freq_arr[i] > 1)
                {
                    break;
                    cout << "yes" << endl;
                }
                // else
                // {
                //     cout << "no" << endl;
                // }
            }
        }
    }
}