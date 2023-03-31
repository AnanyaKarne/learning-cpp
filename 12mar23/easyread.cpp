#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string c;
        int count = 0;
        int n;
        bool h;
        cin >> n;
        cin >> c;
        for (int i = 0; i < n; i++)
        {
            
            if (c[i]== 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
            {
                count=0;
            }
            else{
                count++;
            }
            if(count>=4){
                h=false;
                break;
            }
            
        }
        if(count<4 ||n<=3){
            cout<<"yes"<<endl;
        }
        else if(count>=4 || h==false){
            cout<<"no"<<endl;
        }
    }
}

cppp