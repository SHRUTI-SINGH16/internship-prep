#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insert(int arr[], int capacity , int size, int x, int pos){
    for(int i=4;i>=pos;--i){
        arr[1+i]=arr[i];
    }
    arr[pos]=x;
}

void traverse(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int y= 6;
    int arr[y] = {1,2,3,4,5};
    int size = 5;
    int x=9;
    int pos = 2;
    insert(arr,y,size,x,pos);
    traverse(arr,y);
    
    return 0;
}