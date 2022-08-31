#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N^3) SC=O(1)     linear search
// void threesum(int arr[], int n, int x){
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<n;++j){
//             for(int k=j+1;k<n;++k){
//                if(arr[i]+arr[j]+arr[k]==x){
//                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                }
//             }                
//         }
//     }
// }


//TC=O(n^2)  SC=O(1)
void threesum(int arr[], int n, int x){
    for(int i=0;i<n;++i){
        int low = i+1;
        int high = n-1;
        while(low<high){
            if(arr[low]+arr[high]+arr[i]==x){
                cout<<arr[i]<<arr[low]<<" "<<arr[high]<<endl;
                break;
            }else if(arr[low]+arr[i]+arr[high]>x){
                high--;
            }else{
                low++;
            }
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
    threesum(arr,n,x); //for binary search solution
}


