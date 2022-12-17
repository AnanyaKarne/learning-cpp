#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void dom(int n, int ar[])
{
    sort(ar, ar + n);
    int k;
    k = ar[n - 1] + 1;
    int freq[k] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[ar[i]] += 1;
    }
    sort(freq, freq + k);
   if(k>1){
			if(freq[k-1]==freq[k-2]){
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}
		else{
			cout<<"Yes"<<endl;
		}
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i =0;i<n;i++){
            cin>>ar[i];
        }
        dom(n, ar);
    }
}