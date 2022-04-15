#include <iostream>
using namespace std;
int sum(int ar[],int size){
    int s=0;
    for(int i=0;i<size;i++){
        s+=ar[i];
    }
    // cout<<"the sum is : "<<endl;
    return s;
}
int main()
{
    int num[100];
    int size;
    cin>>size;
    for (int i = 0;i<size;i++){
        cin>>num[i];
    }
    cout<<sum(num,size);
}