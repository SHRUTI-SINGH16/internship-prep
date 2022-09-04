#include<bits/stdc++.h>
using namespace std;

// //TC=O(N^2)   SC=O(1)
// int countingones(int arr[],int n){
//     int count = 0;
//     int largest = INT_MIN;
//     for(int i=0;i<n;++i){
//         for(int j=i;j<n;++j){
//             if(arr[j]==1){
//                 count++;
//             }else{
//                 break;
//             }
            
//         }
        
//         largest = max(count,largest);
//         count = 0;
//     }
//     return largest;
// }


//TC=O(N)   SC=O(1)
int countingones(int arr[],int n){
    int count = 0;
    int largest = 0;
    for(int i=0;i<n;++i){
        if(arr[i]==0){
            count = 0;
        }else{
            count++;
            largest = max(largest,count);
        }
    }
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
    cout<<countingones(arr,n);
    
    return 0;
}