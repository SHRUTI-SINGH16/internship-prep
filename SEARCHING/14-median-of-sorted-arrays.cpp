#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//TC = O((n1+n2)log(n1+n2)) SC=O(1)     linear search
int medianarr(int arr1[],int arr2[], int n1,int n2){
    int brr[n1+n2];
    for(int i=0;i<n1;++i){
        brr[i] = arr1[i];
    }
    for(int i=0;i<n2;++i){
        brr[n1+i] = arr2[i];
    }
    sort(brr,brr+n1+n2);
    float ans;
    if((n1+n2)%2==0){
        ans = (brr[(n1+n2)/2] + brr[(n1+n2)/2 - 1])/2;
        return ans;
    }else{
        ans = brr[(n1+n2)/2 - 1];
        return ans;
    }
}

// //TC=O(n^2)  SC=O(1)
// void threesum(int arr[], int n, int x){
//     for(int i=0;i<n;++i){
//         int low = i+1;
//         int high = n-1;
//         while(low<high){
//             if(arr[low]+arr[high]==x-arr[i]){
//                 cout<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<endl;
//                 break;
//             }else if(arr[low]+arr[high]>x-arr[i]){
//                 high--;
//             }else{
//                 low++;
//             }
//         }
//     } 
// }


int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;++i){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;++i){
        cin>>arr2[i];
    }
    // peak(arr,n);
    cout<<medianarr(arr1,arr2,n1,n2); //for binary search solution
}


