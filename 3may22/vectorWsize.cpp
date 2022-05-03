#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5,2);
    cout<< "the a vector is :"<<endl;
    // use loop for printings
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    // for copying
    vector<int> b(a);
    cout<< "the b vector is :"<<endl;

      for(int i:b){
        cout<<i<<" ";
    }
}