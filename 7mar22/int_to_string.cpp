#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string int_to_string(int a){
    stringstream s;
    s<<a;
    string k;
    s>>k;
    return k;
}
int main(){
    int a=200;
    string i=int_to_string(a);
    cout<<i;
}