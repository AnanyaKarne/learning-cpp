#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    while(1){
    float a, b;
    cout << "enter value of a and b" << endl;
    cin >> a >> b;
    char op;
    cout << "enter the operation u wanna operate" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b<<endl;
        break;
    case '-':
        cout << a - b<<endl;
        break;

    case '*':
        cout << a * b<<endl;
        break;
    case '/':
        cout << a / b<<endl;
        break;
    case '%':
        cout << fmod(a,b)<<endl;
        break;
    }
}
}