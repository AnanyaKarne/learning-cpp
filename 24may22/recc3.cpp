#include <iostream>
using namespace std;

int func(int i, int n){
    if(i>n){
        return 0;
}
    cout<<n<<endl;
    func(i,n-1);
    return 0;
}

int main(){
    int n;
    cin>>n;
    
    func(1,n);
}