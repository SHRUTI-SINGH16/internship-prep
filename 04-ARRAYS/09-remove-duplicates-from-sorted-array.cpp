#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//using a temp array  O(N)   space complexity is O(N) and not O(1) as
//we have used a new array
// void removeduplicates(int arr[],int n){
//     vector<int> ans;
//     ans.push_back(arr[0]);
//     for(int i=1;i<n;++i){
//         if(arr[i]!=arr[i-1]){
//             ans.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<ans.size();++i){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

//without extra space;
void removeduplicates(int arr[],int n){
    int j = 1;
    int count = 0;
    for(int i=1;i<n;++i){
        if(arr[i]!=arr[i-1]){
            arr[j] = arr[i];
            ++j;
            count++;
        }
    }

    for(int i=0;i<=count;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    removeduplicates(arr,n);

}