#include <iostream>
using namespace std;
void eq(int a, int b){
    int k=a-b;
    int l= abs(k);
    if(l%2==0){
        cout<<"yes"<<endl;
    }
    else if(a==b){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        eq(a,b);
    }
}