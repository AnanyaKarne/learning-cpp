#include <iostream>
using namespace std;

void watest(int a, int ar[], string bin)
{
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        if (bin[i] == 0)
        {
            k = ar[i];
            cout<< k<<endl;
            cout<<"------"<<endl;
            break;
        }
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        string bin;
        
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        
    }
    return 0;
}
