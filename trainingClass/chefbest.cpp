#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int t;
    cout<<"ener t: ";
    cin>>t;
    while(t--){
    int a, b, c;
    cin>>a>>b>>c;
    int x=b-a;
    int k;
    k=x/c;
    cout<<"answer is: "<<k<<endl;
    }
	return 0;
}
