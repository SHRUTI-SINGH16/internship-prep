#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N^2) SC=O(1)     linear search
// void twosum(int arr[], int n, int x){
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<n;++j){
//             if(arr[i]+arr[j]==x){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }


//TC=O(n)  SC=O(1)
void twosum(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==x){
            cout<<arr[low]<<" "<<arr[high]<<endl;
            break;
        }else if(arr[low]+arr[high]>x){
            high--;
        }else{
            low++;
        }
    }
    
}


int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    // peak(arr,n);
    twosum(arr,n,x); //for binary search solution
}


