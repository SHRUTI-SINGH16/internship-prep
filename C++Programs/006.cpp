#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// //sorting technique
//tc=O(nlogn)  SC=O(N)
// //but majority element should always be present 
// //this is a pre-requisite
// int majority(int arr[],int n){
//     sort(arr,arr+n);
//     return arr[n/2];
// }

//naive solution
// //tc=O(n^2)  SC=O(1)
int majority(int arr[],int n){
    for(int i=0;i<n;++i){
        int count = 0;
        for(int j=0;j<n;++j){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }else{
            count = 0;
        }
    }
    return -1;
}



// //store freq of all distinct elements using HASHING
// //tc=O(n)  SC=O(N)
// int majority(int arr[],int n){
//     unordered_map<int,int> maps;
//     for(int i=0;i<n;++i){
//         maps[arr[i]]++;
//     }
//     for(auto x: maps){
//         if(x.second>n/2){
//             return x.first;
//         }
//     }
//     return -1;
// }

//tc=O(n)  SC=O(1)
// //Boyer-Moore
// int majority(int arr[], int n){
//     int res = 0;
//     int count = 1;
//     for(int i=1;i<n;++i){
//         if(arr[i]==arr[res]){
//             count++;
//         }else{
//             count--;
//         }
//         if(count == 0){
//             count = 1;
//             res = i;
//         }
//     }

//     int cnt = 0;
//     for(int i=0;i<n;++i){
//         if(arr[i]==arr[res]){
//             cnt++;
//         }
//     }

//     if(cnt>n/2){
//         return arr[res];
//     }else{
//         return -1;
//     }
// }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<majority(arr,n)<<endl;
    return 0;
}