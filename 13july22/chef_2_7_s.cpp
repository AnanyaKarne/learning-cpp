#include <iostream>
using namespace std;
void integer(int n){
    // if(n%2!=0 && n>6){
    //     cout<<"yes"<<endl;
    // }
    if( n==5 || n==1 || n==3  ){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    integer(n);
    }   
}