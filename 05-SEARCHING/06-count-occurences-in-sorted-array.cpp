#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N) SC=O(1)   LINEAR SEARCH
// int countoccur(int arr[],int n, int x){
//     int count = 0;
//     for(int i=0;i<n;++i){
//         if(arr[i]==x){
//             count++;
//         }
//     }
//     return count;
// }

int firstoccur(int arr[],int n, int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid-1;
        }else if(arr[mid]<x){
            low = mid+1;
        }else if(arr[mid]==x){
            if(mid==0 || arr[mid]!=arr[mid-1]){
                return mid;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int lastoccur(int arr[],int n, int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid-1;
        }else if(arr[mid]<x){
            low = mid+1;
        }else if(arr[mid]==x){
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }else{
                low = mid+1;
            }
        }
    }
    return -1;
}

//TC=O(LOGN) SC=O(1)  BINARY SEARCH ITERATIVE with both firstoccurence and last occurence
int countoccur(int arr[],int n, int x){
    int first = firstoccur(arr,n,x);
    int last = lastoccur(arr,n,x);
    if(first==-1){
        return 0;
    }else{
        return last-first+1;
    }
}



int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<countoccur(arr,n,x);

}


