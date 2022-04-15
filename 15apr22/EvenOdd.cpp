#include <iostream>
using namespace std;

bool is_even(int a ){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    bool a = is_even(3);
    cout<<a;
}