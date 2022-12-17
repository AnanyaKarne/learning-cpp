#include <iostream>
#define ll long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
        int a=0;
	    for(int i =1;i<=k;i++){
            
            a=a+i;
        }
            if(a<=n){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
	}
	return 0;
}
