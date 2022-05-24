#include <iostream>
using namespace std;

int func(int i,int n){
    if(i>n){
        return 0;
    }
    cout<<i<<endl;
    func(i+1,n);
    return 0;
}
int main(){
    int n;
    int i=1;
    cin>>n;
    func(i,n);
}