#include <iostream>
#include <algorithm>
using namespace std;
void pseudo(int ar[],int n){
    for(int i=0;i<n;i++){
        if(ar[i]>ar[i+1]){
            swap(ar[i],ar[i+1]);
            break;
            cout<<"yes"<<endl;
        }
              if(ar[i]<ar[i+1]<ar[i+2]<ar)
        // else{
        //      cout<<"no"<<endl;
        // }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int ar[100000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        pseudo(ar,n);
    }
}