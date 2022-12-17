#include <iostream>
using namespace std;

void pay(int x){
    int a=1;
    int b=10;
    int l=x%10;
    int k=l/1;
    // int t= l+k;
    cout<<k<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        pay(x);
    }
}