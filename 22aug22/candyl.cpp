#include <iostream>
#include <cmath>
using namespace std;
void candy(int a, int b){
    float k;
    k=a/b;
    cout<<"k="<<k<<endl;
    int n = ceil(k);
    cout<<"n="<<n<<endl;
    if ( a<b){
        cout<<"no"<<endl;
        }
    else if(n%2==0){
        cout<<"yes"<<endl;
    }
    else if (k==0){
        cout<<"no"<<endl;
    }
    
    else{
        cout<<"no"<<endl;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    candy(a,b);
}


// ----------------------
#include <iostream>
#include <cmath>
using namespace std;
void candy(int a, int b){
    float k;
    k=a/b;
    cout<<"k="<<k<<endl;
    int n = ceil(k);
    cout<<"n="<<n<<endl;
    if(a<b){
      cout<<"no"<<endl;
    }
    else if(n%2==0){
        cout<<"yes"<<endl;
    }
    else if (k==0){
        cout<<"no"<<endl;
    }
    
}
int main(){
    int a,b;
    // cin>>a>>b;
    a=2;
    b=4;
    candy(a,b);
}