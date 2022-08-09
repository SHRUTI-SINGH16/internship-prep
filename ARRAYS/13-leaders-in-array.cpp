#include<bits/stdc++.h>
using namespace std;


// //TC=O(N^2) 
// void leaders(int arr[],int n){
//     vector<int> ans;
//     for(int i=0;i<n;++i){
//         bool flag = false;
//         for(int j=i+1;j<n;++j){
//             if(arr[i]<=arr[j]){
//                 flag = true;
//             }
//         }
//         if(flag==false){
//             ans.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<ans.size();++i){
//         cout<<ans[i]<<" ";
//     }
// }



//TC=O(N)
void leaders(int arr[],int n){
    vector<int> ans;
    ans.push_back(arr[n-1]);
    int largest = arr[n-1];
    int res;
    for(int i=n-2;i>=0;--i){
        bool flag = true;
        if(arr[i]>largest){
            largest=arr[i];
        }else{
            flag = false;
        }
        if(flag==true){
            ans.push_back(arr[i]);
        }
    }
        for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    leaders(arr,n);
    
    return 0;
}