#include <iostream>
#include <algorithm>
using namespace std;
void triple(int ar[], int a)
{

    if (a < 3)
    {
        cout << "ans"
             << "-1" << endl;
    }
    else if (a >= 3)
    {

        // sort(ar, ar+ a);

        for (int i = 0; i < a; i++)
        {

            int count = 0;
            int key = ar[i];
            for (int j = 0; j < a; j++)
            {
                if (ar[j] == key)
                {
                    count++;
                }
            }
            cout << "ans" << key << endl;
        }
    }
    else
    {
        cout << "ans" << "-1" << endl;
    }
}
int main()
{
   

        int a[7]={2 ,2, 3, 3, 4, 2, 2};
        
       
        triple(a,7);
    
}
