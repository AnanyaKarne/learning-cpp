#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            char c= 'A'+i-1;
            cout<<c;
        }
        cout<<endl;
    }
}