#include <iostream>
using namespace std;
// void rem()
// {
//     int ar[]
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int ar[k];
        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }

        int l;
        cin >> l;
        int br[l];
        for (int i = 0; i < l; i++)
        {
            cin >> br[i];
        }
        //--------------------------
        bool flag=0;
        for(int i=0;i<l;i++){
            int x=br[i];
            for(int j=0;j<k;j++){
                int y=ar[i];
                int n=0;
                if(x==y){
                    ar[j]=ar[j+1];
                    flag=1;
                    break;
                }
               
            }
        }
        for (int i = 0; i < l; i++)
        {
            cout<<"ans: "<<ar[i]<<" ";
        }
        cout<<endl;
    }
}