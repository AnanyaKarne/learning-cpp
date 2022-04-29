#include <iostream>
using namespace std;
int main(){
    int ans=0;
    for (int i=0;i<10;i++){
        ans=1^i;
        cout<<"1 xor " <<i<<" = "<<ans<<endl;
    }
}