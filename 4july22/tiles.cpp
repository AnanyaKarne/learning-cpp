#include <iostream>
using namespace std;
void tiles(int n, int m, int a)
{
    int n, m, a;
    int z = n * a;
    int y = a * a;
    int x = n * m;
    int t = 0;
    int i;
    while (i = z)
    {
        if (i >= 1)
        {
            int w = i - a;
        }
        else{
            cout<<"1"<<endl;
        }
        x -= y && t++;
    }
    cout <<
}
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    tiles(n, m, a);
}

// if(y<z){
//    int w= z-y;
//     if(w>=1){

//         int v = w-a;
//         if(v>=1){
//             int q=v-a;
//         }

//     }
// }
// else return 1;
