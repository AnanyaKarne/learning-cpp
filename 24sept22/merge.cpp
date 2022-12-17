#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 35, 32, 13, 26};
    int b[3] = {2, 9, 19};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int i, j, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (b[j] < b[i])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    int x = n + m;
    int c[x];
    i=0,j=0;
    int k=0;
    while((i<m) && (j<n)){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
            k++;
        }
        else if(a[i]==b[j]){
            c[k]=b[j];
            j++;
            k++;
            i++;
        }
        
    }

    for(int i=0;i<x;i++){
        cout<<c[i]<<" ";
    }
    cout<<k;
}
