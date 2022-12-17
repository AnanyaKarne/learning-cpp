#include <iostream>
using namespace std;

void phn(int a, int b){
    if(a<b){
        cout<<"repair"<<endl;
    }
    else if(b<a){
        cout<<"new"<<endl;
    }
    else{
        cout<<"any"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    phn(a,b);
	}
	return 0;
}
