#include <iostream>
using namespace std;
int main()
{
    float a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    float avg = sum / 5;
    cout << avg;
}
