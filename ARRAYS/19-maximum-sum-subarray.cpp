#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //TC=O(N^2) SC=O(1)
// void maxsum(int arr[],int n){
//     int largest = INT_MIN;
//     for(int i=0;i<n;++i){
//         int count = 0;
//         for(int j=i;j<n;++j){
//             count = count + arr[j];
//             largest = max(count,largest);
//         }
//     }
//     cout<<largest;
// }

//TC=O(N)  SC=O(1)
void maxsum(int arr[],int n){
    int largest = arr[0];
    int sum = arr[0];
    for(int i=1;i<n;++i){
        sum = max(sum+arr[i],arr[i]);
        largest = max(largest,sum);
    }
    cout<<largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    maxsum(arr,n);

}


