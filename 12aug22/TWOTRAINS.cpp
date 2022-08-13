#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void train(long long a, long long ar[]){
    long long x=0;
    sort(ar,ar+a);
    for(int i =0; i<a;i++){
        x+=ar[i];
    }
    x+=ar[a-1];
    cout<<x<<endl;

}
int main(){
 int t;
 cin>>t;
 while(t--){
    long long a;
    cin>>a;
    a--;
    long long ar[a];
    for(int i = 0; i<a;i++){
        cin>>ar[i];
    }
    train(a,ar);
 }
}