#include <iostream>
using namespace std;
void tv(int a, int b, int c, int d){
    int one = a-c;
    int two = b-d;
    if(one < two){
        cout<<"first"<<endl;
    }
    else if (two < one){
        cout<<"second"<<endl;
    }
    else{
        cout<<"any"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        tv(a,b,c,d);
    }
}