#include <iostream>
using namespace std;
class VForm
{
public:
    int age;
    int phone;
    VForm(int a,int p){
        cout<<"constructor of VForm"<<endl;//parent
    }
    VForm(int age){
        cout<<"constructor of VForm takes 1 para"<<endl;
    }
    VForm(){
        cout<<"constructor of VForm no para"<<endl;
    }
};
main(){
VForm x;
VForm y(29,33);
VForm z(29);

}