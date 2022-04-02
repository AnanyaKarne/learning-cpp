#include <iostream>
using namespace std;

int main()
{
    int num_of_hundreds=0;
    int num_of_fiftys=0;
    int num_of_twentys=0;
    int num_of_ones=0;
    int num;
    cout << "enter a number" << endl;
    cin >> num;

    switch (num > 100)
    {
    case true:
    {
        num_of_hundreds = num / 100;

        num = num - num_of_hundreds * 100;
    }
    }
    switch (num > 50)
    {
    case true:
    {
        num_of_fiftys = num / 50;
        num = num - num_of_fiftys * 50;
    }
    }
    switch (num > 20)
    {
    case true:
    {
        num_of_twentys = num / 20;

        num = num - num_of_twentys * 20;
    }
    }
    switch (num > 1)
    {
    case true:
    {
        num_of_ones = num / 1;

        num = num - num_of_ones * 1;
    }
    }
    cout << "no. of 100s notes needed will be: " << num_of_hundreds << endl;
    cout << "no. of 50s notes needed will be: " << num_of_fiftys << endl;
    cout << "no. of 20s notes needed will be: " << num_of_twentys << endl;
    cout << "no. of 1s notes needed will be: " << num_of_ones << endl;
}