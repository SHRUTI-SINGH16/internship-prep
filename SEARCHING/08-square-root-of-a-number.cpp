#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// //TC = O(N^0.5) SC=O(1)   
// int root(int n){
//     int i=1;
//     while(i*i<=n){
//         ++i;
//     }
//     return i-1;
// }

//TC=O(LOGN)  SC=O(1)
int root(int n){
    int low = 1;
    int high = n;
    int ans;
    while(low<=high){
        int mid = (low+high)/2;
        int sq = mid*mid;
        if(sq==n){
            return mid;
        }else if(sq>n){
            high = mid -1;
        }else if(sq<n){
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<root(n);

}


