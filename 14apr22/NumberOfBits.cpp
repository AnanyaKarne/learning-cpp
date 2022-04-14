#include<iostream>
using namespace std;
int term(int n){
    int t1=0;
    int t2=1;
    for(int i=0;i<n;i++){
        t1=+i;
    }
    return t1;
}
int main(){
    int a=5;
    cout<<term(a)<<endl;
}