#include <iostream>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int k = a.length();
    char dot = '.';
    for (int i = 0; i <= a.length(); i++)
    {
        a.at(i);
    
    if (a.at(i) == dot)
    {
        cout << a.at(i) << endl;
    }
  
    }
}
