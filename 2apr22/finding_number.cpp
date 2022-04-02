#include <iostream>
using namespace std;
// int temp=0;
// int a=1330;

// void hundred(){
//     int a;
//     temp=a/100;
// }
// void fifty(){
//     int a;
//     temp=a/50;
// }
// void twenty(){
//     int a;
//     temp=a/20;
// }
// void one(){
//     int a;
//     temp=a/1;
// }
// int main(){
//     int a;
//     if(a>100){
//         hundred();
//     }

// int a, h;
// int q=0;
// int w=0;
// a=1300;
// h=100;
// q=a/h;
// cout<<"number of 100's note needed are: "<<q;

// if(a>0){
//     a/
//}
// }

int main()
{
    int num_of_hundreds;
    int num_of_fiftys;
    int num_of_twentys;
    int num_of_ones;
    int num ;
    cout<<"enter a number"<<endl;
    cin>>num;
    int a = 0;
    if (num > 100)
    {
        a = num / 100;
        cout << "no. of 100s notes needed will be: " << a << endl;
        num = num - a * 100;
    }
    if (num > 50)
    {
        a = num / 50;
        cout << "no. of 50s notes needed will be: " << a << endl;
        num = num - a * 50;
    }
    if (num > 20)
    {
        a = num / 20;
        cout << "no. of 20s notes needed will be: " << a << endl;

        num = num - a * 20;
    }
    if (num > 1)
    {
        a = num / 1;
        cout << "no. of 1s notes needed will be: " << a << endl;

        num = num - a * 1;
    }
}