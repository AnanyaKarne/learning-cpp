#include <iostream>
#define ll long long
#include <set>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n;
        cin>>n;
        set <ll> s;
        for(ll i=0;i< n;i++){
            ll l;
            cin>>l;
            s.insert(l);
        }
        ll m=s.size();
        if(m==n && n%2==1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    
}