#include <iostream>
using namespace std;
void division(int a){
    if(a>=1900){
        cout<<" Division 1"<< endl;
    }
    else if(a>=1600 && a<=1899){
        cout<<" Division 2"<< endl;   
    }
    else if(a>=1400 && a<=1599){
        cout<<" Division 3"<< endl;   
    }
    else if(a<=1399){
        cout<<" Division 4"<< endl;   
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int a;
    cin>>a;
    division(a);
    }
}
/*For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399
Division X*/