#include <iostream>
using namespace std;

int power(int x, int y){
    int result = 1;
    for (int i = 0; i < y; i++){
        result = result * x;
    }
    return result;
}

int main()
{
    while(1){
    int a, b;
    cout<<"enter two values"<<endl;
    cin>>a>>b;
    int answer = power(a,b);
    cout<< answer<< endl;
    }
    return 0;
}