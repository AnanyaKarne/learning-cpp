#include <iostream>
using namespace std;
void insertion(int ar[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = ar[i];
        int index = i - 1;
        while (index >= 0)
        {
            if (value < ar[index])
            {
                ar[index + 1] = ar[index];
                ar[index] = value;
                index--;
            }
            else
            {
                break;
            }
        }
    }
}

void print(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}
int main()
{
    int size = 6;
    int ar[6] = {7, 3, 1, 2, 4, 6};
    insertion(ar, size);
    print(ar, size);
}