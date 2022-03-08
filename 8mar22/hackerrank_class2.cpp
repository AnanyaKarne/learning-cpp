#include <iostream>

using namespace std;
class student
{

public:
    int score[5];
};
int main()
{
    student st;
    cout << "enter array elements" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cin >> st.score[i];
    }

    cout << "elements:" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << st.score[i] << endl;
    }
}