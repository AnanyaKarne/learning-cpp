#include <iostream>
using namespace std;
void equal(int a, int b){
    if(a<b ){
        while(a<b){
            a*=2;
        }
        if(a==b){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else if(b<a ){
        while(b<a){
            b*=2;
        }
        if(b==a){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
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
        int a=50, b=20;
        cin>>a>>b;
        equal(a,b);
    }
}