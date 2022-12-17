#include <iostream>
using namespace std;
void tryd(int x){
    for(int i=1;i*i<=x;i++){
        if((x-2*i)%(i+2)==0&&x!=2*i){
            cout<<"yes"<<endl;
        }
       
    }
   
}
int main(){
    int x;cin>>x;
    tryd(x);
}