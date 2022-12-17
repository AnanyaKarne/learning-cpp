#include <iostream>
using namespace std;

int binary_search_it(int ar[], int size, int l, int r, int key)
{

    int mid = (l + r) / 2;
    while (l <= r)
    {
        if (ar[mid] == key)
        {
             return mid;
        }
        else if (ar[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
             r = mid - 1;
        }
        mid=(l+r)/2;
    }
    return -1;
}

int main()
{
    int size = 7;
    int ar[] = {3, 5, 6, 8, 9, 22, 34};
    int key=22;
    cout << binary_search_it(ar, 7, 0, 6, key);
}