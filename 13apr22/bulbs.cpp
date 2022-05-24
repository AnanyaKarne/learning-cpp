#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, X;
        cin>>N>>X;
        int ar[N-1];
        for(int i=0;i<N-1;i++){
            cin>>ar[i];
        }
        int sum=0;
        for(int i=0;i<N-1;i++){
            sum+=ar[i];
        }
        int ans;
        ans=(N*X)-sum;
        if(ans<0){
            ans=0;
        }
        cout<<ans<<endl;
        
    }
}