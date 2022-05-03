#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5,2);
    cout<< "the a vector is :"<<endl;
    // use loop for printing
    for(int i:a){
        cout<<i<<" ";
    }
}