#include <iostream>
using namespace std;
int eq(int a, int b){
    int m= 2*a + 2*b +a*b;
    return m;
}
void exist(int x){
    
    int a, b;
    
    for(a =1;a<=x/2;a++){
        for(b=1;b<=x/2;b++){
            if(eq(a,b)==x){
                cout<<a<<" and "<<b<<" yes "<<endl;
            }
            
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        exist(x);
    }
}