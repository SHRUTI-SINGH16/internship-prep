#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N) SC=O(1)   
// int search(int arr[], int n, int x){
//     int i=0;
//     while(true){
//         if(arr[i]==x){
//             return i;
//         }
//         if(arr[i]>x){
//             return -1;
//         }
//         ++i;
//     }
// }


int binarys(int arr[],int x,int low, int high){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}

//TC=O(LOG(pos))  SC=O(1)
int search(int arr[], int n, int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(arr[i]<x){
        i=i*2;
        if(arr[i]==x){
            return i;
        }
    }
    return binarys(arr,x,i/2+1,i-1);
}



int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<search(arr,n,x);

}


