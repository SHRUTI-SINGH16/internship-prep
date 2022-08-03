#include<iostream>
using namespace std;

int find(int arr[],int n,int x){
    for(int i=0;i<n;++i){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int x=5;
    cout<<find(arr,5,x)<<endl;
    return 0;
}