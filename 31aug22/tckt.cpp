#include <iostream>
using namespace std;
void tckt(int x, int y, int z){
    int k= y-z;
    int n= k*x;
    cout<<n<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        tckt(a,b,c);
    }
}