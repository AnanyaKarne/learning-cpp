#include <iostream>
#include <algorithm>
using namespace std;

void avg(int ar[]){
    sort(ar,ar+3);
   int x=ar[0]+ar[1];
   int k= x/2;
   if(k<35){
    cout<<"fail"<<endl;
   }
   else{
    cout<<"pass"<<endl;
   }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int ar[3];
	    for(int i=0;i<3;i++){
	        cin>>ar[i];
	    }
	    avg(ar);
	}
	return 0;
}
