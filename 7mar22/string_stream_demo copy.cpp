#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    int a=100;
    stringstream s;
    s<<a;
    string i;
    s>>i;
    cout<<i;

}