#include<bits/stdc++.h>
using namespace std;

//TC=O(N)   SC=O(1)
int profit(int arr[],int n){
    int count = 0;
    for(int i=1;i<n;++i){
        if(arr[i-1]<arr[i]){
            count = count + arr[i] - arr[i-1];
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    cout<<profit(arr,n);
    
    return 0;
}