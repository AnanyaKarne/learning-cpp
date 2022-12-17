#include <iostream>
using namespace std;
int main(){
    int ar[5]={2, 4, 5, 6 ,7};
    int pos=2;
    for(int i=pos;i<5;i++){
        ar[i]=ar[i+1];
    }
    for(int i=0;i<4;i++){
        cout<<ar[i]<<" ";
    }
    
} 
