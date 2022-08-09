#include<bits/stdc++.h>
using namespace std;

// //TC=O(N^2)
// int diff(int arr[],int n){
//     int largest = INT_MIN;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<n;++j){
//             if((arr[j]-arr[i])>=largest){
//                 largest = arr[j]-arr[i];
//             }
//         }
//     }
//     return largest;
// }

//TC = O(N)
int diff(int arr[],int n){
    
    return largest;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    cout<<diff(arr,n);
    
    return 0;
}