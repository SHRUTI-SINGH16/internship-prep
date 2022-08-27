#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//find if a k-sized subaary of target sum exists
//1 8 30 -5 20 7
//o/p = 45
int ksumsubarray(int arr[],int n, int sum){
    int curr_sum = arr[0];
    int start = 0;
    for(int end=1;end<=n;end++){
        // If currentSum exceeds the sum,
        // then remove the starting elements
        while(curr_sum>sum && start<end-1){
            curr_sum = curr_sum - arr[start];
            start++;
        }
        // If currentSum becomes equal to sum,
        // then return true
        if(curr_sum==sum){
            cout<<"Found b/w "<<start<<" and "<<end-1<<endl;
            return 1;
        }
        if(end<n){
            curr_sum = curr_sum + arr[end];
        }

    }
    cout<<"Not found"<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<ksumsubarray(arr,n,sum);

}


