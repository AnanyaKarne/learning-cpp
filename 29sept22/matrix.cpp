#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    // int a, b;
    // cin >> a;
    // cin >> b;
    // int ar1[a][b];
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cin >> ar1[i][j];
    //     }
    // }
    // cout<<endl;
    int c[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout<<endl;
        for (int j = 0; j < n; j++)
        {
            cout<<c[i][j];
        }
    }
}