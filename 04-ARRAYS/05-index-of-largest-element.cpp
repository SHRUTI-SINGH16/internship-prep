#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int maximum = INT_MIN;
    int ans = 0;
    for(int i=0;i<n;++i){
        if(arr[i]>=maximum){
            maximum = arr[i];
            ans = i;
        }
    }
    cout<<"Largest element "<<maximum<<" is present at : "<<ans<<endl;
    return 0;
}
