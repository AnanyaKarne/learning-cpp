#include <iostream>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sswap(int ar[],int size){
    int i=0;
    while(i<size){
        swap(ar[i],ar[i+1]);
        i+=2;
    }
    // cout<<ar[6]; 
}
int main(){
    int ar[6]={1,2,3,4,5,6};
    int size=6;
    sswap(ar,size);
    print_array(ar,size);
}