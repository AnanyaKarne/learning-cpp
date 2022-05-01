#include <iostream>
#include <array>
using namespace std;
int main(){
    int ar[]={1,2,3,4};
    array <int ,4> a={2,3,4,5};
    int size=a.size();//only for STL array, thats why used 'a' and not 'ar'
    cout<<size;
}