#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //tc=o(n^2) sc=o(n)
// void maxcircular(int arr[],int n){
//     int largest = 0;
//     int indexsum;
//     int indexmaxsum;
//     for(int i=0;i<n;++i){
//         indexsum = arr[i];
//         indexmaxsum = arr[i];
//         for(int j=1;j<n;++j){
//             int index = (i+j)%n;
//             indexsum = indexsum + arr[index];
//             indexmaxsum = max(indexmaxsum,indexsum);
//         }
//         largest = max(largest,indexmaxsum);
//     }
    
//     cout<<largest;
// }


//tc=O(N)  SC=O(1)
//USED MODIFIED KANDANES ALGO
//TOTAL-MIN SUM SUBARRAY

int kadane(int arr[],int n){
    int largest = arr[0];
    int sum = arr[0];
    for(int i=1;i<n;++i){
        sum = max(sum+arr[i],arr[i]);
        largest = max(largest,sum);
    }
    return largest;
}

int maxcircular(int arr[],int n){
    int largest = INT_MAX;
    int sum = arr[0];
    int total = arr[0];
    for(int i=1;i<n;++i){
        total = total + arr[i];
        sum = min(sum+arr[i],arr[i]);
        largest = min(sum,largest);
    }
    if(kadane(arr,n)<0){
        return kadane(arr,n);
    }
    return total-largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<maxcircular(arr,n);

}


