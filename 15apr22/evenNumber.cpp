#include <iostream>
using namespace std;

bool is_even(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int ar[10] = {12, 34, 52, 6, 7, 10, 45, 2, 3, 48};
    for (int i = 0; i < 10; i++)
    {
        if (is_even(ar[i]) == 1)
        {
            cout << ar[i] << " is even" << endl;
        }
        else
        {
            cout << ar[i] << " is odd" << endl;
        }
    }
}