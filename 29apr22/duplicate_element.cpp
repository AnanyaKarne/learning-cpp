#include <iostream>
using namespace std;
void duplicate(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
    int ans = ar[0];            
        ans = ans ^ ar[i];
        if (ans == 0)
        {
            cout << ar[i];
            break;
        }
        else{
            cout<<"chinki"<<endl;
        }
    }
}
int main()
{
    int ar[5] = {2, 4, 3, 3, 5};
    int size = 5;
    duplicate(ar, 5);
}