#include <iostream>
using namespace std;
void duplicate(int ar[],int size){
    int ans=0;
     for(int i=0;i<size;i++){
         ans=ar[i]^ar[i];
     }
        cout<<"ans"<<ans;
//      for(int i=0;i<size;i++){
//          ans=ans^i;
//      }
//      cout<<"duplicate is: "<<ans;
}
int main(){
    int size;
    cin>>size;
    int ar[size];
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    duplicate(ar,size);
}
// 1 4 2 3 5 3
// 1 4 2 3 5 3