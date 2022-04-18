#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;

    cin >> n;
    string word;

    while(n--)
    {
        cin >> word;
        if (word.size() > 10)
        {
            int temp = word.size() - 2;
            cout << word[0] << temp << word[word.size() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
}
