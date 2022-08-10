#include <iostream>
using namespace std;

void population(int x, int y, int z){
    int k = x-y+z;
    cout<<k<<endl;;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while( t--){
        int a,b,c;
        cin>>a>>b>>c;
        population(a,b,c);
    }
	return 0;
}
