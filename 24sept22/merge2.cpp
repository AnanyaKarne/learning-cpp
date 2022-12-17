#include<iostream>
using namespace std;

int main(){


    int a[]={10,12,34,22,1};
    int b[]={2,9,13};

    int n=5;
    int m=3;

    int c[n+m];
    int k=0;

    for(int i=0;i<n;i++){
        c[k]=a[i];
        k++;
    }
    for(int i =0;i<m;i++){
        c[k]=b[i];
        k++;
    }
    int temp;
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(c[i]>c[j]){
             temp=c[i];
             c[i]=c[j];
             c[j]=temp;   
            }
        }
    }
    for(int i =0;i<k;i++){
        cout<<c[i]<<" ";
    }

}