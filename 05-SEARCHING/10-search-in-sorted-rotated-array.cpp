#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N) SC=O(1)     linear search
// int sorted(int arr[], int n, int x){
//     for(int i=0;i<n;++i){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }


//TC=O(LOGn)  SC=O(1)
int sorted(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>arr[low]){  //left sorted
            if(x>=arr[low] && x<arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{  //right sorted
            if(x>arr[mid] && x<=arr[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<sorted(arr,n,x);
}


