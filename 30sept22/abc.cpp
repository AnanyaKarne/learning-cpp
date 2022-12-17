/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(100);
    s.insert(10);
    s.insert(130);
    s.insert(12);

    set<int>::iterator it = s.begin();
    for (; it != s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
