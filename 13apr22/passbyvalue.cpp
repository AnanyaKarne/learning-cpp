#include <iostream>
using namespace std;

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