#include <iostream>
#include <vector>
using namespace std;
int summ(int ar[], int k)
{
    int i = 0;
    int j = 7;
    while (i < j)
    {
        if (ar[i] + ar[j] == k)
        {
            cout<<ar[i]<<"  "<<ar[j]<<endl;
            return k;
        }
        else if (ar[i] + ar[j] > k)
        {
            j--;
        }
        else if (ar[i] + ar[j] < k)
        {
            i++;
        }
        else{
            return 0;
        }
    }
}
int main()
{
    int k = 13;
    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8};

    summ(ar, k);
}