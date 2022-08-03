#include<iostream>
using namespace std;

int search(int arr[],int size, int element){
    for(int i=0;i<size;++i){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

void traverse(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}

void deleteelem(int arr[], int size, int element){
    int index = search(arr,size,element);
    if(index==-1){
        cout<<"Can't delete"<<endl;
    }else{
        for(int i=index;i<size;++i){
            arr[i] = arr[i+1];
        }
        --size;
        traverse(arr,size);
    }
    
    
}

int main()
{
    int n = 5;
    int arr[] = {1,2,3,4,5};
    int del = 3;
    deleteelem(arr,n,del);
    
    return 0;
}