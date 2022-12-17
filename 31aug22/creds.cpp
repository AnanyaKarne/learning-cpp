#include <iostream>
using namespace std;
void credits(int x, int y, int z){
    int k = x*4 + y*2;
    cout<<k<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        credits(a,b,c);
    }
}