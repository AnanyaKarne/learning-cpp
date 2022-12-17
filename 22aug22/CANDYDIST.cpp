#include <iostream>
#include <cmath>
using namespace std;
void candy(float a, float b){
    float k;
    k=a/b;
    
    int n = ceil(k);

    if(a<b){
      cout<<"no"<<endl;
    }
    else if(n%2==0){
        cout<<"yes"<<endl;
    }
    else if(k==0){
        cout<<"no"<<endl;
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
    int x=(float)a;
    int y=(float)b;
    candy(x,y);
    }
}