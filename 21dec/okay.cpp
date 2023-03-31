#include <iostream>
using namespace std;
int n =10;
void score(int a, int b){
int k=a/n;
int f=k*b;
cout<<f<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
        score(a,b);
    }
}