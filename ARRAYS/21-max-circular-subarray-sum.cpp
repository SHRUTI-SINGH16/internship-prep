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
void maxcircular(int arr[],int n){
    int largest = INT_MAX;
    int sum = arr[0];
    int total = arr[0];
    for(int i=1;i<n;++i){
        total = total + arr[i];
        sum = min(sum+arr[i],arr[i]);
        largest = min(sum,largest);
    }
    cout<<total-largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    maxcircular(arr,n);

}


