#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C, D;
        cin>>A>>B>>C>>D;
        if(A<=C && B<=D ){
            cout<<"POSSIBLE"<<endl;
        }
       else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }

}