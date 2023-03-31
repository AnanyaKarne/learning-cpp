#include <iostream>
using namespace std;
class form{

    private:
    int age;
    int id;
    public:
    int setage(int a){
        age=a;
        return age;
    }
    form(int a, int b){
     cout<<" the constructor" <<endl;  
     age=a;
     id=b;
    }
    int getage(int b){
        cout <<"age: "<<age<<endl; 
    }
};
main(){
    form f(20,60);
    cout<<f.setage(22);// by defualt sends address
    // int v;
    // cout<<"enter age: ";
    // cin>>v;
    // f.setage(v);
    // f.getage(v);
    
}

