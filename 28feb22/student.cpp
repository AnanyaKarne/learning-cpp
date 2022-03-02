#include <iostream>
#include <string>
using namespace std;

class student
{
    int age;
    int standard;
    string first_name;
    string last_name;

    public:
    //set functions take arguement and set value,they are void 
    // get funtions have same data type as the return value
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    
};
int main()
{
    student st;
    st.get_age();
    st.get_standard();

}