#include <iostream>
using namespace std;
void sub(int a){
     int x = a*60;
    int m = x/30;
    cout<<m<<endl;
}
int main(){
    int t;
    cin>>t;
  
    while(t--){
    int a;
    cin>>a;
    sub(a);
    }
}