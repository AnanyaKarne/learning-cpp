#include <iostream>
using namespace std;
int main()
{
    char a = 'r';
    int num = 2;
    switch (num)
    {
    case 1:
        cout << "no1";
        break;
    case 'r':
        cout << "nope2";
        break;
    case 2:
        cout << "yes 3";
        break;
    default:
        cout << " doesn't exist";
    }
}