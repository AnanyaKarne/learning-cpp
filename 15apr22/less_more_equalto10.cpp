#include <iostream>
using namespace std;

bool less_than_10(int num)
{
    if (num < 10)
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
    int ar[10] = {12, 34, 52, 6, 7,10, 45, 2, 3, 48};
    for (int i = 0; i < 10; i++)
    {

        if (less_than_10(ar[i])==1)
        {
            cout <<"less than 10 "<< ar[i] << " "<<endl;
        }
        else{
            cout<<"greater than equals to 10 "<<ar[i]<<endl;
        }
    }
}