#include <iostream>
using namespace std;

int count = 0;

int func()
{
    if(count==5){
        

        return 0;
    }
    cout << count << endl;

    count++;
    func();
    //it doesn't print 5 bcz when count reaches 5, it askd to return and not to print

    return 0;

}
int main()
{
    func();
}