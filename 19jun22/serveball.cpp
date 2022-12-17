#include <iostream>
using namespace std;
void serve(int a, int b){
    int s=a+b;
    int k=s/2;
    if(k%2==1){
        cout<<"bob"<<endl;
    }
    else{
        cout<<"alice"<<endl;
    }
    
}
int main(){
    int t; 
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        serve(a,b);
    }
}

// s;
// 0 -a;0
// 1-a;

// 2-b;1
// 3-b;

// 4-a;2
// 5-a;

// 6-b;3
// 7-b;

// 8-a;4
// 9-a;

// 10-b;5
// 11-b;

// 12-a;6
// 13-a;