#include <iostream>
using namespace std;
void duplicate(int ar[],int size){
    int ans=0;
     for(int i=0;i<size;i++){
         ans=ans^ar[i];
     }
     for(int i=0;i<size;i++){
         ans=ans^i;
     }
     cout<<"duplicate is: "<<ans;
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