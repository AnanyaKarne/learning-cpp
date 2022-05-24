#include <iostream>
using namespace std;
// pass by value-the compiler COPIES the value of an arguement in a calling function,it does not affect the original value.  
int num(int n){
    int twice =n*2;
    return twice;
}
int main(){
    int a=7;
  cout<<"the new value of the number is: "<< num(a)<<endl;
  cout<<"the old value of the number is: "<< a;
return 0;
}