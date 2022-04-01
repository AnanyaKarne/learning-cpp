#include <iostream>
using namespace std;
int main()
{
    char a = 'r';
    int num = 1;
    switch (a)
    {
    case 1:
        cout << "no1";
        break;
        
    case 'r':
        // cout << "nope2";
        switch(a){
            case 'r':
            cout<<"2nd switch"<<endl;;
            break;
        }
        cout<<"character out"<<endl;
        break;
    case 2:
        cout << "yes 3";
        break;
    default:
        cout << " doesn't exist";
    }
}