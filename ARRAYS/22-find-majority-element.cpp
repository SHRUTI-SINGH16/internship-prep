#include<iostream>
#include<bits/stdc++.h>
using namespace std;



// //TC=O(N^2) SC=O(1)
// void majority(int arr[],int n){
//     int count = 0;
//     for(int i=0;i<n;++i){
//         count = 0;
//         for(int j=0;j<n;++j){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             cout<<i<<endl;
//         }
//     }
// }

//BOYER-MOORE'S algorithm
//TC=O(N) AND SC=O(1)
void majority(int arr[],int n){
    //finding a candidate
    int count = 1;
    int res = 0;
    for(int i=1;i<n;++i){
        if(arr[res]==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            count = 1;
            res = i;
        }
    }

    //finding whether candidate is majority
    int total = 0;
    for(int i=0;i<n;++i){
        if(arr[res]==arr[i]){
            total++;
        }  
    }
    if(total>=n/2){
        cout<<res<<endl;;
    }else{
        cout<<-1<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    majority(arr,n);

}


